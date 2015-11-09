<?php
/**
 * @file
 * sp_group_homepages.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function sp_group_homepages_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:group:default'])) {
    $data['node:group:default']->display->content['new-10f12c5b-679e-d294-b1bd-9aac845800f5']->configuration['override_title_text'] = 'Om denne gruppe'; /* WAS: '' */
    $data['node:group:default']->display->content['new-10f12c5b-679e-d294-b1bd-9aac845800f5']->panel = 'right'; /* WAS: 'two_66_33_first' */
    $data['node:group:default']->display->content['new-13120946-03a1-bfc4-2d74-f39dd758ebce']->panel = 'right'; /* WAS: 'two_66_33_second' */
    $data['node:group:default']->display->content['new-13120946-03a1-bfc4-2d74-f39dd758ebce']->position = 2; /* WAS: 0 */
    $data['node:group:default']->display->content['new-559cb8e8-c7b3-4fb9-ac57-60292ab6e351'] = (object) array(
      'pid' => 'new-559cb8e8-c7b3-4fb9-ac57-60292ab6e351',
      'panel' => 'left',
      'type' => 'node_create_links',
      'subtype' => 'node_create_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'types' => array(
          'event' => 'event',
          'post' => 'post',
          'poll' => 'poll',
          'gallery' => 'gallery',
        ),
        'field_name' => 'og_group_ref',
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => 'Opret indhold',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(
        'type' => 'none',
        'regions' => array(
          'left' => 'left',
        ),
      ),
      'uuid' => '559cb8e8-c7b3-4fb9-ac57-60292ab6e351',
    ); /* WAS: '' */
    $data['node:group:default']->display->content['new-80b62348-7cee-e304-5d65-0ce1b6bbb216']->panel = 'left'; /* WAS: 'two_66_33_first' */
    $data['node:group:default']->display->content['new-976c762b-1bf0-40f6-99d9-9ef0f9819380'] = (object) array(
      'pid' => 'new-976c762b-1bf0-40f6-99d9-9ef0f9819380',
      'panel' => 'right',
      'type' => 'views_panes',
      'subtype' => 'sp_group_followers-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '976c762b-1bf0-40f6-99d9-9ef0f9819380',
    ); /* WAS: '' */
    $data['node:group:default']->display->layout = 'social_12_twocol_eightfour'; /* WAS: 'two_66_33' */
    $data['node:group:default']->display->panel_settings['style_settings']['footer'] = NULL; /* WAS: '' */
    $data['node:group:default']->display->panel_settings['style_settings']['header'] = NULL; /* WAS: '' */
    $data['node:group:default']->display->panels['left'] = array(
      0 => 'new-559cb8e8-c7b3-4fb9-ac57-60292ab6e351',
      1 => 'new-80b62348-7cee-e304-5d65-0ce1b6bbb216',
    ); /* WAS: '' */
    $data['node:group:default']->display->panels['right'] = array(
      0 => 'new-10f12c5b-679e-d294-b1bd-9aac845800f5',
      1 => 'new-976c762b-1bf0-40f6-99d9-9ef0f9819380',
      2 => 'new-13120946-03a1-bfc4-2d74-f39dd758ebce',
    ); /* WAS: '' */
    unset($data['node:group:default']->display->content['new-52796f83-93dd-2cf4-41aa-33520dc31e5f']);
    unset($data['node:group:default']->display->content['new-a7009535-0e2a-2c94-edd2-4ecc953c4ca2']);
    unset($data['node:group:default']->display->content['new-ba735f2b-4734-7724-098d-1925c6a4bb47']);
    unset($data['node:group:default']->display->panels['two_66_33_first']);
    unset($data['node:group:default']->display->panels['two_66_33_second']);
  }
}
