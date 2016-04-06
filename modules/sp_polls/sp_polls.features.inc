<?php
/**
 * @file
 * sp_polls.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function sp_polls_field_default_field_instances_alter(&$data) {
  if (isset($data['node-poll-body'])) {
    $data['node-poll-body']['label'] = 'Beskrivelse'; /* WAS: 'Body' */
  }
  if (isset($data['node-poll-field_radioactivity'])) {
    $data['node-poll-field_radioactivity']['settings']['history'] = 0; /* WAS: '' */
  }
  if (isset($data['node-poll-field_topics'])) {
    $data['node-poll-field_topics']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-poll-field_topics']['label'] = 'Emner'; /* WAS: 'Topics' */
  }
  if (isset($data['node-poll-og_group_ref'])) {
    $data['node-poll-og_group_ref']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-poll-og_group_ref']['label'] = 'Gruppe'; /* WAS: 'Groups' */
    $data['node-poll-og_group_ref']['settings']['behaviors']['og_widget']['access_override'] = 0; /* WAS: '' */
    $data['node-poll-og_group_ref']['settings']['behaviors']['prepopulate']['action_on_edit'] = 0; /* WAS: '' */
    $data['node-poll-og_group_ref']['settings']['behaviors']['prepopulate']['providers'] = array(
      'og_context' => FALSE,
      'url' => 1,
    ); /* WAS: '' */
    unset($data['node-poll-og_group_ref']['settings']['behaviors']['prepopulate']['og_context']);
  }
}

/**
 * Implements hook_node_info_alter().
 */
function sp_polls_node_info_alter(&$data) {
  if (isset($data['poll'])) {
    $data['poll']['has_title'] = 1; /* WAS: '' */
    $data['poll']['help'] = ''; /* WAS: '' */
  }
}
