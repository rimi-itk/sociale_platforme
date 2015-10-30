<?php
/**
 * @file
 * sp_search.features.inc
 */

/**
 * Implements hook_menu_default_menu_links_alter().
 */
function sp_search_menu_default_menu_links_alter(&$data) {
  if (isset($data['main-menu:search'])) {
    $data['main-menu:search']['hidden'] = 1; /* WAS: 0 */
    $data['main-menu:search']['weight'] = -45; /* WAS: 3 */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function sp_search_default_page_manager_handlers_alter(&$data) {
  if (isset($data['search_search_facetapi_panel_context'])) {
    $data['search_search_facetapi_panel_context']->conf['display']->content['new-19883d03-0e72-1f84-4d13-5daf49510352']->panel = 'right'; /* WAS: 'two_33_66_first' */
    $data['search_search_facetapi_panel_context']->conf['display']->content['new-2ed6ed31-b23a-50d4-dd1c-dd2eae53cedb']->panel = 'left'; /* WAS: 'two_33_66_second' */
    $data['search_search_facetapi_panel_context']->conf['display']->content['new-3c939ace-59f2-5ea4-5da0-d1450d651449']->panel = 'right'; /* WAS: 'two_33_66_first' */
    $data['search_search_facetapi_panel_context']->conf['display']->content['new-4be3b380-7f67-ecf4-6974-607450056b42']->panel = 'right'; /* WAS: 'two_33_66_first' */
    $data['search_search_facetapi_panel_context']->conf['display']->content['new-74dd20d4-0d10-dea4-019a-808cfe544eac']->panel = 'header'; /* WAS: 'two_33_66_top' */
    $data['search_search_facetapi_panel_context']->conf['display']->content['new-95278c06-53e1-a984-4139-71b99c4d3ddf']->panel = 'right'; /* WAS: 'two_33_66_first' */
    $data['search_search_facetapi_panel_context']->conf['display']->content['new-d8cfd787-a04d-ef94-dda0-a486cf0e46be']->panel = 'right'; /* WAS: 'two_33_66_first' */
    $data['search_search_facetapi_panel_context']->conf['display']->layout = 'social_12_twocol_eightfour'; /* WAS: 'two_33_66' */
    $data['search_search_facetapi_panel_context']->conf['display']->panels['header'] = array(
      0 => 'new-74dd20d4-0d10-dea4-019a-808cfe544eac',
    ); /* WAS: '' */
    $data['search_search_facetapi_panel_context']->conf['display']->panels['left'] = array(
      0 => 'new-2ed6ed31-b23a-50d4-dd1c-dd2eae53cedb',
    ); /* WAS: '' */
    $data['search_search_facetapi_panel_context']->conf['display']->panels['right'] = array(
      0 => 'new-4be3b380-7f67-ecf4-6974-607450056b42',
      1 => 'new-19883d03-0e72-1f84-4d13-5daf49510352',
      2 => 'new-d8cfd787-a04d-ef94-dda0-a486cf0e46be',
      3 => 'new-3c939ace-59f2-5ea4-5da0-d1450d651449',
      4 => 'new-95278c06-53e1-a984-4139-71b99c4d3ddf',
    ); /* WAS: '' */
    unset($data['search_search_facetapi_panel_context']->conf['display']->panels['two_33_66_first']);
    unset($data['search_search_facetapi_panel_context']->conf['display']->panels['two_33_66_second']);
    unset($data['search_search_facetapi_panel_context']->conf['display']->panels['two_33_66_top']);
  }
}
