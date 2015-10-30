<?php
/**
 * @file
 * sp_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sp_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_og_subscribe_settings'.
  $permissions['create field_og_subscribe_settings'] = array(
    'name' => 'create field_og_subscribe_settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete terms in group_categories'.
  $permissions['delete terms in group_categories'] = array(
    'name' => 'delete terms in group_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in group_tags'.
  $permissions['delete terms in group_tags'] = array(
    'name' => 'delete terms in group_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit field_og_subscribe_settings'.
  $permissions['edit field_og_subscribe_settings'] = array(
    'name' => 'edit field_og_subscribe_settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_og_subscribe_settings'.
  $permissions['edit own field_og_subscribe_settings'] = array(
    'name' => 'edit own field_og_subscribe_settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit terms in group_categories'.
  $permissions['edit terms in group_categories'] = array(
    'name' => 'edit terms in group_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in group_tags'.
  $permissions['edit terms in group_tags'] = array(
    'name' => 'edit terms in group_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_og_subscribe_settings'.
  $permissions['view field_og_subscribe_settings'] = array(
    'name' => 'view field_og_subscribe_settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_og_subscribe_settings'.
  $permissions['view own field_og_subscribe_settings'] = array(
    'name' => 'view own field_og_subscribe_settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
