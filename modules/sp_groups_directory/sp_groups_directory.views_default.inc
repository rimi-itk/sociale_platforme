<?php
/**
 * @file
 * sp_groups_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sp_groups_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sp_groups';
  $view->description = '';
  $view->tag = 'sp';
  $view->base_table = 'node';
  $view->human_name = 'SP Groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'groups-grid';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nulstil';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>No results.</em>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: commons_follow_group */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'commons_follow_group';
  /* Relationship: Flags: commons_follow_group counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'commons_follow_group';
  /* Relationship: Content: Tags (field_group_tags) */
  $handler->display->display_options['relationships']['field_group_tags_tid']['id'] = 'field_group_tags_tid';
  $handler->display->display_options['relationships']['field_group_tags_tid']['table'] = 'field_data_field_group_tags';
  $handler->display->display_options['relationships']['field_group_tags_tid']['field'] = 'field_group_tags_tid';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_group_logo']['id'] = 'field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['table'] = 'field_data_field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['field'] = 'field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['label'] = '';
  $handler->display->display_options['fields']['field_group_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_logo']['settings'] = array(
    'image_style' => 'group_grid',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="icon-gruppe"></span> [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_group_tags']['id'] = 'field_group_tags';
  $handler->display->display_options['fields']['field_group_tags']['table'] = 'field_data_field_group_tags';
  $handler->display->display_options['fields']['field_group_tags']['field'] = 'field_group_tags';
  $handler->display->display_options['fields']['field_group_tags']['label'] = '';
  $handler->display->display_options['fields']['field_group_tags']['alter']['text'] = '<span class="icon-tags"></span> [field_group_tags]';
  $handler->display->display_options['fields']['field_group_tags']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['alter']['path'] = 'grupper/[field_group_tags]';
  $handler->display->display_options['fields']['field_group_tags']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_group_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_group_tags']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_group_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_tags']['empty'] = '<em>Ingen</em>';
  $handler->display->display_options['fields']['field_group_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_group_tags']['delta_offset'] = '0';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['text'] = '<span class="icon-bruger"></span> [count]';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['separator'] = '';
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 følger';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count følgere';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: User: Bare user picture */
  $handler->display->display_options['fields']['picture_bare']['id'] = 'picture_bare';
  $handler->display->display_options['fields']['picture_bare']['table'] = 'users';
  $handler->display->display_options['fields']['picture_bare']['field'] = 'picture_bare';
  $handler->display->display_options['fields']['picture_bare']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture_bare']['label'] = '';
  $handler->display->display_options['fields']['picture_bare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture_bare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture_bare']['image_style'] = '35x35';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Oprettet af';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_type'] = 'div';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="author">
<div class="picture">[picture_bare]</div>
<div class="created"><label>Oprettet af:</label>[name]</div>
<div class="follow">[ops]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_group_tags_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'group_tags' => 'group_tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );
  /* Filter criterion: Content: Kategori (field_group_category) */
  $handler->display->display_options['filters']['field_group_category_tid']['id'] = 'field_group_category_tid';
  $handler->display->display_options['filters']['field_group_category_tid']['table'] = 'field_data_field_group_category';
  $handler->display->display_options['filters']['field_group_category_tid']['field'] = 'field_group_category_tid';
  $handler->display->display_options['filters']['field_group_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_group_category_tid']['expose']['operator_id'] = 'field_group_category_tid_op';
  $handler->display->display_options['filters']['field_group_category_tid']['expose']['label'] = 'Kategori:';
  $handler->display->display_options['filters']['field_group_category_tid']['expose']['operator'] = 'field_group_category_tid_op';
  $handler->display->display_options['filters']['field_group_category_tid']['expose']['identifier'] = 'field_group_category_tid';
  $handler->display->display_options['filters']['field_group_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_group_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_group_category_tid']['vocabulary'] = 'group_categories';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Fritekst:';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_group_tags' => 'field_group_tags',
  );

  /* Display: Content pane - Grid */
  $handler = $view->new_display('panel_pane', 'Content pane - Grid', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Oversigt: Grupper';
  $handler->display->display_options['pane_category']['name'] = 'Sociale Platforme';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'none',
      'context' => 'string.raw',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Content pane - List */
  $handler = $view->new_display('panel_pane', 'Content pane - List', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'groups-list';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_group_logo']['id'] = 'field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['table'] = 'field_data_field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['field'] = 'field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['label'] = '';
  $handler->display->display_options['fields']['field_group_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_logo']['settings'] = array(
    'image_style' => 'group_list',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="icon-gruppe"></span> [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_group_tags']['id'] = 'field_group_tags';
  $handler->display->display_options['fields']['field_group_tags']['table'] = 'field_data_field_group_tags';
  $handler->display->display_options['fields']['field_group_tags']['field'] = 'field_group_tags';
  $handler->display->display_options['fields']['field_group_tags']['label'] = '';
  $handler->display->display_options['fields']['field_group_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['alter']['text'] = '<span class="icon-tags"></span> [field_group_tags]';
  $handler->display->display_options['fields']['field_group_tags']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['alter']['path'] = 'grupper/[field_group_tags]';
  $handler->display->display_options['fields']['field_group_tags']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_group_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_group_tags']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_group_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_tags']['empty'] = '<em>Ingen</em>';
  $handler->display->display_options['fields']['field_group_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_group_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_group_tags']['delta_offset'] = '0';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['text'] = '<span class="icon-bruger"></span> [count]';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['separator'] = '';
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 følger';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count følgere';
  /* Field: User: Bare user picture */
  $handler->display->display_options['fields']['picture_bare']['id'] = 'picture_bare';
  $handler->display->display_options['fields']['picture_bare']['table'] = 'users';
  $handler->display->display_options['fields']['picture_bare']['field'] = 'picture_bare';
  $handler->display->display_options['fields']['picture_bare']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture_bare']['label'] = '';
  $handler->display->display_options['fields']['picture_bare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture_bare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture_bare']['image_style'] = '35x35';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Oprettet af ';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_type'] = 'div';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="author">
<div class="created"><label>Oprettet af:</label> [name]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="follow">[ops]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $translatables['sp_groups'] = array(
    t('Master'),
    t('mere'),
    t('Søg'),
    t('Nulstil'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<em>No results.</em>'),
    t('author'),
    t('flag'),
    t('counter'),
    t('term from field_group_tags'),
    t('<span class="icon-gruppe"></span> [title]'),
    t('<span class="icon-tags"></span> [field_group_tags]'),
    t('<em>Ingen</em>'),
    t('<span class="icon-bruger"></span> [count]'),
    t('.'),
    t('Oprettet af'),
    t('<div class="author">
<div class="picture">[picture_bare]</div>
<div class="created"><label>Oprettet af:</label>[name]</div>
<div class="follow">[ops]</div>
</div>'),
    t('Alle'),
    t('Kategori:'),
    t('Fritekst:'),
    t('Content pane - Grid'),
    t('more'),
    t('Oversigt: Grupper'),
    t('Sociale Platforme'),
    t('Content pane - List'),
    t('Oprettet af '),
    t('<div class="author">
<div class="created"><label>Oprettet af:</label> [name]</div>
</div>'),
    t('<div class="follow">[ops]</div>'),
    t('View panes'),
  );
  $export['sp_groups'] = $view;

  return $export;
}
