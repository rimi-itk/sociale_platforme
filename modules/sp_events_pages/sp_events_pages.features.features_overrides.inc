<?php
/**
 * @file
 * sp_events_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_events_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance.
  $overrides["field_instance.node-event-field_logo.display|default|settings|image_style"] = 'node_banner';
  $overrides["field_instance.node-event-field_logo.display|teaser|weight"] = 3;
  $overrides["field_instance.node-event-field_logo.widget|weight"] = 10;

  // Exported overrides for: menu_links.
  $overrides["menu_links.main-menu:events.hidden"] = 1;

  // Exported overrides for: node.
  $overrides["node.event.name"] = 'Begivenhed';

  // Exported overrides for: page_manager_pages.
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-80f087dc-fe84-7354-e19b-23e398080db9|panel"] = 'right';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-80f087dc-fe84-7354-e19b-23e398080db9|position"] = 3;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-8c211515-77bf-48fd-9fb6-7dacd293bff3"] = (object) array(
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
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-9118fc7d-3da5-cf54-5152-5d66043812b2|panel"] = 'right';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-9118fc7d-3da5-cf54-5152-5d66043812b2|position"] = 1;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-b91ad246-669c-2e14-fd32-5728153b0ed8"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-d0980eb3-c220-4586-9857-21d16d552094"] = (object) array(
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
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-d776b637-24a9-7e74-712c-8bc27d399c3e|panel"] = 'right';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-d776b637-24a9-7e74-712c-8bc27d399c3e|position"] = 0;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-e72884a7-369b-1954-2d1f-d69207c4d6ff|panel"] = 'left';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-ef7caf29-a6a8-e654-5997-6b969eba407a|panel"] = 'right';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|content|new-ef7caf29-a6a8-e654-5997-6b969eba407a|position"] = 2;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|layout"] = 'social_12_twocol_eightfour';
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panel_settings|style_settings|footer"] = NULL;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panel_settings|style_settings|header"] = NULL;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panel_settings|style_settings|left"] = NULL;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panel_settings|style_settings|right"] = NULL;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|footer"] = array(
    0 => 'new-8c211515-77bf-48fd-9fb6-7dacd293bff3',
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|header"] = array(
    0 => 'new-d0980eb3-c220-4586-9857-21d16d552094',
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|left"] = array(
    0 => 'new-e72884a7-369b-1954-2d1f-d69207c4d6ff',
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|right"] = array(
    0 => 'new-d776b637-24a9-7e74-712c-8bc27d399c3e',
    1 => 'new-9118fc7d-3da5-cf54-5152-5d66043812b2',
    2 => 'new-ef7caf29-a6a8-e654-5997-6b969eba407a',
    3 => 'new-80f087dc-fe84-7354-e19b-23e398080db9',
  );
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.views_events_landing_page.default_handlers|page_views_events_landing_page_panel_context|conf|display|title"] = 'Begivenheder';
  $overrides["page_manager_pages.views_events_landing_page.menu|name"] = 'main-menu';
  $overrides["page_manager_pages.views_events_landing_page.menu|parent"] = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => 0,
  );
  $overrides["page_manager_pages.views_events_landing_page.menu|title"] = 'Begivenheder';
  $overrides["page_manager_pages.views_events_landing_page.menu|type"] = 'normal';
  $overrides["page_manager_pages.views_events_landing_page.menu|weight"] = 3;

  // Exported overrides for: panelizer_defaults.
  $overrides["panelizer_defaults.node:event:default.display|content|new-a2912068-e5e2-c804-b1ba-3260dc059c9b|panel"] = 'right';
  $overrides["panelizer_defaults.node:event:default.display|content|new-aef85835-68a5-2494-b107-136f1cb92749|panel"] = 'right';
  $overrides["panelizer_defaults.node:event:default.display|content|new-f259289a-8ef0-6aa4-2592-c59928474958|panel"] = 'left';
  $overrides["panelizer_defaults.node:event:default.display|layout"] = 'social_12_twocol_eightfour';
  $overrides["panelizer_defaults.node:event:default.display|panels|left"] = array(
    0 => 'new-f259289a-8ef0-6aa4-2592-c59928474958',
  );
  $overrides["panelizer_defaults.node:event:default.display|panels|right"] = array(
    0 => 'new-a2912068-e5e2-c804-b1ba-3260dc059c9b',
    1 => 'new-aef85835-68a5-2494-b107-136f1cb92749',
  );
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:event:default.display|panels|two_66_33_second"]["DELETED"] = TRUE;

  // Exported overrides for: views_view.
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|fields|picture|image_style"] = '100x100_avatar';
  $overrides["views_view.commons_events_event_attendee_list.display|default|display_options|style_plugin"] = 'default';
  $overrides["views_view.commons_events_organizers.display|default|display_options|fields|picture|image_style"] = '100x100_avatar';
  $overrides["views_view.commons_events_organizers.display|default|display_options|style_plugin"] = 'default';

  return $overrides;
}
