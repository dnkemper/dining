<?php
/**
 * @file
 * Theme and preprocess functions for regions.
 */

/**
 * Implements hook_preprocess_region().
 */
function dining_preprocess_region(&$vars) {
  // Combine #wrapper_classes with the region_classes.
  // @see page.inc
  if (isset($vars['elements']['#wrapper_classes'])) {
    $vars['classes_array'] = array_merge($vars['classes_array'], $vars['elements']['#wrapper_classes']);
  }
}
