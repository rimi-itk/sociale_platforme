<?php

/**
 * @file
 */

/**
 * Implements hook_panels_layouts().
 */
function sociale_platforme_social_12_onecol_panels_layouts() {
  $items['social_12_onecol'] = array(
    'title' => t('One column'),
    'category' => t('SP: 12 Column Grid'),
    'icon' => 'social_12_onecol.png',
    'theme' => 'social_12_onecol',
    'admin css' => '../social_12_admin.css',
    'regions' => array(
      'content' => t('Content'),
    ),
  );
  return $items;
}
