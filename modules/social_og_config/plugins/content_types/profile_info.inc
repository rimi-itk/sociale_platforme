<?php
/**
 * @file
 * This plugin array is more or less self documenting.
 */

$plugin = array(
  'title' => t('User profile information'),
  'description' => t('Provides profile info about the user logged in.'),
  'category' => 'Sociale Platforme - Blokke',
  'render callback' => 'social_og_config_profil_info_render',
  'admin info' => 'social_og_config_profile_info_info',
  'defaults' => array(),
  'single' => TRUE,
);

/**
 * Run-time rendering of the body of the block (content type).
 *
 * See ctools_plugin_examples for more advanced info.
 */
function social_og_config_profil_info_render($subtype, $conf, $context = NULL) {

  global $user;
  $account = user_load($user->uid);

  if (isset($account->field_display_name['und'][0]['safe_value'])) {
    $display_name = check_plain($account->field_display_name['und'][0]['safe_value']);
  }
  else {
    $display_name = check_plain($account->name);
  }

  $block = new stdClass();
  $block->title = "";

  $output = "";

  // Messages section.
  $unread_count = privatemsg_unread_count();
  $invitations_count = count(commons_trusted_contacts_get_pending_invitations($account->uid));

  $output .= "<div class='profile-msg'>";
  $output .= "<h3>" . t('Messages & invitations') . "</h3>";
  $output .= "<div class='msg-list'>";
  $output .= "<div class='new-msg'>" . l("<span class='icon-message'></span> " . t('New messages') . " (" . $unread_count . ")", "user/" . $user->uid . "/contacts", array("html" => TRUE, "query" => array("qt-commons_trusted_contacts" => "messages"))) . "</div>";
  $output .= "<div class='new-invites'>" . l("<span class='icon-user-add'></span> " . t('New invitations') . " (" . $invitations_count . ")", "user/" . $user->uid . "/contacts", array("html" => TRUE, "query" => array("qt-commons_trusted_contacts" => "invitations"))) . "</div>";    $output .= "</div>";
  $output .= "</div>";

  // Profile section.
  $output .= "<div class='profile-info'>";
  $output .= "<h2>Din profil</h2>";
  $output .= theme('image_style', array('path' => !empty($account->picture->uri) ? $account->picture->uri : variable_get('user_picture_default'), 'style_name' => '100x100_avatar'));
  $output .= "<h3>" . $display_name . "</h3>";
  $output .= render(field_view_field('user', $account, 'field_bio', array("label" => "hidden")));

  $options = array();
  $options['attributes']['class'][] = 'btn-link';
  $output .= l(t("Edit profile"), "user/" . $account->uid . "/edit-profile", $options);
  $output .= "</div>";

  $block->content = $output;
  return $block;
}

/**
 * Admin info.
 */
function social_og_config_profile_info_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $content;
    return $block;
  }
}
