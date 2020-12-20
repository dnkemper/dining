<?php
/**
 * @file
 * uhd_wysiwyg.features.inc
 */

/**
 * Implements hook_filter_default_formats_alter().
 */
function uhd_wysiwyg_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][10] = 'col*'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][4] = 'container*'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][6] = 'layout*'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][8] = 'row*'; /* WAS: '' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function uhd_wysiwyg_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['settings']['buttons']['layoutmanager'] = array(
      'AddLayout' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['full_html'])) {
    $data['full_html']['settings']['buttons']['layoutmanager'] = array(
      'AddLayout' => 1,
    ); /* WAS: '' */
  }
}
