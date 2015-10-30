<?php
/**
 * @file
 * social_gallery.commons_bw_ui.inc
 */

/**
 * Implements hook_default_commons_bw_ui().
 */
function social_gallery_default_commons_bw_ui() {
  $export = array();

  $tab = new stdClass();
  $tab->disabled = FALSE; /* Edit this to true to make a default tab disabled initially */
  $tab->api_version = 1;
  $tab->title = 'Gallerier';
  $tab->type = 'view';
  $tab->name = 'commons_bw_galleries';
  $tab->display = 'default';
  $tab->weight = 0;
  $tab->bundle = 'gallery';
  $tab->front = 0;
  $export['Gallerier'] = $tab;

  return $export;
}
