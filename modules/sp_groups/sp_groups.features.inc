<?php
/**
 * @file
 * sp_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sp_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sp_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function sp_groups_field_default_field_bases_alter(&$data) {
  if (isset($data['field_group_logo'])) {
    unset($data['field_group_logo']['foreign keys']);
  }
  if (isset($data['field_og_subscribe_settings'])) {
    $data['field_og_subscribe_settings']['field_permissions'] = array(
      'type' => 2,
    ); /* WAS: '' */
    $data['field_og_subscribe_settings']['settings']['allowed_values']['invitation'] = 'Joining requires an invitation. The group and content is hidden from non-members.'; /* WAS: 'Joining requires an invitation' */
    unset($data['field_og_subscribe_settings']['foreign keys']);
  }
  if (isset($data['group_access'])) {
    unset($data['group_access']['foreign keys']);
  }
  if (isset($data['group_content_access'])) {
    $data['group_content_access']['field_permissions'] = array(
      'type' => 0,
    ); /* WAS: '' */
    unset($data['group_content_access']['foreign keys']);
  }
  if (isset($data['group_group'])) {
    unset($data['group_group']['foreign keys']);
  }
  if (isset($data['og_group_ref'])) {
    $data['og_group_ref']['field_permissions'] = array(
      'type' => 0,
    ); /* WAS: '' */
    unset($data['og_group_ref']['foreign keys']);
  }
  if (isset($data['og_user_group_ref'])) {
    $data['og_user_group_ref']['field_permissions'] = array(
      'type' => 0,
    ); /* WAS: '' */
    $data['og_user_group_ref']['settings']['handler_settings']['behaviors']['views-select-list'] = array(
      'status' => 0,
    ); /* WAS: '' */
    $data['og_user_group_ref']['settings']['handler_settings']['sort'] = array(
      'type' => 'none',
    ); /* WAS: '' */
    unset($data['og_user_group_ref']['foreign keys']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function sp_groups_field_default_field_instances_alter(&$data) {
  if (isset($data['node-group-body'])) {
    $data['node-group-body']['display']['default']['weight'] = 2; /* WAS: 1 */
    $data['node-group-body']['label'] = 'Beskrivelse'; /* WAS: 'Description' */
  }
  if (isset($data['node-group-field_group_logo'])) {
    $data['node-group-field_group_logo']['display']['default']['settings']['image_style'] = 'group_grid'; /* WAS: '50x50' */
    $data['node-group-field_group_logo']['label'] = 'Logo'; /* WAS: 'Group Logo' */
    $data['node-group-field_group_logo']['settings']['default_image'] = 216; /* WAS: 0 */
    $data['node-group-field_group_logo']['widget']['settings']['progress_indicator'] = 'bar'; /* WAS: 'throbber' */
  }
  if (isset($data['node-group-field_og_access_default_value'])) {
    $data['node-group-field_og_access_default_value']['display']['default']['weight'] = 9; /* WAS: 5 */
    $data['node-group-field_og_access_default_value']['widget']['weight'] = 14; /* WAS: 42 */
  }
  if (isset($data['node-group-field_og_subscribe_settings'])) {
    $data['node-group-field_og_subscribe_settings']['display']['default']['weight'] = 5; /* WAS: 4 */
    $data['node-group-field_og_subscribe_settings']['widget']['weight'] = 11; /* WAS: 41 */
  }
  if (isset($data['node-group-group_access'])) {
    $data['node-group-group_access']['display']['default']['weight'] = 8; /* WAS: 4 */
    $data['node-group-group_access']['widget']['weight'] = 13; /* WAS: 41 */
  }
  if (isset($data['node-group-group_group'])) {
    $data['node-group-group_group']['display']['default']['weight'] = 1; /* WAS: 0 */
    $data['node-group-group_group']['widget']['weight'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-group-og_roles_permissions'])) {
    $data['node-group-og_roles_permissions']['display']['default']['weight'] = 3; /* WAS: 1 */
    $data['node-group-og_roles_permissions']['widget']['weight'] = 2; /* WAS: 1 */
  }
  if (isset($data['node-group-title_field'])) {
    $data['node-group-title_field']['display']['default']['weight'] = 11; /* WAS: 12 */
    $data['node-group-title_field']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-group-title_field']['display']['teaser']['module'] = 'title'; /* WAS: '' */
    $data['node-group-title_field']['display']['teaser']['settings']['title_class'] = ''; /* WAS: '' */
    $data['node-group-title_field']['display']['teaser']['settings']['title_link'] = 'content'; /* WAS: '' */
    $data['node-group-title_field']['display']['teaser']['settings']['title_style'] = 'h3'; /* WAS: '' */
    $data['node-group-title_field']['display']['teaser']['type'] = 'title_linked'; /* WAS: 'hidden' */
    $data['node-group-title_field']['display']['teaser']['weight'] = 1; /* WAS: 0 */
    $data['node-group-title_field']['label'] = 'Titel'; /* WAS: 'Title' */
    $data['node-group-title_field']['widget']['weight'] = 0; /* WAS: -5 */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function sp_groups_node_info_alter(&$data) {
  if (isset($data['group'])) {
    $data['group']['name'] = 'Gruppe'; /* WAS: 'Group' */
    $data['group']['title_label'] = 'Navn'; /* WAS: 'Group name' */
  }
}
