<?php
/**
 * @file
 * This plugin array is more or less self documenting.
 */

$plugin = array(
  'title' => t('Content overview call to action'),
  'description' => t('Action buttons to add content of a specific type.'),
  'category' => 'Sociale Platforme',
  'edit form' => 'social_og_config_content_add_edit',
  'render callback' => 'social_og_config_content_add_render',
  'admin info' => 'social_og_config_content_add_info',
  'defaults' => array(),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Edit form.
 */
function social_og_config_content_add_edit($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['description'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#default_value' => $conf['description'],
  );

  $options = array();

  $allowed_types = array("group", "event");

  foreach (node_type_get_types() as $type) {
    if (in_array($type->type, $allowed_types)) {
      $options[$type->type] = check_plain($type->name);
    }
  }
  $form['type'] = array(
    '#title' => t('Choose a content type'),
    '#type' => 'radios',
    '#options' => $options,
    '#required' => TRUE,
    '#default_value' => $conf['types'],
  );
  return $form;
}

/**
 * Edit form submit function.
 */
function social_og_config_content_add_edit_submit($form, &$form_state) {
  $form_state['conf']['description'] = $form_state['values']['description'];
  $form_state['conf']['type'] = $form_state['values']['type'];
}

/**
 * Render.
 */
function social_og_config_content_add_render($subtype, $conf, $context = NULL) {

  $block = new stdClass();
  $block->title = t("Create @type", array("@type" => $conf["type"]));

  $output = '';
  $output .= '<div class="desc">' . $conf['description'] . '</div>';

  $options = array();
  $options['attributes']['class'][] = 'btn-link';

  $output .= '<div class="btn-wrapper">' . l(t("Create @type", array("@type" => $conf["type"])), "node/add/" . $conf["type"], $options) . "</div>";

  $block->content = $output;
  return $block;
}

/**
 * Admin info.
 */
function social_og_config_content_add_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $content;
    return $block;
  }
}
