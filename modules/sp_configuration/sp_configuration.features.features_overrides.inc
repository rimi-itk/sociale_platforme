<?php
/**
 * @file
 * sp_configuration.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_configuration_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers.
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-24b3c991-c23b-42de-b3bb-c83824a3fca7"] = (object) array(
    'pid' => 'new-24b3c991-c23b-42de-b3bb-c83824a3fca7',
    'panel' => 'right',
    'type' => 'views_panes',
    'subtype' => 'sp_who_s_online-panel_pane_1',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(),
    'cache' => array(),
    'style' => array(
      'settings' => NULL,
    ),
    'css' => array(),
    'extras' => array(),
    'position' => 0,
    'locks' => array(),
    'uuid' => '24b3c991-c23b-42de-b3bb-c83824a3fca7',
  );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-deed05d0-e6bb-9b94-9d09-499090d1e5d3|configuration|leave_node_title"] = 0;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|content|new-deed05d0-e6bb-9b94-9d09-499090d1e5d3|panel"] = 'left';
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|layout"] = 'social_12_twocol_eightfour';
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|footer"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|header"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|left"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panel_settings|style_settings|right"] = NULL;
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panels|left"] = array(
    0 => 'new-deed05d0-e6bb-9b94-9d09-499090d1e5d3',
  );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panels|right"] = array(
    0 => 'new-24b3c991-c23b-42de-b3bb-c83824a3fca7',
  );
  $overrides["page_manager_handlers.node_view_panel_context.conf|display|panels|two_66_33_first"]["DELETED"] = TRUE;

  return $overrides;
}
