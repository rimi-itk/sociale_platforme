<?php
/**
 * @file
 * sp_user_profile_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sp_user_profile_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sp_who_s_online';
  $view->description = '';
  $view->tag = 'sp';
  $view->base_table = 'users';
  $view->human_name = 'SP Who\'s online';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hvem er online';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er i øjeblikket ingen brugere online.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: User: Offentligt navn */
  $handler->display->display_options['fields']['field_display_name']['id'] = 'field_display_name';
  $handler->display->display_options['fields']['field_display_name']['table'] = 'field_data_field_display_name';
  $handler->display->display_options['fields']['field_display_name']['field'] = 'field_display_name';
  $handler->display->display_options['fields']['field_display_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_display_name']['type'] = 'text_plain';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '[picture]';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['alt'] = '[field_display_name]';
  $handler->display->display_options['fields']['picture']['alter']['link_class'] = 'tip';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '100x100_avatar';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Is online */
  $handler->display->display_options['filters']['is_online']['id'] = 'is_online';
  $handler->display->display_options['filters']['is_online']['table'] = 'users';
  $handler->display->display_options['filters']['is_online']['field'] = 'is_online';
  $handler->display->display_options['filters']['is_online']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Hvem er online';
  $handler->display->display_options['pane_category']['name'] = 'Sociale Platforme - Blokke';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['sp_who_s_online'] = array(
    t('Master'),
    t('Hvem er online'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Der er i øjeblikket ingen brugere online.'),
    t('Offentligt navn'),
    t('[picture]'),
    t('[field_display_name]'),
    t('Content pane'),
    t('Sociale Platforme - Blokke'),
  );
  $export['sp_who_s_online'] = $view;

  return $export;
}
