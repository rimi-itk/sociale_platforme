<?php
/**
 * @file
 * sp_profile_extended.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_profile_extended_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_name_first.field_permissions"] = array(
    'type' => 0,
  );
  $overrides["field_base.field_name_last.field_permissions"] = array(
    'type' => 0,
  );

  // Exported overrides for: field_instance
  $overrides["field_instance.user-user-field_name_first.display_in_partial_form"] = 0;
  $overrides["field_instance.user-user-field_name_first.label"] = 'Fornavn';
  $overrides["field_instance.user-user-field_name_first.widget|weight"] = 4;
  $overrides["field_instance.user-user-field_name_last.display_in_partial_form"] = 0;
  $overrides["field_instance.user-user-field_name_last.label"] = 'Efternavn';
  $overrides["field_instance.user-user-field_name_last.widget|weight"] = 5;

  // Exported overrides for: variable
  $overrides["variable.realname_pattern.value"] = '[user:field-display-name]';

 return $overrides;
}
