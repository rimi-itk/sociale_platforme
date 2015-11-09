<?php
/**
 * @file
 * sp_groups.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_groups_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_group_logo.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_og_subscribe_settings.field_permissions"] = array(
    'type' => 2,
  );
  $overrides["field_base.field_og_subscribe_settings.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_og_subscribe_settings.settings|allowed_values|invitation"] = 'Joining requires an invitation. The group and content is hidden from non-members.';
  $overrides["field_base.group_access.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.group_content_access.field_permissions"] = array(
    'type' => 0,
  );
  $overrides["field_base.group_content_access.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.group_group.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.og_group_ref.field_permissions"] = array(
    'type' => 0,
  );
  $overrides["field_base.og_group_ref.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.og_user_group_ref.field_permissions"] = array(
    'type' => 0,
  );
  $overrides["field_base.og_user_group_ref.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.og_user_group_ref.settings|handler_settings|behaviors|views-select-list"] = array(
    'status' => 0,
  );
  $overrides["field_base.og_user_group_ref.settings|handler_settings|sort"] = array(
    'type' => 'none',
  );

  // Exported overrides for: field_instance
  $overrides["field_instance.node-group-body.display|default|weight"] = 2;
  $overrides["field_instance.node-group-body.label"] = 'Beskrivelse';
  $overrides["field_instance.node-group-field_group_logo.display|default|settings|image_style"] = 'group_grid';
  $overrides["field_instance.node-group-field_group_logo.label"] = 'Logo';
  $overrides["field_instance.node-group-field_group_logo.settings|default_image"] = 216;
  $overrides["field_instance.node-group-field_group_logo.widget|settings|progress_indicator"] = 'bar';
  $overrides["field_instance.node-group-field_og_access_default_value.display|default|weight"] = 9;
  $overrides["field_instance.node-group-field_og_access_default_value.widget|weight"] = 14;
  $overrides["field_instance.node-group-field_og_subscribe_settings.display|default|weight"] = 5;
  $overrides["field_instance.node-group-field_og_subscribe_settings.widget|weight"] = 11;
  $overrides["field_instance.node-group-group_access.display|default|weight"] = 8;
  $overrides["field_instance.node-group-group_access.widget|weight"] = 13;
  $overrides["field_instance.node-group-group_group.display|default|weight"] = 1;
  $overrides["field_instance.node-group-group_group.widget|weight"] = 1;
  $overrides["field_instance.node-group-og_roles_permissions.display|default|weight"] = 3;
  $overrides["field_instance.node-group-og_roles_permissions.widget|weight"] = 2;
  $overrides["field_instance.node-group-title_field.display|default|weight"] = 11;
  $overrides["field_instance.node-group-title_field.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-group-title_field.display|teaser|module"] = 'title';
  $overrides["field_instance.node-group-title_field.display|teaser|settings|title_class"] = '';
  $overrides["field_instance.node-group-title_field.display|teaser|settings|title_link"] = 'content';
  $overrides["field_instance.node-group-title_field.display|teaser|settings|title_style"] = 'h3';
  $overrides["field_instance.node-group-title_field.display|teaser|type"] = 'title_linked';
  $overrides["field_instance.node-group-title_field.display|teaser|weight"] = 1;
  $overrides["field_instance.node-group-title_field.label"] = 'Titel';
  $overrides["field_instance.node-group-title_field.widget|weight"] = 0;

  // Exported overrides for: node
  $overrides["node.group.name"] = 'Gruppe';
  $overrides["node.group.title_label"] = 'Navn';

 return $overrides;
}
