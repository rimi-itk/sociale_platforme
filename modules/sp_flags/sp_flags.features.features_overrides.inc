<?php
/**
 * @file
 * sp_flags.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sp_flags_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable.
  $overrides["variable.rate_widgets.value|1|comment_types|0"] = 'event';
  $overrides["variable.rate_widgets.value|1|comment_types|1"] = 'group';
  $overrides["variable.rate_widgets.value|1|comment_types|2"] = 'poll';
  $overrides["variable.rate_widgets.value|1|comment_types|3"] = 'post';
  $overrides["variable.rate_widgets.value|1|comment_types|4"] = 'question';
  $overrides["variable.rate_widgets.value|1|comment_types|5"] = 'answer';
  $overrides["variable.rate_widgets.value|1|comment_types|6"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|comment_types|7"] = 'blog';
  $overrides["variable.rate_widgets.value|1|comment_types|8"] = 'gallery';
  $overrides["variable.rate_widgets.value|1|comment_types|9"] = 'page';
  $overrides["variable.rate_widgets.value|1|node_types|0"] = 'event';
  $overrides["variable.rate_widgets.value|1|node_types|1"] = 'group';
  $overrides["variable.rate_widgets.value|1|node_types|2"] = 'poll';
  $overrides["variable.rate_widgets.value|1|node_types|3"] = 'post';
  $overrides["variable.rate_widgets.value|1|node_types|4"] = 'question';
  $overrides["variable.rate_widgets.value|1|node_types|5"] = 'wiki';
  $overrides["variable.rate_widgets.value|1|node_types|6"] = 'blog';
  $overrides["variable.rate_widgets.value|1|node_types|7"] = 'gallery';
  $overrides["variable.rate_widgets.value|1|node_types|8"] = 'page';
  $overrides["variable.rate_widgets.value|2"] = (object) array(
    'name' => 'commons_answer',
    'tag' => 'commons_thumbs_up_down',
    'title' => 'Answer',
    'node_types' => array(
      0 => 'answer',
    ),
    'comment_types' => array(),
    'options' => array(
      0 => array(
        0 => 1,
        1 => 'up',
      ),
      1 => array(
        0 => -1,
        1 => 'down',
      ),
    ),
    'template' => 'commons_thumbs_up_down',
    'node_display' => 2,
    'teaser_display' => FALSE,
    'comment_display' => 2,
    'node_display_mode' => 1,
    'teaser_display_mode' => 1,
    'comment_display_mode' => 1,
    'roles' => array(
      2 => 2,
      1 => 0,
    ),
    'allow_voting_by_author' => 1,
    'noperm_behaviour' => 3,
    'displayed' => 1,
    'displayed_just_voted' => 1,
    'description' => '',
    'description_in_compact' => TRUE,
    'delete_vote_on_second_click' => 1,
    'value_type' => 'points',
    'theme' => 'rate_template_commons_thumbs_up_down',
    'css' => 'profiles/commons/modules/contrib/commons_q_a/commons-thumbs-up-down.css',
    'translate' => TRUE,
    'use_source_translation' => TRUE,
  );

  return $overrides;
}
