<?php
/**
 * @file
 * dining_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function dining_paragraphs_paragraphs_info() {
  $items = array(
    'dining_hours' => array(
      'name' => 'Dining Hours',
      'bundle' => 'dining_hours',
      'locked' => '1',
    ),
    'dining_location' => array(
      'name' => 'Dining Location',
      'bundle' => 'dining_location',
      'locked' => '1',
    ),
    'location_card' => array(
      'name' => 'Location Card',
      'bundle' => 'location_card',
      'locked' => '1',
    ),
    'person_grid' => array(
      'name' => 'Person grid',
      'bundle' => 'person_grid',
      'locked' => '1',
    ),
    'snp_video' => array(
      'name' => 'Video',
      'bundle' => 'snp_video',
      'locked' => '1',
    ),
  );
  return $items;
}
