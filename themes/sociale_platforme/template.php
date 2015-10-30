<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Implements template_process_html().
 *
 * Override or insert variables into the page template for HTML output.
 */
function sociale_platforme_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}

/**
 * Implements template_preprocess_page().
 */
function sociale_platforme_preprocess_page(&$vars) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}

/**
 * Breadcrumbs .
 *
 * Customizes the breadcrumbs structure.
 */
function sociale_platforme_breadcrumb($variables) {

  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    array_shift($breadcrumb);
    // Removes the Home item.
    array_unshift($breadcrumb, l(' <span class="icon-home"></span> ', '<front>', array("html" => TRUE)));
    $output = '<div class="breadcrumb">';
    $output .= implode(' <span class="icon-arrow-right"></span> ', $breadcrumb);
    $output .= ' <span class="icon-arrow-right"></span> <strong>' . drupal_get_title() . '</strong>';
    $output .= '</div>';
    return $output;
  }
}

/**
 * Implements hook_form_alter().
 */
function sociale_platforme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#attributes']['placeholder'] = t('Search');
    $form['actions']['button']['#prefix'] = '<button type="submit">';
    $form['actions']['button']['#suffix'] = '</button>';
    $form['actions']['button']['#markup'] = '<span class="icon-search"></span>';
  }
  if ($form_id == 'user_login_block') {
    $form['name']['#attributes']['placeholder'] = t('Email');
    $form['pass']['#attributes']['placeholder'] = t('Password');
  }
}

/**
 * Implements hook_views_bulk_operations_form_Alter().
 */
function sociale_platforme_views_bulk_operations_form_alter(&$form, $form_state, $vbo) {
  // Change the buttons' fieldset wrapper to a div and push it to the bottom of
  // the form.
  $form['select']['#type'] = 'container';
  $form['select']['#weight'] = 9999;
}

/**
 * Implements hook_process_node().
 */
function sociale_platforme_process_node(&$variables, $hook) {
  $node = $variables['node'];
  $wrapper = entity_metadata_wrapper('node', $node);

  // Use timeago module for formatting node submission date
  // if it is enabled and also configured to be used on nodes.
  if (module_exists('timeago') && variable_get('timeago_node', 1)) {
    $variables['date'] = timeago_format_date($node->created, $variables['date']);
    $use_timeago_date_format = TRUE;
  }
  else {
    $use_timeago_date_format = FALSE;
  }

  // Replace the submitted text on nodes with something a bit more pertinent to
  // the content type.
  if (variable_get('node_submitted_' . $node->type, TRUE)) {
    $node_type_info = node_type_get_type($variables['node']);
    $type_attributes = array(
      'class' => array(
        'node-content-type',
        drupal_html_class('node-content-type-' . $node->type),          ),
    );
    $placeholders = array(
      '!type' => '<span' . drupal_attributes($type_attributes) . '>' . check_plain($node_type_info->name) . '</span>',
      '!user' => $variables['name'],
      '!date' => $variables['date'],
      '@interval' => format_interval(REQUEST_TIME - $node->created),
    );
    // Show what group the content belongs to if applicable.
    if (!empty($node->{OG_AUDIENCE_FIELD}) && $wrapper->{OG_AUDIENCE_FIELD}->count() == 1) {
      $placeholders['!group'] = l($wrapper->{OG_AUDIENCE_FIELD}->get(0)->label(), 'node/' . $wrapper->{OG_AUDIENCE_FIELD}->get(0)->getIdentifier());
      if ($use_timeago_date_format == TRUE) {
        $variables['submitted'] = t('!type created !date in the !group group by !user', $placeholders);
      }
      else {
        $variables['submitted'] = t('!type created @interval ago in the !group group by !user', $placeholders);
      }
    }
    else {
      if ($use_timeago_date_format == TRUE) {
        $variables['submitted'] = t('!type created !date by !user', $placeholders);
      }
      else {
        $variables['submitted'] = t('!type created @interval ago by !user', $placeholders);
      }
    }
  }

  // Append a feature label to featured node teasers.
  if ($variables['teaser'] && $variables['promote']) {
    $variables['submitted'] .= ' <span class="featured-node-tooltip">' . t('Featured') . ' ' . $variables['type'] . '</span>';
  }
}

/**
 * Implements hook_preprocess_commons_search_solr_user_results().
 */
function sociale_platforme_preprocess_commons_search_solr_user_results(&$variables, $hook) {
  // Hide the results title.
  $variables['title_attributes_array']['class'][] = 'element-invisible';
}

/**
 * Implements hook_preprocess_user_profile().
 */
function sociale_platforme_preprocess_user_profile(&$variables, $hook) {
  if (in_array('user_profile__search_results', $variables['theme_hook_suggestions'])) {
    // Give the profile a distinctive class to target and wrap the display in
    // pod styling.
    $variables['classes_array'][] = 'profile-search-result';
    $variables['classes_array'][] = 'commons-pod';

    // Wrap the group list and related title in a div.
    if (isset($variables['user_profile']['group_membership'])) {
      $variables['user_profile']['group_membership']['#theme_wrappers'][] = 'container';
      $variables['user_profile']['group_membership']['#attributes']['class'][] = 'profile-groups';
    }

    // Group actionable items together in a container.
    $variables['user_profile']['user_actions'] = array();
    $user_actions = array(
      'flags',
      'privatemsg_send_new_message',
      'group_group',
    );
    foreach ($user_actions as $action) {
      if (isset($variables['user_profile'][$action])) {
        $variables['user_profile']['user_actions'][$action] = $variables['user_profile'][$action];
        $variables['user_profile'][$action]['#access'] = FALSE;
      }
    }
    if (!module_exists('commons_trusted_contacts') && isset($variables['user_profile']['user_actions']['group_group'])) {
      $variables['user_profile']['user_actions']['group_group']['#access'] = FALSE;
    }
    if (!empty($variables['user_profile']['user_actions'])) {
      $variables['user_profile']['user_actions'] += array(
        '#theme_wrappers' => array('container'),
        '#attributes' => array(
          'class' => array('profile-actions'),
        ),
      );
    }
  }
}

/**
 * Overrides theme_field() for group fields.
 *
 * This will apply button styling to the links for leaving and joining a group.
 */
function sociale_platforme_field__group_group__group($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    if (isset($item['#type']) && $item['#type'] == 'link') {
      if (strpos($item['#href'], '/subscribe')) {
        $item['#options']['attributes']['class'][] = 'action-item-primary';
      }
      else {
        $item['#options']['attributes']['class'][] = 'action-item';
      }
    }

    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements hook_css_alter().
 */
function sociale_platforme_css_alter(&$css) {
  // Move colors.css to the end.
  $css["profiles/sp/themes/sociale_platforme/css/colors.css"]["weight"] = 99;
  $css["profiles/sp/themes/sociale_platforme/css/colors.css"]["group"] = 200;
}

/**
 * Implements hook_preprocess_comment().
 */
function sociale_platforme_preprocess_comment(&$variables, $hook) {
  $variables['content']['links']['#attributes']['class'][] = 'comment-links';

  // Push the reporting link to the end.
  if (!empty($variables['content']['links']['flag']['#links']['flag-inappropriate_comment'])) {
    $variables['content']['report_link'] = array('#markup' => $variables['content']['links']['flag']['#links']['flag-inappropriate_comment']['title']);
    $variables['content']['links']['flag']['#links']['flag-inappropriate_comment']['#access'] = FALSE;
  }
}

/**
 * Implements hook_preprocess_privatemsg_view().
 */
function sociale_platforme_preprocess_privatemsg_view(&$variables, $hook) {
  // Make the template conform with Drupal standard attributes.
  if (isset($variables['message_classes'])) {
    $variables['classes_array'] = array_merge($variables['classes_array'], $variables['message_classes']);
  }
  $variables['classes_array'][] = 'clearfix';
  $variables['attributes_array']['id'] = 'privatemsg-mid-' . $variables['mid'];
  $variables['content_attributes_array']['class'][] = 'privatemsg-message-content';

  // Add a distinct class to the "Delete" action.
  if (isset($variables['message_links']['#links'])) {
    foreach ($variables['message_links']['#links'] as &$link) {
      // Due to the lack of a proper key-baed identifier, a string search is the
      // only flexible way to sniff out the link.
      if (strpos($link['href'], 'delete')) {
        $link['attributes']['class'][] = 'message-delete';
      }
    }
  }
}

/**
 * Implements hook_privatemsg_message_view_alter().
 */
function sociale_platforme_privatemsg_message_view_alter(&$elements) {
  if (isset($elements['message_actions'])) {
    // Move the message links into a different variable and make it a renderable
    // array. Privatemsg has the links hardcoded, so this is the only way to
    // gain control and prevent extra processing.
    $elements['message_links'] = array(
      '#theme' => 'links__privatemsg_message',
      '#links' => $elements['message_actions'],
      '#attributes' => array(
        'class' => array('privatemsg-message-links', 'links'),
      ),
    );
    unset($elements['message_actions']);
  }
}

/**
 * Implements hook_privatemsg_view_alter().
 */
function sociale_platforme_privatemsg_view_alter(&$elements) {
  // Wrap the message view and reply form in a commons pod.
  $elements['#theme_wrappers'][] = 'container';
  $elements['#attributes']['class'][] = 'privatemsg-conversation';
  $elements['#attributes']['class'][] = 'commons-pod';

  // Knock the reply form title down an h-level.
  if (isset($elements['reply']['reply']['#markup'])) {
    $elements['reply']['reply']['#markup'] = str_replace('h2', 'h3', $elements['reply']['reply']['#markup']);
  }

  // Apply classes to the form actions and make sure the submit comes first.
  if (isset($elements['reply']['actions']['submit'])) {
    $elements['reply']['actions']['submit']['#attributes']['class'][] = 'action-item-primary';
    $elements['reply']['actions']['submit']['#weight'] = 0;
  }
  if (isset($elements['reply']['actions']['cancel'])) {
    $elements['reply']['actions']['cancel']['#attributes']['class'][] = 'action-item';
    $elements['reply']['actions']['cancel']['#weight'] = 1;
  }
}

/**
 * Shows a groups of blocks for starting a search from a filter.
 */
function sociale_platforme_apachesolr_search_browse_blocks($vars) {
  $result = '';
  if ($vars['content']['#children']) {
    $result .= '<div class="apachesolr-browse-blocks">' . "\n";
    $result .= '  <h2 class="search-results-title">' . t('Browse available categories') . '</h2>' . "\n";
    $result .= '  <div class="commons-pod">' . "\n";
    $result .= '    <p>' . t('Pick a category to launch a search.') . '</p>' . "\n";
    $result .= $vars['content']['#children'] . "\n";
    $result .= '  </div>' . "\n";
    $result .= '</div>';
  }

  return $result;
}

/**
 * Implements hook_commons_utility_links_alter().
 */
function sociale_platforme_commons_utility_links_alter(&$element) {
  // Add wrappers to title elements in notification links so that they can be
  // replaced with an icon.
  $iconify = array(
    'unread-invitations',
    'unread-messages',
    'no-unread-messages',
  );
  foreach ($iconify as $name) {
    if (isset($element[$name])) {
      $words = explode(' ', $element[$name]['title']);
      foreach ($words as &$word) {
        if (is_numeric($word)) {
          $word = '<span class="notification-count">' . $word . '</span>';
        }
        else {
          $word = '<span class="notification-label element-invisible">' . $word . '</span>';
        }
      }
      $element[$name]['title'] = implode(' ', $words);
      $element[$name]['html'] = TRUE;
    }
  }
}

/**
 * Implements hook_preprocess_media_oembed().
 */
function sociale_platforme_preprocess_media_oembed(&$variables) {
  $content = $variables['content'];
  $type = $variables['type'];

  // Video and rich type must have HTML content.
  // Wrap the HTML content in a <div> to allow it to be made responsive.
  if (in_array($type, array('video', 'rich'))) {
    $variables['content'] = '<div class="oembed">' . $content . '</div>';
  }
}

/**
 * Implements hook_preprocess_search_result().
 */
function sociale_platforme_preprocess_search_result(&$variables, $hook) {
  $variables['title_attributes_array']['class'][] = 'title';
  $variables['title_attributes_array']['class'][] = 'search-result-title';
  $variables['content_attributes_array']['class'][] = 'search-result-content';
}

/**
 * Implements hook_preprocess_search_results().
 *
 * Assemble attributes for styling that core does not do so we can keep the
 * tpl files simpler and make maintaining it a bit less worrisome since there
 * are 2 forms of search supported.
 */
function sociale_platforme_preprocess_search_results(&$variables, $hook) {
  $variables['classes_array'][] = 'search-results-wrapper';
  $variables['title_attributes_array']['class'][] = 'search-results-title';
  $variables['content_attributes_array']['class'][] = 'search-results-content';
  $variables['content_attributes_array']['class'][] = 'commons-pod';
}

/**
 * Implements hook_process_search_results().
 */
function sociale_platforme_process_search_results(&$variables, $hook) {
  // Set the title in preprocess so that it can be overridden by modules
  // further upstream.
  if (empty($variables['title'])) {
    $variables['title'] = t('Search results');
  }
}
