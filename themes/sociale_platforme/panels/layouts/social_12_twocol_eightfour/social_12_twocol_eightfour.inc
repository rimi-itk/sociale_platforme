<?php

/**
 * @file
 */

/**
 * Implements hook_panels_layouts().
 */
function sociale_platforme_social_12_twocol_eightfour_panels_layouts() {
  $items['social_12_twocol_eightfour'] = array(
    'title' => t('Two column 8-4'),
    'category' => t('SP: 12 Column Grid'),
    'icon' => 'social_12_twocol_eightfour.png',
    'theme' => 'social_12_twocol_eightfour',
    'admin css' => '../social_12_admin.css',
    'regions' => array(
      'header' => t('Header'),
      'left' => t('Left'),
      'right' => t('Right'),
      'footer' => t('Footer'),
    ),
  );
  return $items;
}
