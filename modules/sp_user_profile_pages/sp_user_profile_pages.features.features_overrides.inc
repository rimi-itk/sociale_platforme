<?php
/**
 * @file
 * sp_user_profile_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_user_profile_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers.
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-20f47a2e-7cb8-a944-8944-3f15009131f7|configuration|formatter"] = 'link_domain';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-20f47a2e-7cb8-a944-8944-3f15009131f7|configuration|formatter_settings|strip_www"] = 0;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-20f47a2e-7cb8-a944-8944-3f15009131f7|panel"] = 'content';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-20f47a2e-7cb8-a944-8944-3f15009131f7|position"] = 4;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-2183ff7a-9286-81a4-39fb-25b7d4973c3b|panel"] = 'brick_right';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-38b23f27-878a-f264-dd90-e55305d0f70c|panel"] = 'content';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-67c3df7b-1a3b-db24-f974-a3b27f8988d9|panel"] = 'content';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-67c3df7b-1a3b-db24-f974-a3b27f8988d9|position"] = 7;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-918d67a4-4642-0364-a570-10f387184ae1|panel"] = 'content';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-918d67a4-4642-0364-a570-10f387184ae1|position"] = 2;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-ac8d8150-6ff4-8654-c594-9c46cfe746d3|configuration|formatter"] = 'link_domain';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-ac8d8150-6ff4-8654-c594-9c46cfe746d3|configuration|formatter_settings|strip_www"] = 0;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-ac8d8150-6ff4-8654-c594-9c46cfe746d3|panel"] = 'content';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-ac8d8150-6ff4-8654-c594-9c46cfe746d3|position"] = 5;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-b0ac54f1-a0c8-a334-a53d-47581e23257d|panel"] = 'brick_center';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-b0ac54f1-a0c8-a334-a53d-47581e23257d|position"] = 0;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-b51e0fa8-7402-1104-3597-9bd7665546ae|configuration|formatter"] = 'link_domain';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-b51e0fa8-7402-1104-3597-9bd7665546ae|configuration|formatter_settings|strip_www"] = 0;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-b51e0fa8-7402-1104-3597-9bd7665546ae|panel"] = 'content';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-b51e0fa8-7402-1104-3597-9bd7665546ae|position"] = 3;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-c1d1041d-92fd-4106-b8df-4a2f3031a1d0"] = (object) array(
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
  );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-cde013ca-1d6e-1e14-9171-8ccb1331008f"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-d3fbb9db-cd0f-b8f4-1572-0e80c4a66c83|panel"] = 'content';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-d5dadc55-8402-4238-a657-14c33306ee08"] = (object) array(
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
  );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|content|new-f4cdb777-e56d-b974-4953-9b5f2dc9b594"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|layout"] = 'social_12_threecol_four';
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|brick_center"] = array(
    0 => 'new-b0ac54f1-a0c8-a334-a53d-47581e23257d',
  );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|brick_left"] = array(
    0 => 'new-d5dadc55-8402-4238-a657-14c33306ee08',
  );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|brick_right"] = array(
    0 => 'new-2183ff7a-9286-81a4-39fb-25b7d4973c3b',
  );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|content"] = array(
    0 => 'new-d3fbb9db-cd0f-b8f4-1572-0e80c4a66c83',
    1 => 'new-c1d1041d-92fd-4106-b8df-4a2f3031a1d0',
    2 => 'new-918d67a4-4642-0364-a570-10f387184ae1',
    3 => 'new-b51e0fa8-7402-1104-3597-9bd7665546ae',
    4 => 'new-20f47a2e-7cb8-a944-8944-3f15009131f7',
    5 => 'new-ac8d8150-6ff4-8654-c594-9c46cfe746d3',
    6 => 'new-38b23f27-878a-f264-dd90-e55305d0f70c',
    7 => 'new-67c3df7b-1a3b-db24-f974-a3b27f8988d9',
  );
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_first"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_second"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_third"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.user_view_panel_context.conf|display|panels|three_33_top"]["DELETED"] = TRUE;

  // Exported overrides for: views_view.
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|arguments|content_id|exception"] = array(
    'title' => 'Alle',
  );
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|fields|name"]["DELETED"] = TRUE;
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|fields|picture|alter"] = array(
    'alter_text' => TRUE,
    'text' => '[picture]',
    'make_link' => TRUE,
    'path' => 'user/[uid]',
    'alt' => '[realname]',
    'link_class' => 'tip',
  );
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|fields|picture|image_style"] = '100x100_avatar';
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|fields|picture|link_photo_to_profile"] = FALSE;
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|fields|realname"] = array(
    'id' => 'realname',
    'table' => 'realname',
    'field' => 'realname',
    'relationship' => 'uid',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'link_to_user' => FALSE,
  );
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|fields|uid"] = array(
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'uid',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'link_to_user' => FALSE,
  );
  $overrides["views_view.commons_follow_user_followers.display|default|display_options|style_plugin"] = 'default';
  $overrides["views_view.commons_follow_user_followers.display|panel_pane_1|display_options|defaults|fields"] = FALSE;
  $overrides["views_view.commons_follow_user_followers.display|panel_pane_1|display_options|fields"] = array(
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
  );
  $overrides["views_view.commons_follow_user_following.display|default|display_options|fields|name"]["DELETED"] = TRUE;
  $overrides["views_view.commons_follow_user_following.display|default|display_options|fields|picture|alter"] = array(
    'alter_text' => TRUE,
    'text' => '[picture]',
    'make_link' => TRUE,
    'path' => 'user/[uid]',
    'alt' => '[realname]',
    'link_class' => 'tip',
  );
  $overrides["views_view.commons_follow_user_following.display|default|display_options|fields|picture|image_style"] = '100x100_avatar';
  $overrides["views_view.commons_follow_user_following.display|default|display_options|fields|picture|link_photo_to_profile"] = FALSE;
  $overrides["views_view.commons_follow_user_following.display|default|display_options|fields|realname"] = array(
    'id' => 'realname',
    'table' => 'realname',
    'field' => 'realname',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'link_to_user' => FALSE,
  );
  $overrides["views_view.commons_follow_user_following.display|default|display_options|fields|uid"] = array(
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'link_to_user' => FALSE,
  );
  $overrides["views_view.commons_follow_user_following.display|default|display_options|style_plugin"] = 'default';
  $overrides["views_view.commons_follow_user_following.display|panel_pane_1|display_options|defaults|fields"] = FALSE;
  $overrides["views_view.commons_follow_user_following.display|panel_pane_1|display_options|fields"] = array(
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
  );

  return $overrides;
}
