<?php
/**
 * @file
 * This plugin array is more or less self documenting.
 */

$plugin = array(
  'title' => t('Tips & Tricks'),
  'description' => t('Write a quick tip text to help out the users on the site.'),
  'category' => 'Sociale Platforme - Blokke',
  'edit form' => 'social_og_config_quick_tip_edit',
  'render callback' => 'social_og_config_quick_tip_render',
  'admin info' => 'social_og_config_quick_tip_info',
  'defaults' => array(),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Edit form.
 */
function social_og_config_quick_tip_edit($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['body'] = array(
    '#type' => 'text_format',
    '#title' => t('Body'),
    '#default_value' => $conf['body']['value'],
    '#format' => isset($conf['body']['format']) ? $conf['body']['format'] : NULL,
  );

  return $form;
}

/**
 * Edit form submit function.
 */
function social_og_config_quick_tip_edit_submit($form, &$form_state) {
  $form_state['conf']['body'] = $form_state['values']['body'];
}

/**
 * Render.
 */
function social_og_config_quick_tip_render($subtype, $conf, $context = NULL) {

  $block = new stdClass();
  $block->title = t("Quick tip");
  $block->content = $conf['body']['value'];
  return $block;
}

/**
 * Admin info.
 */
function social_og_config_quick_tip_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $content;
    return $block;
  }
}
