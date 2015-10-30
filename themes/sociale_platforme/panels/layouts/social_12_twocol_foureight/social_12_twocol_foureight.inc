<?php

/**
 * @file
 */

/**
 * Implements hook_panels_layouts().
 */
function sociale_platforme_social_12_twocol_foureight_panels_layouts() {
  $items['social_12_twocol_foureight'] = array(
    'title' => t('Two column 4-8'),
    'category' => t('SP: 12 Column Grid'),
    'icon' => 'social_12_twocol_foureight.png',
    'theme' => 'social_12_twocol_foureight',
    'admin css' => '../social_12_admin.css',
    'regions' => array(
      'header' => t('Header'),
      'sidebar' => t('Sidebar'),
      'content' => t('Content'),
      'footer' => t('Footer'),
    ),
  );
  return $items;
}
