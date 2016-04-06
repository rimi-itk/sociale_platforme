<?php
/**
 * @file
 * sp_events.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function sp_events_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-body'])) {
    $data['node-event-body']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-body']['label'] = 'Beskrivelse'; /* WAS: 'Description' */
    $data['node-event-body']['settings']['display_summary'] = 0; /* WAS: FALSE */
  }
  if (isset($data['node-event-field_address'])) {
    $data['node-event-field_address']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_address']['label'] = 'Adresse'; /* WAS: 'Address' */
    unset($data['node-event-field_address']['default_value'][0]['administrative_area']);
  }
  if (isset($data['node-event-field_date'])) {
    $data['node-event-field_date']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_date']['label'] = 'Dato'; /* WAS: 'Date' */
    $data['node-event-field_date']['widget']['settings']['input_format_custom'] = ''; /* WAS: 'd M Y - h:i:s a' */
  }
  if (isset($data['node-event-field_location'])) {
    $data['node-event-field_location']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_location']['label'] = 'Sted'; /* WAS: 'Location' */
  }
  if (isset($data['node-event-field_logo'])) {
    $data['node-event-field_logo']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_logo']['label'] = 'Billede'; /* WAS: 'Event logo' */
  }
  if (isset($data['node-event-field_number_of_attendees'])) {
    $data['node-event-field_number_of_attendees']['description'] = 'Tast 0 for ubegrænset'; /* WAS: 'Enter 0 for unlimited' */
    $data['node-event-field_number_of_attendees']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_number_of_attendees']['label'] = 'Maximum antal deltagere'; /* WAS: 'Maximum number of attendees' */
  }
  if (isset($data['node-event-field_organizers'])) {
    $data['node-event-field_organizers']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_organizers']['label'] = 'Arrangører'; /* WAS: 'Organizers' */
  }
  if (isset($data['node-event-field_registration'])) {
    $data['node-event-field_registration']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_registration']['label'] = 'Registreringspakke'; /* WAS: 'Registration bundle' */
    $data['node-event-field_registration']['settings']['default_registration_settings']['settings']['confirmation'] = 'Registration has been saved.'; /* WAS: '' */
    $data['node-event-field_registration']['settings']['default_registration_settings']['settings']['maximum_spaces'] = 1; /* WAS: '' */
  }
  if (isset($data['node-event-field_registration_type'])) {
    $data['node-event-field_registration_type']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-event-field_registration_type']['label'] = 'Registreringstype'; /* WAS: 'Registration type' */
  }
  if (isset($data['node-event-title_field'])) {
    $data['node-event-title_field']['display_in_partial_form'] = 0; /* WAS: FALSE */
    $data['node-event-title_field']['label'] = 'Titel'; /* WAS: 'Title' */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function sp_events_node_info_alter(&$data) {
  if (isset($data['event'])) {
    $data['event']['title_label'] = 'Titel'; /* WAS: 'Event title' */
  }
}
