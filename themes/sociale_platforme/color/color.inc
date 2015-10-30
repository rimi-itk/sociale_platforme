<?php

/**
 * @file
 * PART 1. Basic Color module settings.
 */

$info = array();

// Define the possible replaceable items and their labels.
$info['fields'] = array(
  'bg' => t('Main background'),
  'primary' => t('Primary'),
  'secondary' => t('Secondary'),
  'buttontop' => t('Button top'),
  'buttonbtm' => t('Button bottom'),
);

// Color schemes for the site.
$info['schemes'] = array(
  // Define the default scheme.
  'default' => array(
// Green
    // Scheme title.
    'title' => t('Default'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'primary' => '#8cb385',
      'secondary' => '#5e7f58',
      'bg' => '#e8e8e3',
      'buttontop' => '#90b889',
      'buttonbtm' => '#789a72',
    ),
  ),
  'red' => array(
    // Scheme title.
    'title' => t('Red'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'primary' => '#c84f45',
      'secondary' => '#6b2b25',
      'bg' => '#e8e4e3',
      'buttontop' => '#c95147',
      'buttonbtm' => '#ad473f',
    ),
  ),
  'blue' => array(
    // Scheme title.
    'title' => t('Blue'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'primary' => '#2980B9',
      'secondary' => '#1d5a81',
      'bg' => '#e8e4e3',
      'buttontop' => '#2980b9',
      'buttonbtm' => '#236d9d',
    ),
  ),
  // http://www.0to255.com/5E0042
  'purple' => array(
    // Scheme title.
    'title' => t('Purple'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'primary' => '#5E0042',
      'secondary' => '#1a0012',
      'bg' => '#e8e4e3',
      'buttontop' => '#5E0042',
      'buttonbtm' => '#3c002a',
    ),
  ),
  // http://www.0to255.com/FD7400
  'orange' => array(
    // Scheme title.
    'title' => t('Orange'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'primary' => '#FD7400',
      'secondary' => '#b95500',
      'bg' => '#e8e4e3',
      'buttontop' => '#FD7400',
      'buttonbtm' => '#db6400',
    ),
  ),
  // http://www.0to255.com/22beaa
  'turquoise' => array(
    // Scheme title.
    'title' => t('Turquoise'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'primary' => '#22BEAA',
      'secondary' => '#188476',
      'bg' => '#e8e4e3',
      'buttontop' => '#22BEAA',
      'buttonbtm' => '#1da190',
    ),
  ),
);

// Define the CSS file(s) that we want the Color module to use as a base.
$info['css'] = array(
  'css/colors.css',
);

/***** Advanced Color settings - Defaults. Will be used in the Part 2. *****/

/**
 * Default settings for the advanced stuff.
 * No need to edit these if you just want to play around with the colors.
 * Color wants these, otherwise it's not going to play.
 *
 * We dive deeper into these in the Part 2. Advanced Color settings.
 */

// Files we want to copy along with the CSS files, let's define these later.
$info['copy'] = array();

// Files used in the scheme preview.
$info['preview_css'] = 'color/preview.css';
$info['preview_js'] = 'color/preview.js';
$info['preview_html'] = 'color/preview.html';

// Gradients.
$info['gradients'] = array();

// Color areas to fill (x, y, width, height).
$info['fill'] = array();

// Coordinates of all the theme slices (x, y, width, height)
// with their filename as used in the stylesheet.
$info['slices'] = array();

// Base file for image generation.
$info['base_image'] = 'color/base.png';
