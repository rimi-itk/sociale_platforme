<?php
/**
 * @file
 * sp_configuration.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function sp_configuration_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context'])) {
    $data['node_view_panel_context']->conf['display']->content['new-24b3c991-c23b-42de-b3bb-c83824a3fca7'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->content['new-deed05d0-e6bb-9b94-9d09-499090d1e5d3']->configuration['leave_node_title'] = 0; /* WAS: 1 */
    $data['node_view_panel_context']->conf['display']->content['new-deed05d0-e6bb-9b94-9d09-499090d1e5d3']->panel = 'left'; /* WAS: 'two_66_33_first' */
    $data['node_view_panel_context']->conf['display']->layout = 'social_12_twocol_eightfour'; /* WAS: 'two_66_33' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['footer'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['header'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['left'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panel_settings['style_settings']['right'] = NULL; /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panels['left'] = array(
      0 => 'new-deed05d0-e6bb-9b94-9d09-499090d1e5d3',
    ); /* WAS: '' */
    $data['node_view_panel_context']->conf['display']->panels['right'] = array(
      0 => 'new-24b3c991-c23b-42de-b3bb-c83824a3fca7',
    ); /* WAS: '' */
    unset($data['node_view_panel_context']->conf['display']->panels['two_66_33_first']);
  }
}
