<?php
/**
 * @file
 * sp_site_homepage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sp_site_homepage_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable logolist'.
  $permissions['create fieldable logolist'] = array(
    'name' => 'create fieldable logolist',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable logolist'.
  $permissions['delete fieldable logolist'] = array(
    'name' => 'delete fieldable logolist',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable logolist'.
  $permissions['edit fieldable logolist'] = array(
    'name' => 'edit fieldable logolist',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
