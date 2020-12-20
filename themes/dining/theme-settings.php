<?php
/**
 * @file
 * Theme settings.
 */

/**
 * Implements theme_settings().
 */
function dining_form_system_theme_settings_alter(&$form, &$form_state) {
  // Ensure this include file is loaded when the form is rebuilt from the cache.
  $form_state['build_info']['files']['form'] = drupal_get_path('theme', 'dining') . '/theme-settings.php';

  // Add theme settings here.
  $form['dining_theme_settings'] = array(
    '#title' => t('Theme Settings'),
    '#type' => 'fieldset',
  );

  // Return the additional form widgets.
  return $form;
}
