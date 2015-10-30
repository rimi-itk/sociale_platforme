<?php
/**
 * @file
 * sp_user_profile_pages.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sp_user_profile_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function sp_user_profile_pages_default_page_manager_handlers_alter(&$data) {
  if (isset($data['user_view_panel_context'])) {
    $data['user_view_panel_context']->conf['display']->content['new-20f47a2e-7cb8-a944-8944-3f15009131f7']->configuration['formatter'] = 'link_domain'; /* WAS: 'link_default' */
    $data['user_view_panel_context']->conf['display']->content['new-20f47a2e-7cb8-a944-8944-3f15009131f7']->configuration['formatter_settings']['strip_www'] = 0; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-20f47a2e-7cb8-a944-8944-3f15009131f7']->panel = 'content'; /* WAS: 'three_33_top' */
    $data['user_view_panel_context']->conf['display']->content['new-20f47a2e-7cb8-a944-8944-3f15009131f7']->position = 4; /* WAS: 3 */
    $data['user_view_panel_context']->conf['display']->content['new-2183ff7a-9286-81a4-39fb-25b7d4973c3b']->panel = 'brick_right'; /* WAS: 'three_33_third' */
    $data['user_view_panel_context']->conf['display']->content['new-38b23f27-878a-f264-dd90-e55305d0f70c']->panel = 'content'; /* WAS: 'three_33_top' */
    $data['user_view_panel_context']->conf['display']->content['new-67c3df7b-1a3b-db24-f974-a3b27f8988d9']->panel = 'content'; /* WAS: 'three_33_top' */
    $data['user_view_panel_context']->conf['display']->content['new-67c3df7b-1a3b-db24-f974-a3b27f8988d9']->position = 7; /* WAS: 5 */
    $data['user_view_panel_context']->conf['display']->content['new-918d67a4-4642-0364-a570-10f387184ae1']->panel = 'content'; /* WAS: 'three_33_top' */
    $data['user_view_panel_context']->conf['display']->content['new-918d67a4-4642-0364-a570-10f387184ae1']->position = 2; /* WAS: 1 */
    $data['user_view_panel_context']->conf['display']->content['new-ac8d8150-6ff4-8654-c594-9c46cfe746d3']->configuration['formatter'] = 'link_domain'; /* WAS: 'link_default' */
    $data['user_view_panel_context']->conf['display']->content['new-ac8d8150-6ff4-8654-c594-9c46cfe746d3']->configuration['formatter_settings']['strip_www'] = 0; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-ac8d8150-6ff4-8654-c594-9c46cfe746d3']->panel = 'content'; /* WAS: 'three_33_top' */
    $data['user_view_panel_context']->conf['display']->content['new-ac8d8150-6ff4-8654-c594-9c46cfe746d3']->position = 5; /* WAS: 4 */
    $data['user_view_panel_context']->conf['display']->content['new-b0ac54f1-a0c8-a334-a53d-47581e23257d']->panel = 'brick_center'; /* WAS: 'three_33_third' */
    $data['user_view_panel_context']->conf['display']->content['new-b0ac54f1-a0c8-a334-a53d-47581e23257d']->position = 0; /* WAS: 1 */
    $data['user_view_panel_context']->conf['display']->content['new-b51e0fa8-7402-1104-3597-9bd7665546ae']->configuration['formatter'] = 'link_domain'; /* WAS: 'link_default' */
    $data['user_view_panel_context']->conf['display']->content['new-b51e0fa8-7402-1104-3597-9bd7665546ae']->configuration['formatter_settings']['strip_www'] = 0; /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-b51e0fa8-7402-1104-3597-9bd7665546ae']->panel = 'content'; /* WAS: 'three_33_top' */
    $data['user_view_panel_context']->conf['display']->content['new-b51e0fa8-7402-1104-3597-9bd7665546ae']->position = 3; /* WAS: 2 */
    $data['user_view_panel_context']->conf['display']->content['new-c1d1041d-92fd-4106-b8df-4a2f3031a1d0'] = (object) array(
      'pid' => 'new-c1d1041d-92fd-4106-b8df-4a2f3031a1d0',
      'panel' => 'content',
      'type' => 'entity_field',
      'subtype' => 'user:field_name_first',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'text_plain',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'argument_entity_id:user_1',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'c1d1041d-92fd-4106-b8df-4a2f3031a1d0',
    ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->content['new-d3fbb9db-cd0f-b8f4-1572-0e80c4a66c83']->panel = 'content'; /* WAS: 'three_33_top' */
    $data['user_view_panel_context']->conf['display']->content['new-d5dadc55-8402-4238-a657-14c33306ee08'] = (object) array(
      'pid' => 'new-d5dadc55-8402-4238-a657-14c33306ee08',
      'panel' => 'brick_left',
      'type' => 'views_panes',
      'subtype' => 'sp_who_s_online-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'd5dadc55-8402-4238-a657-14c33306ee08',
    ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->layout = 'social_12_threecol_four'; /* WAS: 'three_3x33' */
    $data['user_view_panel_context']->conf['display']->panels['brick_center'] = array(
      0 => 'new-b0ac54f1-a0c8-a334-a53d-47581e23257d',
    ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['brick_left'] = array(
      0 => 'new-d5dadc55-8402-4238-a657-14c33306ee08',
    ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['brick_right'] = array(
      0 => 'new-2183ff7a-9286-81a4-39fb-25b7d4973c3b',
    ); /* WAS: '' */
    $data['user_view_panel_context']->conf['display']->panels['content'] = array(
      0 => 'new-d3fbb9db-cd0f-b8f4-1572-0e80c4a66c83',
      1 => 'new-c1d1041d-92fd-4106-b8df-4a2f3031a1d0',
      2 => 'new-918d67a4-4642-0364-a570-10f387184ae1',
      3 => 'new-b51e0fa8-7402-1104-3597-9bd7665546ae',
      4 => 'new-20f47a2e-7cb8-a944-8944-3f15009131f7',
      5 => 'new-ac8d8150-6ff4-8654-c594-9c46cfe746d3',
      6 => 'new-38b23f27-878a-f264-dd90-e55305d0f70c',
      7 => 'new-67c3df7b-1a3b-db24-f974-a3b27f8988d9',
    ); /* WAS: '' */
    unset($data['user_view_panel_context']->conf['display']->content['new-cde013ca-1d6e-1e14-9171-8ccb1331008f']);
    unset($data['user_view_panel_context']->conf['display']->content['new-f4cdb777-e56d-b974-4953-9b5f2dc9b594']);
    unset($data['user_view_panel_context']->conf['display']->panels['three_33_first']);
    unset($data['user_view_panel_context']->conf['display']->panels['three_33_second']);
    unset($data['user_view_panel_context']->conf['display']->panels['three_33_third']);
    unset($data['user_view_panel_context']->conf['display']->panels['three_33_top']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function sp_user_profile_pages_views_default_views_alter(&$data) {
  if (isset($data['commons_follow_user_followers'])) {
    $data['commons_follow_user_followers']->display['default']->display_options['arguments']['content_id']['exception'] = array(
      'title' => 'Alle',
    ); /* WAS: '' */
    $data['commons_follow_user_followers']->display['default']->display_options['fields']['picture']['alter'] = array(
      'alter_text' => TRUE,
      'text' => '[picture]',
      'make_link' => TRUE,
      'path' => 'user/[uid]',
      'alt' => '[realname]',
      'link_class' => 'tip',
    ); /* WAS: '' */
    $data['commons_follow_user_followers']->display['default']->display_options['fields']['picture']['image_style'] = '100x100_avatar'; /* WAS: '50x50_avatar' */
    $data['commons_follow_user_followers']->display['default']->display_options['fields']['picture']['link_photo_to_profile'] = FALSE; /* WAS: '' */
    $data['commons_follow_user_followers']->display['default']->display_options['fields']['realname'] = array(
      'id' => 'realname',
      'table' => 'realname',
      'field' => 'realname',
      'relationship' => 'uid',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'link_to_user' => FALSE,
    ); /* WAS: '' */
    $data['commons_follow_user_followers']->display['default']->display_options['fields']['uid'] = array(
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'link_to_user' => FALSE,
    ); /* WAS: '' */
    $data['commons_follow_user_followers']->display['default']->display_options['style_plugin'] = 'default'; /* WAS: 'grid' */
    $data['commons_follow_user_followers']->display['panel_pane_1']->display_options['defaults']['fields'] = FALSE; /* WAS: '' */
    $data['commons_follow_user_followers']->display['panel_pane_1']->display_options['fields'] = array(
      'uid' => array(
        'id' => 'uid',
        'table' => 'users',
        'field' => 'uid',
        'relationship' => 'uid',
        'label' => '',
        'exclude' => TRUE,
        'element_label_colon' => FALSE,
        'link_to_user' => FALSE,
      ),
      'field_display_name' => array(
        'id' => 'field_display_name',
        'table' => 'field_data_field_display_name',
        'field' => 'field_display_name',
        'relationship' => 'uid',
        'exclude' => TRUE,
        'type' => 'text_plain',
      ),
      'picture' => array(
        'id' => 'picture',
        'table' => 'users',
        'field' => 'picture',
        'relationship' => 'uid',
        'label' => '',
        'alter' => array(
          'alter_text' => TRUE,
          'text' => '[picture]',
          'make_link' => TRUE,
          'path' => 'user/[uid]',
          'alt' => '[field_display_name]',
          'link_class' => 'tip',
        ),
        'element_label_colon' => FALSE,
        'link_photo_to_profile' => FALSE,
        'image_style' => '100x100_avatar',
      ),
    ); /* WAS: '' */
    unset($data['commons_follow_user_followers']->display['default']->display_options['fields']['name']);
  }
  if (isset($data['commons_follow_user_following'])) {
    $data['commons_follow_user_following']->display['default']->display_options['fields']['picture']['alter'] = array(
      'alter_text' => TRUE,
      'text' => '[picture]',
      'make_link' => TRUE,
      'path' => 'user/[uid]',
      'alt' => '[realname]',
      'link_class' => 'tip',
    ); /* WAS: '' */
    $data['commons_follow_user_following']->display['default']->display_options['fields']['picture']['image_style'] = '100x100_avatar'; /* WAS: '50x50_avatar' */
    $data['commons_follow_user_following']->display['default']->display_options['fields']['picture']['link_photo_to_profile'] = FALSE; /* WAS: '' */
    $data['commons_follow_user_following']->display['default']->display_options['fields']['realname'] = array(
      'id' => 'realname',
      'table' => 'realname',
      'field' => 'realname',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'link_to_user' => FALSE,
    ); /* WAS: '' */
    $data['commons_follow_user_following']->display['default']->display_options['fields']['uid'] = array(
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'link_to_user' => FALSE,
    ); /* WAS: '' */
    $data['commons_follow_user_following']->display['default']->display_options['style_plugin'] = 'default'; /* WAS: 'grid' */
    $data['commons_follow_user_following']->display['panel_pane_1']->display_options['defaults']['fields'] = FALSE; /* WAS: '' */
    $data['commons_follow_user_following']->display['panel_pane_1']->display_options['fields'] = array(
      'uid' => array(
        'id' => 'uid',
        'table' => 'users',
        'field' => 'uid',
        'label' => '',
        'exclude' => TRUE,
        'element_label_colon' => FALSE,
        'link_to_user' => FALSE,
      ),
      'field_display_name' => array(
        'id' => 'field_display_name',
        'table' => 'field_data_field_display_name',
        'field' => 'field_display_name',
        'exclude' => TRUE,
        'type' => 'text_plain',
      ),
      'picture' => array(
        'id' => 'picture',
        'table' => 'users',
        'field' => 'picture',
        'label' => '',
        'alter' => array(
          'alter_text' => TRUE,
          'text' => '[picture]',
          'make_link' => TRUE,
          'path' => 'user/[uid]',
          'alt' => '[field_display_name]',
          'link_class' => 'tip',
        ),
        'element_label_colon' => FALSE,
        'link_photo_to_profile' => FALSE,
        'image_style' => '100x100_avatar',
      ),
    ); /* WAS: '' */
    unset($data['commons_follow_user_following']->display['default']->display_options['fields']['name']);
  }
}
