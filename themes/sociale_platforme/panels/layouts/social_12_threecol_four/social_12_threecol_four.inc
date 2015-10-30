<?php

/**
 * @file
 */

/**
 * Implements hook_panels_layouts().
 */
function sociale_platforme_social_12_threecol_four_panels_layouts() {
  $items['social_12_threecol_four'] = array(
    'title' => t('Three column 4-4-4'),
    'category' => t('SP: 12 Column Grid'),
    'icon' => 'social_12_threecol_four.png',
    'theme' => 'social_12_threecol_four',
    'admin css' => '../social_12_admin.css',
    'regions' => array(
      'content' => t('Content'),
      'brick_left' => t('Brick left'),
      'brick_center' => t('Brick center'),
      'brick_right' => t('Brick right'),
      'footer' => t('Footer'),
    ),
  );
  return $items;
}
