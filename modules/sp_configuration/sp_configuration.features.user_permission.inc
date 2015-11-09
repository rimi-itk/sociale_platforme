<?php
/**
 * @file
 * sp_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sp_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
      'translator' => 'translator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
      'translator' => 'translator',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer sp'.
  $permissions['administer sp'] = array(
    'name' => 'administer sp',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'social_misc',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'configurator' => 'configurator',
      'translator' => 'translator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
