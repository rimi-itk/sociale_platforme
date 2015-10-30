<?php
/**
 * @file
 * sp_groups_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sp_groups_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sp_groups_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function sp_groups_directory_default_page_manager_pages_alter(&$data) {
  if (isset($data['groups_directory'])) {
    $data['groups_directory']->arguments['input'] = array(
      'id' => 1,
      'identifier' => 'Tekst',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ); /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->content['new-901085e1-eec5-403e-b860-9e2b7f7752e7'] = (object) array(
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
    ); /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->content['new-a3eccbcd-bf9f-4ad1-bffb-77f77f71b902'] = (object) array(
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
    ); /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->content['new-fb671d25-c430-4d41-8ebd-37ca19a985fc'] = (object) array(
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
    ); /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->layout = 'social_12_twocol_eightfour'; /* WAS: 'two_66_33' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panel_settings['style_settings']['content'] = NULL; /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panel_settings['style_settings']['footer'] = NULL; /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panel_settings['style_settings']['header'] = NULL; /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panels['footer'] = array(
      0 => 'new-901085e1-eec5-403e-b860-9e2b7f7752e7',
    ); /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panels['header'] = array(
      0 => 'new-a3eccbcd-bf9f-4ad1-bffb-77f77f71b902',
      1 => 'new-fb671d25-c430-4d41-8ebd-37ca19a985fc',
    ); /* WAS: '' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->title = 'Grupper'; /* WAS: 'Groups' */
    $data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->title_pane = 0; /* WAS: 'new-bf6c6f1b-08a6-3874-7186-c955c763c092' */
    $data['groups_directory']->menu['title'] = 'Grupper'; /* WAS: 'Groups' */
    $data['groups_directory']->menu['weight'] = 2; /* WAS: -1 */
    $data['groups_directory']->path = 'grupper/!input'; /* WAS: 'groups' */
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->content['new-3db36521-fb53-58a4-c9e2-137a2dacee07']);
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->content['new-ab237aa5-5ae7-8fb4-e1ce-20c776a6950b']);
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->content['new-bf6c6f1b-08a6-3874-7186-c955c763c092']);
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panels['two_66_33_first']);
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panels['two_66_33_second']);
    unset($data['groups_directory']->default_handlers['page_groups_directory_panel_context']->conf['display']->panels['two_66_33_top']);
  }
}

/**
 * Implements hook_image_default_styles().
 */
function sp_groups_directory_image_default_styles() {
  $styles = array();

  // Exported image style: group_grid.
  $styles['group_grid'] = array(
    'label' => 'Group grid',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: group_list.
  $styles['group_list'] = array(
    'label' => 'Group list',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
