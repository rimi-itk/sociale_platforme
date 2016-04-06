<?php
/**
 * @file
 * sp_posts.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function sp_posts_field_default_field_instances_alter(&$data) {
  if (isset($data['node-post-body'])) {
    $data['node-post-body']['label'] = 'Beskrivelse'; /* WAS: 'Body' */
  }
  if (isset($data['node-post-field_radioactivity'])) {
    $data['node-post-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
  }
  if (isset($data['node-post-field_topics'])) {
    $data['node-post-field_topics']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-post-field_topics']['label'] = 'Emner'; /* WAS: 'Topics' */
  }
  if (isset($data['node-post-og_group_ref'])) {
    $data['node-post-og_group_ref']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-post-og_group_ref']['label'] = 'Grupper'; /* WAS: 'Groups' */
    $data['node-post-og_group_ref']['settings']['behaviors']['og_widget']['access_override'] = 0; /* WAS: '' */
    $data['node-post-og_group_ref']['settings']['behaviors']['prepopulate']['action_on_edit'] = 0; /* WAS: '' */
    $data['node-post-og_group_ref']['settings']['behaviors']['prepopulate']['providers'] = array(
      'og_context' => FALSE,
      'url' => 1,
    ); /* WAS: '' */
    unset($data['node-post-og_group_ref']['settings']['behaviors']['prepopulate']['og_context']);
  }
  if (isset($data['node-post-title_field'])) {
    $data['node-post-title_field']['display_in_partial_form'] = 0; /* WAS: FALSE */
    $data['node-post-title_field']['label'] = 'Titel'; /* WAS: 'Title' */
  }
}
