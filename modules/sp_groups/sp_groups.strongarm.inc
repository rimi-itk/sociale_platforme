<?php
/**
 * @file
 * sp_groups.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sp_groups_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_group';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_group'] = $strongarm;

  return $export;
}
