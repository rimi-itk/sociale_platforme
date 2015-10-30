<?php
/**
 * @file
 * sp_groups_directory.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function sp_groups_directory_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'groups_directory';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Groups Directory';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'sp_groups',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Grid',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'sp_groups',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'List',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Grid');
  t('Groups Directory');
  t('List');

  $export['groups_directory'] = $quicktabs;

  return $export;
}
