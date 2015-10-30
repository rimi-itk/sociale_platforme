<?php
/**
 * @file
 * sp_site_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sp_site_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sp_contributors_sitewide';
  $view->description = '';
  $view->tag = 'sp';
  $view->base_table = 'users';
  $view->human_name = 'SP Contributors - Sitewide';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktive brugere';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '225x225_avatar';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Picture */
  $handler->display->display_options['filters']['picture']['id'] = 'picture';
  $handler->display->display_options['filters']['picture']['table'] = 'users';
  $handler->display->display_options['filters']['picture']['field'] = 'picture';
  $handler->display->display_options['filters']['picture']['value'] = '1';
  /* Filter criterion: User: Jeg accepterer at mit profilbillede må blive vist på forsiden af websitet (field_profile_toc) */
  $handler->display->display_options['filters']['field_profile_toc_value']['id'] = 'field_profile_toc_value';
  $handler->display->display_options['filters']['field_profile_toc_value']['table'] = 'field_data_field_profile_toc';
  $handler->display->display_options['filters']['field_profile_toc_value']['field'] = 'field_profile_toc_value';
  $handler->display->display_options['filters']['field_profile_toc_value']['value'] = array(
    1 => '1',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Contributors (Site-wide)';
  $handler->display->display_options['pane_category']['name'] = 'Sociale Platforme';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['sp_contributors_sitewide'] = array(
    t('Master'),
    t('Aktive brugere'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content pane'),
    t('Contributors (Site-wide)'),
    t('Sociale Platforme'),
  );
  $export['sp_contributors_sitewide'] = $view;

  return $export;
}
