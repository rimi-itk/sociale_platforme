<?php

/**
 * @file
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function sociale_platforme_form_system_theme_settings_alter(&$form, $form_state) {

  // Hide advanced theme settings
  // $form["theme_settings"]['#access'] = FALSE;
  // $form["alpha_settings"]['#access'] = FALSE;.
  // The following CT should always be active.
  $types_default = array("group", "post", "notice");

  // Content Types.
  $types = node_type_get_types();

  $types_list = array();
  foreach ($types as $key => $val) {
    if (!in_array($key, $types_default)) {
      $types_list[$key] = $val->name;
    }
  }

  // Settings Form.
  $form['general'] = array(
    '#title' => t('Site information'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
  );
  $form['general']['site_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Site name'),
    '#required' => TRUE,
    '#default_value' => variable_get('site_name'),
  );
  $form['general']['site_mail'] = array(
    '#type' => 'textfield',
    '#title' => t('Email address'),
    '#description' => 'Fra-adressen i automatiske beskeder som sendes ved oprettelse af brugere samt udsendelse af nye adgangskoder og andre beskeder. (Brug en adresse på sitets domæne for at undgå at beskeder fra adressen bliver markeret som spam.)',
    '#required' => TRUE,
    '#default_value' => variable_get('site_mail'),
  );
  $form['types'] = array(
    '#title' => 'Indholdstyper',
    '#type' => 'fieldset',
  );
  $form['types']['sp_content_types'] = array(
    '#type'          => 'checkboxes',
    '#title'         => t('Content types'),
    '#options'             => $types_list,
    '#default_value' => theme_get_setting('sp_content_types'),
    '#description'     => 'Vælg hvilke indholdstyper der skal være aktive på websitet.',
  );

  $form['#process'][] = 'sociale_platforme_make_collapsible';
  $form['#submit'][] = 'sociale_platforme_settings_form_submit';

}

/**
 * Custom form submission handler for system theme settings.
 *
 * Handles general settings plus enabling and disabling of content types throughtout the system.
 */
function sociale_platforme_settings_form_submit(&$form, $form_state) {

  /**
     * General Settings
     */
  variable_set('site_name', $form_state['values']['site_name']);
  variable_set('site_mail', $form_state['values']['site_mail']);

  /**
     * Content Types
     */
  $content_types = $form_state["values"]["sp_content_types"];
  $browsing_widgets = ctools_export_crud_load_all('commons_bw_ui');

  // Enable or disable browsing widgets (Quicktabs).
  foreach ($browsing_widgets as $widget) {
    if (array_key_exists($widget->bundle, $content_types)) {
      $status = $content_types[$widget->bundle];
      if ($status === 0) {
        ctools_export_crud_disable('commons_bw_ui', $widget);
      }
      else {
        ctools_export_crud_enable('commons_bw_ui', $widget);
      }
    }
  }

  // Grant or remove content access view permissions.
  foreach ($content_types as $type_name => $status) {
    $settings = array();
    if ($status === 0) {
      $settings['view_own'] = array();
      $settings['view'] = array();
    }
    else {
      $settings['view_own'] = array(1, 2);
      $settings['view'] = array(1, 2);
    }
    content_access_set_settings($settings, $type_name);
  }
  node_access_rebuild();
}

/**
 * Custom process function.
 */
function sociale_platforme_make_collapsible($form) {

  $form['types']['#weight'] = 3;
  $form['types']['#collapsible'] = TRUE;
  $form['logo']['#weight'] = 1;
  $form['logo']['#collapsible'] = TRUE;
  $form['color']['#weight'] = 4;
  $form['color']['#collapsible'] = TRUE;
  $form['favicon']['#weight'] = 2;
  $form['favicon']['#collapsible'] = TRUE;

  return $form;
}
