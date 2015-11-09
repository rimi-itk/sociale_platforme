<?php

/**
 * @file
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Select the current install profile by default.
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  foreach ($form['profile'] as $key => $element) {
    $form['profile'][$key]['#value'] = 'sp';
  }
}

/**
 * Implements hook_form_alter().
 */
function sp_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'install_configure_form') {
    // Disable Acquia Connector.
    $form['server_settings']['enable_acquia_connector']['#default_value'] = 0;
    $form['server_settings']['enable_acquia_connector']['#access'] = FALSE;
    $form['server_settings']['acquia_connector_modules']['#access'] = FALSE;
    $form['server_settings']['acquia_description']['#access'] = FALSE;
  }
}

/**
 * Implements hook_install_tasks().
 */
function sp_install_tasks(&$install_state) {
  return array(
    'sp_import_translation' => array(
      'display_name' => st('Set up translations'),
      'display' => TRUE,
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'type' => 'batch',
    ),
  );
}

/**
 * Installation step callback.
 *
 * @param $install_state
 *   An array of information about the current installation state.
 */
function sp_import_translation(&$install_state) {
  // Enable l10n_update.
  module_enable(array('l10n_update'), TRUE);

  // Enable danish language.
  include_once DRUPAL_ROOT . '/includes/locale.inc';
  locale_add_language('da', NULL, NULL, NULL, '', NULL, TRUE, TRUE);

  // Build batch with l10n_update module.
  $history = l10n_update_get_history();
  module_load_include('check.inc', 'l10n_update');
  $available = l10n_update_available_releases();
  $updates = l10n_update_build_updates($history, $available);

  // Fire of the batch!
  module_load_include('batch.inc', 'l10n_update');
  $updates = _l10n_update_prepare_updates($updates, NULL, array());
  $batch = l10n_update_batch_multiple($updates, LOCALE_IMPORT_KEEP);
  return $batch;
}

/**
 * Implements hook_install_tasks_alter().
 */
function sp_install_tasks_alter(&$tasks, $install_state) {

  // Unset Commons tasks.
  $unset_tasks = array(
    'commons_installer_palette',
    'commons_anonymous_message_homepage',
    'commons_create_first_group',
  );
  foreach ($unset_tasks as $unset_task) {
    unset($tasks[$unset_task]);
  }

  // Remove core steps for translation imports.
  unset($tasks['install_import_locales']);
  unset($tasks['install_import_locales_remaining']);

  // Callback for language selection.
  $tasks['install_select_locale']['function'] = 'sp_locale_selection';
}

/**
 * Set default language to english.
 */
function sp_locale_selection(&$install_state) {
  $install_state['parameters']['locale'] = 'en';
}

/**
 * Implements hook_install_finished().
 */
function sp_install_finished($install_state) {

  // Flush all caches to ensure that any full bootstraps during the installer
  // do not leave stale cached data, and that any content types or other items
  // registered by the installation profile are registered correctly.
  drupal_flush_all_caches();

  // Cache a fully-built schema.
  drupal_get_schema(NULL, TRUE);

  // Rebuild permissions.
  node_access_rebuild();

  // Clear out messages.
  drupal_get_messages();

  // If we don't install drupal using Drush, redirect the user to the front
  // page.
  if (!drupal_is_cli()) {
    drupal_goto('');
  }
}
