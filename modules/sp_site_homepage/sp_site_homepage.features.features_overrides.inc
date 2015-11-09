<?php
/**
 * @file
 * sp_site_homepage.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_site_homepage_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.commons_home.access|logic"] = 'and';
  $overrides["page_manager_pages.commons_home.access|plugins"] = array();
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|access|plugins|0"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-0ae8e5a2-44f6-8584-21f2-8be6e340e62f"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-2ab570f0-8498-44f4-e9d0-9977e3d8d4df"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-5eba2cb5-f62c-4fc8-990e-93f4a4844814"] = (object) array(
      'pid' => 'new-5eba2cb5-f62c-4fc8-990e-93f4a4844814',
      'panel' => 'left',
      'type' => 'views_panes',
      'subtype' => 'sp_contributors_sitewide-panel_pane_1',
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
      'uuid' => '5eba2cb5-f62c-4fc8-990e-93f4a4844814',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-6b257377-4b20-4923-b92d-afeb8f6334a6"] = (object) array(
      'pid' => 'new-6b257377-4b20-4923-b92d-afeb8f6334a6',
      'panel' => 'right',
      'type' => 'custom',
      'subtype' => 'custom',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'admin_title' => '',
        'title' => 'Om os',
        'body' => '<p>Nulla quis lorem ut libero malesuada feugiat. Sed porttitor lectus nibh. Nulla quis lorem ut libero malesuada feugiat. Nulla quis lorem ut libero malesuada feugiat. Cras ultricies ligula sed magna dictum porta. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Curabitur arcu erat, accumsan id imperdiet et, porttitor at sem.</p>
        
        <p>Nulla quis lorem ut libero malesuada feugiat. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus suscipit tortor eget felis porttitor volutpat.Nulla quis lorem ut libero malesuada feugiat. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus suscipit tortor eget felis porttitor volutpat.</p>
        
        <p><em>Donec velit neque, auctor sit amet aliquam vel, ullamcorper sit amet ligula. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</em></p>
        
        <p><strong>Pellentesque in ipsum id orci porta dapibus.&nbsp;</strong></p>
        ',
        'format' => 'filtered_html',
        'substitute' => TRUE,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '6b257377-4b20-4923-b92d-afeb8f6334a6',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-7d40d7ca-0ea5-9a54-4d1f-8b6240e72bf0"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-800b2f8a-307f-0e14-4174-626a1c5c4cd9"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-b6e290b7-1d2b-5db4-a181-28befdcde628"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-f1e97c73-6add-4536-9dd5-4e6b04bd1df2"] = (object) array(
      'pid' => 'new-f1e97c73-6add-4536-9dd5-4e6b04bd1df2',
      'panel' => 'footer',
      'type' => 'fieldable_panels_pane',
      'subtype' => 'fpid:4',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_mode' => 'full',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'f1e97c73-6add-4536-9dd5-4e6b04bd1df2',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|layout"] = 'social_12_twocol_eightfour';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panel_settings|style_settings|footer"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panel_settings|style_settings|header"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panel_settings|style_settings|left"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panel_settings|style_settings|right"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|footer"] = array(
    0 => 'new-f1e97c73-6add-4536-9dd5-4e6b04bd1df2',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|left"] = array(
    0 => 'new-5eba2cb5-f62c-4fc8-990e-93f4a4844814',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|right"] = array(
    0 => 'new-6b257377-4b20-4923-b92d-afeb8f6334a6',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_first"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_second"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_third"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_top"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|pipeline"] = 'ipe';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|weight"] = -30;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-03e7f317-d9ee-4c42-b3d1-15b3ee2372e5"] = (object) array(
      'pid' => 'new-03e7f317-d9ee-4c42-b3d1-15b3ee2372e5',
      'panel' => 'left',
      'type' => 'commons_bw_group',
      'subtype' => 'commons_bw_group',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '03e7f317-d9ee-4c42-b3d1-15b3ee2372e5',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-2a5d4a11-0595-4b1c-9dcd-c74972dd67e2"] = (object) array(
      'pid' => 'new-2a5d4a11-0595-4b1c-9dcd-c74972dd67e2',
      'panel' => 'right',
      'type' => 'quick_tip',
      'subtype' => 'quick_tip',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'body' => array(
          'value' => '<p>Nulla quis lorem ut libero malesuada feugiat. Curabitur aliquet quam id dui posuere blandit. Curabitur aliquet quam id dui posuere blandit. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec rutrum congue leo eget malesuada. Quisque velit nisi, pretium ut lacinia in, elementum id enim. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
          
          <p><a href="http://tv2.dk">Mauris blandit aliquet elit, eget tincidunt nibh pulvinar a.</a></p>
          ',
          'format' => 'full_html',
        ),
        'override_title' => 1,
        'override_title_text' => 'Her er et tip',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
        'style' => 'default',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '2a5d4a11-0595-4b1c-9dcd-c74972dd67e2',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-6077ce3d-7948-46c2-85db-6c07c3abcd3a"] = (object) array(
      'pid' => 'new-6077ce3d-7948-46c2-85db-6c07c3abcd3a',
      'panel' => 'right',
      'type' => 'content_add',
      'subtype' => 'content_add',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'description' => '',
        'type' => 'group',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '6077ce3d-7948-46c2-85db-6c07c3abcd3a',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-679d879f-f379-4dc7-8fb8-c8d5f965a9d8"] = (object) array(
      'pid' => 'new-679d879f-f379-4dc7-8fb8-c8d5f965a9d8',
      'panel' => 'footer',
      'type' => 'fieldable_panels_pane',
      'subtype' => 'fpid:3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_mode' => 'full',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '679d879f-f379-4dc7-8fb8-c8d5f965a9d8',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-895dfc63-a30f-f734-3185-c40c407b4af0"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-97c7ce09-3cb1-6b34-a940-8fda43e609cc"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-9c98391d-d2a7-4de9-9d35-59f2efff2d1d"] = (object) array(
      'pid' => 'new-9c98391d-d2a7-4de9-9d35-59f2efff2d1d',
      'panel' => 'right',
      'type' => 'profile_info',
      'subtype' => 'profile_info',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '9c98391d-d2a7-4de9-9d35-59f2efff2d1d',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-9e812b41-2087-4859-b500-d9a953ee77d1"] = (object) array(
      'pid' => 'new-9e812b41-2087-4859-b500-d9a953ee77d1',
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
      'position' => 3,
      'locks' => array(),
      'uuid' => '9e812b41-2087-4859-b500-d9a953ee77d1',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-b20add8c-2daf-4684-45f3-212d60c7f31e"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-c8f5bfbb-4bf7-4687-9d94-69331fdd4ab1"] = (object) array(
      'pid' => 'new-c8f5bfbb-4bf7-4687-9d94-69331fdd4ab1',
      'panel' => 'footer',
      'type' => 'community_stats',
      'subtype' => 'community_stats',
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
      'uuid' => 'c8f5bfbb-4bf7-4687-9d94-69331fdd4ab1',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-da301a84-b9a5-8664-cd4b-1e84d7dd9f42"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-e1d93283-62bd-4d48-94b5-d5e9d55554ce"] = (object) array(
      'pid' => 'new-e1d93283-62bd-4d48-94b5-d5e9d55554ce',
      'panel' => 'header',
      'type' => 'custom',
      'subtype' => 'custom',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'admin_title' => '',
        'title' => '',
        'body' => 'Donec sed odio dui. Donec ullamcorper nulla non metus auctor fringilla. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec ullamcorper nulla non metus auctor fringilla. Etiam porta sem malesuada magna mollis euismod.',
        'format' => 'filtered_html',
        'substitute' => TRUE,
      ),
      'cache' => array(),
      'style' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'e1d93283-62bd-4d48-94b5-d5e9d55554ce',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|content|new-f159f7c4-0038-4b96-b920-bd3159f38258"] = (object) array(
      'pid' => 'new-f159f7c4-0038-4b96-b920-bd3159f38258',
      'panel' => 'right',
      'type' => 'views_panes',
      'subtype' => 'sp_most_active_groups-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'f159f7c4-0038-4b96-b920-bd3159f38258',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|layout"] = 'social_12_twocol_eightfour';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panel_settings|style_settings|footer"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panel_settings|style_settings|header"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panel_settings|style_settings|left"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panel_settings|style_settings|right"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|footer"] = array(
    0 => 'new-679d879f-f379-4dc7-8fb8-c8d5f965a9d8',
    1 => 'new-c8f5bfbb-4bf7-4687-9d94-69331fdd4ab1',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|header"] = array(
    0 => 'new-e1d93283-62bd-4d48-94b5-d5e9d55554ce',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|left"] = array(
    0 => 'new-03e7f317-d9ee-4c42-b3d1-15b3ee2372e5',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|right"] = array(
    0 => 'new-6077ce3d-7948-46c2-85db-6c07c3abcd3a',
    1 => 'new-f159f7c4-0038-4b96-b920-bd3159f38258',
    2 => 'new-9c98391d-d2a7-4de9-9d35-59f2efff2d1d',
    3 => 'new-9e812b41-2087-4859-b500-d9a953ee77d1',
    4 => 'new-2a5d4a11-0595-4b1c-9dcd-c74972dd67e2',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|conf|display|title"] = 'Hvad sker der?';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context|weight"] = -29;
  $overrides["page_manager_pages.commons_home.menu|weight"] = 0;

 return $overrides;
}
