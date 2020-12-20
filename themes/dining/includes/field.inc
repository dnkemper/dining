<?php
/**
 * @file
 * Theme and preprocess functions for fields.
 */

function dining_preprocess_field(&$vars) {
  $vars['content_attributes_array']['class'][] = 'field-items';

  switch ($vars['element']['#field_name']) {
    case 'field_location_has_meal_swipes':
      if ($vars['element']['#items'][0]['value'] == '1') {
        if ($vars['element']['#view_mode'] == 'teaser') {
          $vars['items'][0]['#markup'] = 'Flex swipes are accepted here.';
        }
        else {
          $vars['items'][0]['#markup'] = 'Accepted';
        }
      }
      else {
        if ($vars['element']['#view_mode'] == 'teaser') {
          $vars['items'][0]['#markup'] = 'Flex swipes are <strong>not</strong> accepted here.';
        }
        else {
          $vars['items'][0]['#markup'] = 'Not accepted';
        }
      }
      break;

    case 'field_location_person_ref':
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      // Flex items.
      $vars['content_attributes_array']['class'][] = 'flex-md-3';
      break;

    case 'field_location_bongo':
      $api_key = variable_get('bongo_api_key', NULL);

      if (isset($api_key)) {
        foreach ($vars['element']['#items'] as $key => $value) {
          $id = $value['value'];

          $link = array();
          $link = array(
            '#theme' => 'link',
            '#text' => htmlspecialchars_decode($vars['items'][$key]['#markup']),
            '#path' => 'https://bongo.org/stop/' . $id,
            '#options' => array(
              'external' => TRUE,
              'attributes' => array(
                'class' => array(
                  'btn',
                  'btn-sm',
                  'btn-default',
                ),
              ),
            ),
          );

          $vars['items'][$key] = $link;
        }
      }

      break;

    case 'field_person_grid_person':
      $vars['theme_hook_suggestions'][] = 'field__flex';
      $vars['content_attributes_array']['class'][] = 'flex-sm-2';
      $vars['content_attributes_array']['class'][] = 'flex-md-4';
      break;

    case 'field_person_grid_title':
      // Zero out the markup.
      $vars['items'] = NULL;

      foreach ($vars['element']['#items'] as $item) {
        $vars['items'][] = array(
          '#prefix' => '<h2>',
          '#suffix' => '</h2>',
          '#markup' => $item['value'],
        );
      }
      break;

    case 'field_location_gallery_link':
      $vars['label'] = 'Photo Gallery';
      $vars['items'][0]['#element']['title'] = '<i class="fa fa-camera-retro" aria-hidden="true"></i>&nbsp&nbsp' . $vars['items'][0]['#element']['title'];
      break;

    case 'field_location_coordinates':
      drupal_add_css('https://api.mapbox.com/mapbox-gl-js/v1.4.1/mapbox-gl.css', 'external');

      $title = $vars['element']['#object']->title;
      $token = variable_get('mapbox_token');
      $lon = number_format($vars['element']['#items'][0]['lon'], 5);
      $lat = number_format($vars['element']['#items'][0]['lat'], 5);
      $url = "https://api.mapbox.com/styles/v1/itsweb/cjh6lku2g3h1g2rp5gvxygsi4/static/pin-s+ffcd00({$lon},{$lat})/{$lon},{$lat},16,0,0/1280x400@2x?access_token={$token}";

      // Initialize geojson data.
      $geojson = (object) array(
        'type' => 'FeatureCollection',
        'features' => array(),
      );

      $geojson->features[] = (object) array(
        'type' => 'Feature',
        'geometry' => (object) array(
          'type' => 'Point',
          'coordinates' => array(
            $lon,
            $lat,
          ),
        ),
        'properties' => (object) array(
          'title' => $title,
        ),
      );

      $settings = array(
        'locationMapSettings' => array(
          'geojson' => $geojson,
          'token' => $token,
        ),
      );

      // Add settings to drupal.settings.
      drupal_add_js(array('dining' => $settings), 'setting');

      $vars['items'][0] = array(
        '#type' => 'container',
        '#attributes' => array(
          'id' => 'locationMap',
          'role' => 'button',
        ),
        'static_map' => array(
          '#theme' => 'imagecache_external',
          '#path' => $url,
          '#alt' => 'Map',
          '#style_name' => 'snp_section_edge_to_edge',
        ),
        'overlay' => array(
          '#type' => 'container',
          '#attributes' => array(
            'class' => array('overlay'),
          ),
        ),
        'text' => array(
          '#type' => 'container',
          '#attributes' => array(
            'class' => array('overlay-text'),
          ),
          'overlay-text' => array(
            '#markup' => t('View Interactive Map'),
          ),
        ),
      );

      break;
  }
}
