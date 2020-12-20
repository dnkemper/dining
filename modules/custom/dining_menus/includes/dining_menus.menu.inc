<?php

/**
 * @file
 * Dining Menus menu theme functions.
 */

function dining_menus_preprocess_dining_menus_menu(&$variables) {
  foreach ($variables['menu_data'] as $meal => $stations) {
    $tab = array(
      'name' => $meal,
      'id' => drupal_clean_css_identifier($meal),
    );

    if (empty($stations)) {
      $tab['disabled'] = TRUE;

      $station_render = array(
        '#type' => 'markup',
        '#markup' => '<p class="alert alert-warning">No menu data for this meal.</p>',
      );
    }
    else {
      $station_render = array();

      foreach ($stations as $name => $courses) {
        $weight = _dining_menus_get_station_weight($name);

        $station_render[] = array(
          '#theme' => 'dining_menus_station',
          '#courses' => $courses,
          '#name' => $name,
          '#weight' => $weight
        );
      }

      usort($station_render, function ($a, $b) {
        return $a['#weight'] <=> $b['#weight'];
      });
    }

    $variables['tabs'][] = $tab;

    $variables['tabs_content'][] = array(
      'id' => drupal_clean_css_identifier($meal),
      'stations' => $station_render,
    );
  }
}

/**
 * Get arbitrary station weight for sorting as per UHD request.
 *
 * @param string $station
 *
 * @return int $weight
 */
function _dining_menus_get_station_weight($station) {
  $weight = 0;

  switch ($station) {
    case 'Catlett Sprouts':
    case 'Hillcrest Field of Greens':
      $weight = 100;
      break;

    case 'Catlett Sunny Side':
    case 'Hillcrest Golden Harvest':
      $weight = 200;
      break;

    case 'Catlett Family Table':
    case 'Hillcrest Piazza Cafe':
      $weight = 300;
      break;

    case 'Catlett Za!':
    case 'Hillcrest Corner Wok':
      $weight = 400;
      break;

    case 'Catlett Flavors Abroad':
    case 'Hillcrest Grand Ave Grill':
      $weight = 500;
      break;

    case 'Catlett Fire Up':
    case 'Hillcrest Desserts':
      $weight = 600;
      break;

    case 'Catlett Delights':
    case 'Hillcrest Cafe Rio Grande':
      $weight = 700;
      break;

    case 'Hillcrest Drinks/Condiments ':
      $weight = 800;

    case 'Catlett Grubhub':
    case 'Hillcreset Grubhub':
      $weight = 900;
      break;

  }

  return $weight;
}
