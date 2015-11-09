<?php
/**
 * @file
 * sp_events_pages.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function sp_events_pages_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-field_logo'])) {
    $data['node-event-field_logo']['display']['default']['settings']['image_style'] = 'node_banner'; /* WAS: '50x50' */
    $data['node-event-field_logo']['display']['teaser']['weight'] = 3; /* WAS: 0 */
    $data['node-event-field_logo']['widget']['weight'] = 10; /* WAS: 9 */
  }
}

/**
 * Implements hook_menu_default_menu_links_alter().
 */
function sp_events_pages_menu_default_menu_links_alter(&$data) {
  if (isset($data['main-menu:events'])) {
    $data['main-menu:events']['hidden'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function sp_events_pages_node_info_alter(&$data) {
  if (isset($data['event'])) {
    $data['event']['name'] = 'Begivenhed'; /* WAS: 'Event' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function sp_events_pages_default_page_manager_pages_alter(&$data) {
  if (isset($data['views_events_landing_page'])) {
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-80f087dc-fe84-7354-e19b-23e398080db9']->panel = 'right'; /* WAS: 'two_66_33_second' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-80f087dc-fe84-7354-e19b-23e398080db9']->position = 3; /* WAS: 4 */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-8c211515-77bf-48fd-9fb6-7dacd293bff3'] = (object) array(
          'pid' => 'new-8c211515-77bf-48fd-9fb6-7dacd293bff3',
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
          'uuid' => '8c211515-77bf-48fd-9fb6-7dacd293bff3',
        ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-9118fc7d-3da5-cf54-5152-5d66043812b2']->panel = 'right'; /* WAS: 'two_66_33_second' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-9118fc7d-3da5-cf54-5152-5d66043812b2']->position = 1; /* WAS: 2 */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-d0980eb3-c220-4586-9857-21d16d552094'] = (object) array(
          'pid' => 'new-d0980eb3-c220-4586-9857-21d16d552094',
          'panel' => 'header',
          'type' => 'content_add',
          'subtype' => 'content_add',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'description' => 'Begivenheder kan for eksempel være planlagte aktiviteter eller møder.',
            'override_title' => 1,
            'override_title_text' => 'Opret begivenhed',
            'types' => NULL,
            'type' => 'event',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => 'add-event',
            'css_class' => '',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'd0980eb3-c220-4586-9857-21d16d552094',
        ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-d776b637-24a9-7e74-712c-8bc27d399c3e']->panel = 'right'; /* WAS: 'two_66_33_second' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-d776b637-24a9-7e74-712c-8bc27d399c3e']->position = 0; /* WAS: 1 */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-e72884a7-369b-1954-2d1f-d69207c4d6ff']->panel = 'left'; /* WAS: 'two_66_33_first' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-ef7caf29-a6a8-e654-5997-6b969eba407a']->panel = 'right'; /* WAS: 'two_66_33_second' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-ef7caf29-a6a8-e654-5997-6b969eba407a']->position = 2; /* WAS: 3 */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->layout = 'social_12_twocol_eightfour'; /* WAS: 'two_66_33' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panel_settings['style_settings']['footer'] = NULL; /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panel_settings['style_settings']['header'] = NULL; /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panel_settings['style_settings']['left'] = NULL; /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panel_settings['style_settings']['right'] = NULL; /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['footer'] = array(
      0 => 'new-8c211515-77bf-48fd-9fb6-7dacd293bff3',
    ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['header'] = array(
      0 => 'new-d0980eb3-c220-4586-9857-21d16d552094',
    ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['left'] = array(
      0 => 'new-e72884a7-369b-1954-2d1f-d69207c4d6ff',
    ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['right'] = array(
      0 => 'new-d776b637-24a9-7e74-712c-8bc27d399c3e',
      1 => 'new-9118fc7d-3da5-cf54-5152-5d66043812b2',
      2 => 'new-ef7caf29-a6a8-e654-5997-6b969eba407a',
      3 => 'new-80f087dc-fe84-7354-e19b-23e398080db9',
    ); /* WAS: '' */
    $data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->title = 'Begivenheder'; /* WAS: 'Events' */
    $data['views_events_landing_page']->menu['name'] = 'main-menu'; /* WAS: '' */
    $data['views_events_landing_page']->menu['parent'] = array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => 0,
    ); /* WAS: '' */
    $data['views_events_landing_page']->menu['title'] = 'Begivenheder'; /* WAS: '' */
    $data['views_events_landing_page']->menu['type'] = 'normal'; /* WAS: '' */
    $data['views_events_landing_page']->menu['weight'] = 3; /* WAS: '' */
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->content['new-b91ad246-669c-2e14-fd32-5728153b0ed8']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['two_66_33_first']);
    unset($data['views_events_landing_page']->default_handlers['page_views_events_landing_page_panel_context']->conf['display']->panels['two_66_33_second']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function sp_events_pages_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:event:default'])) {
    $data['node:event:default']->display->content['new-a2912068-e5e2-c804-b1ba-3260dc059c9b']->panel = 'right'; /* WAS: 'two_66_33_second' */
    $data['node:event:default']->display->content['new-aef85835-68a5-2494-b107-136f1cb92749']->panel = 'right'; /* WAS: 'two_66_33_second' */
    $data['node:event:default']->display->content['new-f259289a-8ef0-6aa4-2592-c59928474958']->panel = 'left'; /* WAS: 'two_66_33_first' */
    $data['node:event:default']->display->layout = 'social_12_twocol_eightfour'; /* WAS: 'two_66_33' */
    $data['node:event:default']->display->panels['left'] = array(
      0 => 'new-f259289a-8ef0-6aa4-2592-c59928474958',
    ); /* WAS: '' */
    $data['node:event:default']->display->panels['right'] = array(
      0 => 'new-a2912068-e5e2-c804-b1ba-3260dc059c9b',
      1 => 'new-aef85835-68a5-2494-b107-136f1cb92749',
    ); /* WAS: '' */
    unset($data['node:event:default']->display->panels['two_66_33_first']);
    unset($data['node:event:default']->display->panels['two_66_33_second']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function sp_events_pages_views_default_views_alter(&$data) {
  if (isset($data['commons_events_event_attendee_list'])) {
    $data['commons_events_event_attendee_list']->display['default']->display_options['fields']['picture']['image_style'] = '100x100_avatar'; /* WAS: '50x50' */
    $data['commons_events_event_attendee_list']->display['default']->display_options['style_plugin'] = 'default'; /* WAS: 'grid' */
  }
  if (isset($data['commons_events_organizers'])) {
    $data['commons_events_organizers']->display['default']->display_options['fields']['picture']['image_style'] = '100x100_avatar'; /* WAS: '50x50' */
    $data['commons_events_organizers']->display['default']->display_options['style_plugin'] = 'default'; /* WAS: 'grid' */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function sp_events_pages_image_default_styles() {
  $styles = array();

  // Exported image style: node_banner.
  $styles['node_banner'] = array(
    'label' => 'Node banner',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 620,
          'height' => 215,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
