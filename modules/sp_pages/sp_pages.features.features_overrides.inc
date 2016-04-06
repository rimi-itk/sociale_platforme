<?php
/**
 * @file
 * sp_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-page-body.label"] = 'Brødtekst';
  $overrides["field_instance.node-page-body.required"] = 0;
  $overrides["field_instance.node-page-body.settings|display_summary"] = 0;
  $overrides["field_instance.node-page-body.widget|active"] = 1;
  $overrides["field_instance.node-page-title_field.label"] = 'Titel';

 return $overrides;
}
