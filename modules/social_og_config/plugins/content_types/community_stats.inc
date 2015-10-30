<?php
/**
 * @file
 * This plugin array is more or less self documenting.
 */

$plugin = array(
  'title' => t('Community statistics'),
  'description' => t('Provides status about the community'),
  'category' => 'Sociale Platforme - Blokke',
  'render callback' => 'social_og_config_community_stats_render',
  'admin info' => 'social_og_config_community_stats_info',
  'defaults' => array(),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Run-time rendering of the body of the block (content type).
 *
 * See ctools_plugin_examples for more advanced info.
 */
function social_og_config_community_stats_render($subtype, $conf, $context = NULL) {

  $block = new stdClass();
  $block->title = "Dette community indeholder lige nu:";

  $output = "";
  $output .= "<div class='stats'>";
  $output .= "<div><span class='icon-bruger'></span> <span class='num'>" . social_blocks_get_community_stats("members") . "</span> brugere</div>";
  $output .= "<div><span class='icon-gruppe'></span> <span class='num'>" . social_blocks_get_community_stats("groups") . "</span> grupper</div>";
  $output .= "<div><span class='icon-indlaeg'></span> <span class='num'>" . social_blocks_get_community_stats("posts") . "</span> indlæg</div>";
  $output .= "</div>";

  $block->content = $output;
  return $block;
}

/**
 * Admin info.
 */
function social_og_config_community_stats_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $content;
    return $block;
  }
}
