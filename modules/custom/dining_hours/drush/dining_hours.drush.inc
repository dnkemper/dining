<?php
/**
 * @file
 * Drush include file.
 */

/**
 * Implements hook_drush_cache_clear().
 */
function dining_hours_drush_cache_clear(&$types) {
  $types['dining-hours'] = 'dining_hours_invalidate_cache';
}
