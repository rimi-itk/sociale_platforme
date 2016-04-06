<?php
/**
 * @file
 * sp_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-body.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-body.label"] = 'Beskrivelse';
  $overrides["field_instance.node-event-body.settings|display_summary"] = 0;
  $overrides["field_instance.node-event-field_address.default_value|0|administrative_area"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_address.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_address.label"] = 'Adresse';
  $overrides["field_instance.node-event-field_date.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_date.label"] = 'Dato';
  $overrides["field_instance.node-event-field_date.widget|settings|input_format_custom"] = '';
  $overrides["field_instance.node-event-field_location.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_location.label"] = 'Sted';
  $overrides["field_instance.node-event-field_logo.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_logo.label"] = 'Billede';
  $overrides["field_instance.node-event-field_number_of_attendees.description"] = 'Tast 0 for ubegrænset';
  $overrides["field_instance.node-event-field_number_of_attendees.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_number_of_attendees.label"] = 'Maximum antal deltagere';
  $overrides["field_instance.node-event-field_organizers.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_organizers.label"] = 'Arrangører';
  $overrides["field_instance.node-event-field_registration.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_registration.label"] = 'Registreringspakke';
  $overrides["field_instance.node-event-field_registration.settings|default_registration_settings|settings|confirmation"] = 'Registration has been saved.';
  $overrides["field_instance.node-event-field_registration.settings|default_registration_settings|settings|maximum_spaces"] = 1;
  $overrides["field_instance.node-event-field_registration_type.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-field_registration_type.label"] = 'Registreringstype';
  $overrides["field_instance.node-event-title_field.display_in_partial_form"] = 0;
  $overrides["field_instance.node-event-title_field.label"] = 'Titel';

  // Exported overrides for: node
  $overrides["node.event.title_label"] = 'Titel';

 return $overrides;
}
