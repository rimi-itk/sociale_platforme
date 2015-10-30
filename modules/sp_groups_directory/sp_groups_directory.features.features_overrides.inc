<?php
/**
 * @file
 * sp_groups_directory.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_groups_directory_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages.
  $overrides["page_manager_pages.groups_directory.arguments|input"] = array(
    'id' => 1,
    'identifier' => 'Tekst',
    'name' => 'string',
    'settings' => array(
      'use_tail' => 0,
    ),
  );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|content|new-3db36521-fb53-58a4-c9e2-137a2dacee07"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|content|new-901085e1-eec5-403e-b860-9e2b7f7752e7"] = (object) array(
    'pid' => 'new-901085e1-eec5-403e-b860-9e2b7f7752e7',
    'panel' => 'footer',
    'type' => 'community_stats',
    'subtype' => 'community_stats',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(),
    'cache' => array(),
    'style' => array(),
    'css' => array(),
    'extras' => array(),
    'position' => 0,
    'locks' => array(),
    'uuid' => '901085e1-eec5-403e-b860-9e2b7f7752e7',
  );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|content|new-a3eccbcd-bf9f-4ad1-bffb-77f77f71b902"] = (object) array(
    'pid' => 'new-a3eccbcd-bf9f-4ad1-bffb-77f77f71b902',
    'panel' => 'header',
    'type' => 'content_add',
    'subtype' => 'content_add',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(
      'description' => 'En gruppe indeholder brugere og indhold relateret ved en fælles interesse eller formål.',
      'type' => 'group',
      'override_title' => 1,
      'override_title_text' => 'Opret gruppe',
    ),
    'cache' => array(),
    'style' => array(
      'settings' => NULL,
    ),
    'css' => array(
      'css_id' => 'add-group',
      'css_class' => '',
    ),
    'extras' => array(),
    'position' => 0,
    'locks' => array(),
    'uuid' => 'a3eccbcd-bf9f-4ad1-bffb-77f77f71b902',
  );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|content|new-ab237aa5-5ae7-8fb4-e1ce-20c776a6950b"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|content|new-bf6c6f1b-08a6-3874-7186-c955c763c092"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|content|new-fb671d25-c430-4d41-8ebd-37ca19a985fc"] = (object) array(
    'pid' => 'new-fb671d25-c430-4d41-8ebd-37ca19a985fc',
    'panel' => 'header',
    'type' => 'block',
    'subtype' => 'quicktabs-groups_directory',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    ),
    'cache' => array(),
    'style' => array(
      'settings' => NULL,
    ),
    'css' => array(),
    'extras' => array(),
    'position' => 1,
    'locks' => array(),
    'uuid' => 'fb671d25-c430-4d41-8ebd-37ca19a985fc',
  );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|layout"] = 'social_12_twocol_eightfour';
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panel_settings|style_settings|content"] = NULL;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panel_settings|style_settings|footer"] = NULL;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panel_settings|style_settings|header"] = NULL;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panels|footer"] = array(
    0 => 'new-901085e1-eec5-403e-b860-9e2b7f7752e7',
  );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panels|header"] = array(
    0 => 'new-a3eccbcd-bf9f-4ad1-bffb-77f77f71b902',
    1 => 'new-fb671d25-c430-4d41-8ebd-37ca19a985fc',
  );
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|panels|two_66_33_top"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|title"] = 'Grupper';
  $overrides["page_manager_pages.groups_directory.default_handlers|page_groups_directory_panel_context|conf|display|title_pane"] = 0;
  $overrides["page_manager_pages.groups_directory.menu|title"] = 'Grupper';
  $overrides["page_manager_pages.groups_directory.menu|weight"] = 2;
  $overrides["page_manager_pages.groups_directory.path"] = 'grupper/!input';

  return $overrides;
}
