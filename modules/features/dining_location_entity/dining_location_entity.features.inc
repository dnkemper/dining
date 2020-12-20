<?php

/**
 * @file
 * dining_location_entity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dining_location_entity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dining_location_entity_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('Use <em>locations</em> for UI Dining-affiliated stores, cafes and marketplaces. Each location has different fields associated with it, including image, menu, contact information, etc.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('The name of the location, e.g. Burge Marketplace.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
