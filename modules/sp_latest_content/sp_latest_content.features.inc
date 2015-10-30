<?php
/**
 * @file
 * sp_latest_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sp_latest_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
