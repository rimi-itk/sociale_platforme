<?php
/**
 * @file
 * sp_configuration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function sp_configuration_user_default_roles() {
  $roles = array();

  // Exported role: configurator.
  $roles['configurator'] = array(
    'name' => 'configurator',
    'weight' => 4,
  );

  return $roles;
}
