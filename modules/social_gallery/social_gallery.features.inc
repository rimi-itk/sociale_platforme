<?php
/**
 * @file
 * social_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function social_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "commons_bw_ui" && $api == "commons_bw_ui") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function social_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function social_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_thumnail.
  $styles['gallery_thumnail'] = array(
    'label' => 'Gallery thumnail',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 145,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function social_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Galleri'),
      'base' => 'node_content',
      'description' => t('Post images in a gallery'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
