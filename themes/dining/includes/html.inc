<?php
/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements hook_preprocess_html().
 */
function dining_preprocess_html(&$vars) {
  // Include typkit assets.
  $typekit_id = 'fbq7djj';
  if (!empty($typekit_id)) {
    drupal_add_js('https://use.typekit.net/' . $typekit_id . '.js');
    drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline'));
  }

  // Setup IE meta tag to force IE rendering mode.
  $meta_ie_render_engine = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'IE=edge,chrome=1',
      'http-equiv' => 'X-UA-Compatible',
    ),
  );
  // Add header meta tag for IE to head.
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');
}
