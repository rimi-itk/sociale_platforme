<?php
/**
 * @file
 * sp_profile_extended.features.inc
 */

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
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
