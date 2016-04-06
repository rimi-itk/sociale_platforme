<?php
/**
 * @file
 * sp_profile_extended.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sp_profile_extended_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_display_name'
  $field_instances['user-user-field_display_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'display_in_partial_form' => 0,
    'entity_type' => 'user',
    'field_name' => 'field_display_name',
    'label' => 'Offentligt navn',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_profile_kom'
  $field_instances['user-user-field_profile_kom'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
    ),
    'display_in_partial_form' => 0,
    'entity_type' => 'user',
    'field_name' => 'field_profile_kom',
    'label' => 'Kommune',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_profile_toc'
  $field_instances['user-user-field_profile_toc'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Ved at klikke ovenstående felt af accepeterer du at dit profilbillede må blive vist på forsiden af websitet. <a href="/betingelser">Læs betingelserne her</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'display_in_partial_form' => 0,
    'entity_type' => 'user',
    'field_name' => 'field_profile_toc',
    'label' => 'Jeg accepterer at mit profilbillede må blive vist på forsiden af websitet',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Jeg accepterer at mit profilbillede må blive vist på forsiden af websitet');
  t('Kommune');
  t('Offentligt navn');
  t('Ved at klikke ovenstående felt af accepeterer du at dit profilbillede må blive vist på forsiden af websitet. <a href="/betingelser">Læs betingelserne her</a>');

  return $field_instances;
}
