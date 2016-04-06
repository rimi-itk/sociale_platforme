<?php
/**
 * @file
 * sp_polls.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_polls_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-poll-body.label"] = 'Beskrivelse';
  $overrides["field_instance.node-poll-field_radioactivity.settings|history"] = 0;
  $overrides["field_instance.node-poll-field_topics.display_in_partial_form"] = 0;
  $overrides["field_instance.node-poll-field_topics.label"] = 'Emner';
  $overrides["field_instance.node-poll-og_group_ref.display_in_partial_form"] = 0;
  $overrides["field_instance.node-poll-og_group_ref.label"] = 'Gruppe';
  $overrides["field_instance.node-poll-og_group_ref.settings|behaviors|og_widget|access_override"] = 0;
  $overrides["field_instance.node-poll-og_group_ref.settings|behaviors|prepopulate|action_on_edit"] = 0;
  $overrides["field_instance.node-poll-og_group_ref.settings|behaviors|prepopulate|og_context"]["DELETED"] = TRUE;
  $overrides["field_instance.node-poll-og_group_ref.settings|behaviors|prepopulate|providers"] = array(
    'og_context' => FALSE,
    'url' => 1,
  );

  // Exported overrides for: node
  $overrides["node.poll.has_title"] = 1;
  $overrides["node.poll.help"] = '';

 return $overrides;
}
