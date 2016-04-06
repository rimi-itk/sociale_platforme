<?php
/**
 * @file
 * sp_pages.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function sp_pages_field_default_field_instances_alter(&$data) {
  if (isset($data['node-page-body'])) {
    $data['node-page-body']['label'] = 'Brødtekst'; /* WAS: 'Body' */
    $data['node-page-body']['required'] = 0; /* WAS: FALSE */
    $data['node-page-body']['settings']['display_summary'] = 0; /* WAS: FALSE */
    $data['node-page-body']['widget']['active'] = 1; /* WAS: '' */
  }
  if (isset($data['node-page-title_field'])) {
    $data['node-page-title_field']['label'] = 'Titel'; /* WAS: 'Title' */
  }
}
