<?php
/**
 * @file
 * sp_profile_extended.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function sp_profile_extended_field_default_field_bases_alter(&$data) {
  if (isset($data['field_name_first'])) {
    $data['field_name_first']['field_permissions'] = array(
      'type' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['field_name_last'])) {
    $data['field_name_last']['field_permissions'] = array(
      'type' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function sp_profile_extended_field_default_field_instances_alter(&$data) {
  if (isset($data['user-user-field_name_first'])) {
    $data['user-user-field_name_first']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['user-user-field_name_first']['label'] = 'Fornavn'; /* WAS: 'First Name' */
    $data['user-user-field_name_first']['widget']['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['user-user-field_name_last'])) {
    $data['user-user-field_name_last']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['user-user-field_name_last']['label'] = 'Efternavn'; /* WAS: 'Last Name' */
    $data['user-user-field_name_last']['widget']['weight'] = 5; /* WAS: 4 */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function sp_profile_extended_strongarm_alter(&$data) {
  if (isset($data['realname_pattern'])) {
    $data['realname_pattern']->value = '[user:field-display-name]'; /* WAS: '[user:field-name-first] [user:field-name-last]' */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function sp_profile_extended_image_default_styles() {
  $styles = array();

  // Exported image style: 100x100_avatar.
  $styles['100x100_avatar'] = array(
    'label' => '100x100 avatar',
    'effects' => array(
      2 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
    'name' => '100x100_avatar',
  );

  return $styles;
}
