<?php
/**
 * @file
 * Theme and preprocess functions for views
 */

function dining_preprocess_views_view(&$variables) {
  $header_classes[] = 'view-header';
  $filter_classes[] = 'view-filters';
  $attachment_before_classes[] = 'attachment';
  $attachment_before_classes[] = 'attachment-before';
  $content_classes[] = 'view-content';
  $empty_classes[] = 'view-empty';
  $attachment_after_classes[] = 'attachment';
  $attachment_after_classes[] = 'attachment-after';
  $footer_classes[] = 'view-footer';
  $feed_icon_classes[] = 'feed-icon';

  if ($variables['view']->name == 'locations') {
    // Load Mapbox external JS.
    drupal_add_js('https://api.mapbox.com/mapbox-gl-js/v1.4.1/mapbox-gl.js', 'external');
    drupal_add_css('https://api.mapbox.com/mapbox-gl-js/v1.4.1/mapbox-gl.css', 'external');

    // Get all published locations.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
      ->entityCondition("bundle", "location")
      ->propertyCondition("status", 1);
    $results = $query->execute();

    if (isset($results['node'])) {
      $keys = array_keys($results['node']);
      $locations = node_load_multiple($keys);
      $markers = array();
      // Prepare markers array.
      foreach ($locations as $location) {
        if (!empty($location->field_location_coordinates)) {
          $markers['node_' . $location->nid] = array(
            'lat' => $location->field_location_coordinates[LANGUAGE_NONE][0]['lat'],
            'lon' => $location->field_location_coordinates[LANGUAGE_NONE][0]['lon'],
            'links' => array(
              l($location->title, '/node/' . $location->nid),
            ),
            'title' => $location->title,
          );
        }
      }
      // Initialize geojson data.
      $geojson = (object) array(
        'type' => 'FeatureCollection',
        'features' => array(),
      );
      foreach ($markers as $marker) {
        $geojson->features[] = (object) array(
          'type' => 'Feature',
          'geometry' => (object) array(
            'type' => 'Point',
            'coordinates' => array(
              $marker['lon'],
              $marker['lat'],
            ),
          ),
          'properties' => (object) array(
            'links' => render($links),
            'title' => $marker['links'][0],
          ),
        );
      }
      // Add drupal.settings.
      $settings = array(
        'locationMapSettings' => array(
          'geojson' => $geojson,
          'token' => variable_get('mapbox_token'),
        ),
      );
      // Add settings to drupal.settings.
      drupal_add_js(array('dining' => $settings), 'setting');

      $variables['map'] = array(
        '#type' => 'container',
        '#attributes' => array(
          'id' => 'locationMap',
          'style' => 'height: 300px;',
        ),
        '#attached' => array(
          'js' => array(
            drupal_get_path('theme', 'dining') . '/js/locationMap.behavior.js',
          ),
        ),
      );
    }
  }

  // Flatten the classes to a string for the template file.
  $variables['header_classes'] = implode(' ', $header_classes);
  $variables['filter_classes'] = implode(' ', $filter_classes);
  $variables['attachment_before_classes'] = implode(' ', $attachment_before_classes);
  $variables['content_classes'] = implode(' ', $content_classes);
  $variables['empty_classes'] = implode(' ', $empty_classes);
  $variables['attachment_after_classes'] = implode(' ', $attachment_after_classes);
  $variables['footer_classes'] = implode(' ', $footer_classes);
  $variables['feed_icon_classes'] = implode(' ', $feed_icon_classes);
}
