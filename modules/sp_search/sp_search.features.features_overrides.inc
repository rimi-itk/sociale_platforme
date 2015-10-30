<?php
/**
 * @file
 * sp_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: menu_links.
  $overrides["menu_links.main-menu:search.hidden"] = 1;
  $overrides["menu_links.main-menu:search.weight"] = -45;

  // Exported overrides for: page_manager_handlers.
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|content|new-19883d03-0e72-1f84-4d13-5daf49510352|panel"] = 'right';
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|content|new-2ed6ed31-b23a-50d4-dd1c-dd2eae53cedb|panel"] = 'left';
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|content|new-3c939ace-59f2-5ea4-5da0-d1450d651449|panel"] = 'right';
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|content|new-4be3b380-7f67-ecf4-6974-607450056b42|panel"] = 'right';
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|content|new-74dd20d4-0d10-dea4-019a-808cfe544eac|panel"] = 'header';
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|content|new-95278c06-53e1-a984-4139-71b99c4d3ddf|panel"] = 'right';
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|content|new-d8cfd787-a04d-ef94-dda0-a486cf0e46be|panel"] = 'right';
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|layout"] = 'social_12_twocol_eightfour';
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|panels|header"] = array(
    0 => 'new-74dd20d4-0d10-dea4-019a-808cfe544eac',
  );
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|panels|left"] = array(
    0 => 'new-2ed6ed31-b23a-50d4-dd1c-dd2eae53cedb',
  );
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|panels|right"] = array(
    0 => 'new-4be3b380-7f67-ecf4-6974-607450056b42',
    1 => 'new-19883d03-0e72-1f84-4d13-5daf49510352',
    2 => 'new-d8cfd787-a04d-ef94-dda0-a486cf0e46be',
    3 => 'new-3c939ace-59f2-5ea4-5da0-d1450d651449',
    4 => 'new-95278c06-53e1-a984-4139-71b99c4d3ddf',
  );
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|panels|two_33_66_first"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|panels|two_33_66_second"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_search_facetapi_panel_context.conf|display|panels|two_33_66_top"]["DELETED"] = TRUE;

  return $overrides;
}
