<?php
/**
 * @file
 * sp_latest_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function sp_latest_content_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sp_latest_content';
  $page->task = 'page';
  $page->admin_title = 'SP: Latest content';
  $page->admin_description = '';
  $page->path = 'latest-content';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Seneste indhold',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sp_latest_content_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sp_latest_content';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Latest content',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'social_12_twocol_eightfour';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'header' => NULL,
      'left' => NULL,
      'right' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Hvad sker der?';
  $display->uuid = '84741210-79de-a174-5d6f-8ebfcb061f03';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c8f5bfbb-4bf7-4687-9d94-69331fdd4ab1';
  $pane->panel = 'footer';
  $pane->type = 'community_stats';
  $pane->subtype = 'community_stats';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c8f5bfbb-4bf7-4687-9d94-69331fdd4ab1';
  $display->content['new-c8f5bfbb-4bf7-4687-9d94-69331fdd4ab1'] = $pane;
  $display->panels['footer'][0] = 'new-c8f5bfbb-4bf7-4687-9d94-69331fdd4ab1';
  $pane = new stdClass();
  $pane->pid = 'new-e1d93283-62bd-4d48-94b5-d5e9d55554ce';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => 'På denne side kan du følge med i hvad der sker i de forskellige grupper på websitet.',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e1d93283-62bd-4d48-94b5-d5e9d55554ce';
  $display->content['new-e1d93283-62bd-4d48-94b5-d5e9d55554ce'] = $pane;
  $display->panels['header'][0] = 'new-e1d93283-62bd-4d48-94b5-d5e9d55554ce';
  $pane = new stdClass();
  $pane->pid = 'new-03e7f317-d9ee-4c42-b3d1-15b3ee2372e5';
  $pane->panel = 'left';
  $pane->type = 'commons_bw_group';
  $pane->subtype = 'commons_bw_group';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '03e7f317-d9ee-4c42-b3d1-15b3ee2372e5';
  $display->content['new-03e7f317-d9ee-4c42-b3d1-15b3ee2372e5'] = $pane;
  $display->panels['left'][0] = 'new-03e7f317-d9ee-4c42-b3d1-15b3ee2372e5';
  $pane = new stdClass();
  $pane->pid = 'new-6077ce3d-7948-46c2-85db-6c07c3abcd3a';
  $pane->panel = 'right';
  $pane->type = 'content_add';
  $pane->subtype = 'content_add';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'description' => '',
    'type' => 'group',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6077ce3d-7948-46c2-85db-6c07c3abcd3a';
  $display->content['new-6077ce3d-7948-46c2-85db-6c07c3abcd3a'] = $pane;
  $display->panels['right'][0] = 'new-6077ce3d-7948-46c2-85db-6c07c3abcd3a';
  $pane = new stdClass();
  $pane->pid = 'new-f159f7c4-0038-4b96-b920-bd3159f38258';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'sp_most_active_groups-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f159f7c4-0038-4b96-b920-bd3159f38258';
  $display->content['new-f159f7c4-0038-4b96-b920-bd3159f38258'] = $pane;
  $display->panels['right'][1] = 'new-f159f7c4-0038-4b96-b920-bd3159f38258';
  $pane = new stdClass();
  $pane->pid = 'new-9c98391d-d2a7-4de9-9d35-59f2efff2d1d';
  $pane->panel = 'right';
  $pane->type = 'profile_info';
  $pane->subtype = 'profile_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9c98391d-d2a7-4de9-9d35-59f2efff2d1d';
  $display->content['new-9c98391d-d2a7-4de9-9d35-59f2efff2d1d'] = $pane;
  $display->panels['right'][2] = 'new-9c98391d-d2a7-4de9-9d35-59f2efff2d1d';
  $pane = new stdClass();
  $pane->pid = 'new-9e812b41-2087-4859-b500-d9a953ee77d1';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'sp_who_s_online-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9e812b41-2087-4859-b500-d9a953ee77d1';
  $display->content['new-9e812b41-2087-4859-b500-d9a953ee77d1'] = $pane;
  $display->panels['right'][3] = 'new-9e812b41-2087-4859-b500-d9a953ee77d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sp_latest_content'] = $page;

  return $pages;

}
