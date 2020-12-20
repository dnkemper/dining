<?php

/**
 * @file
 * Dining Menus Station theme functions.
 */

/**
 * Theme function for rendering a single station.
 */
function theme_dining_menus_station($variables) {
  $render = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array(
        'panel',
        'panel-default',
        'marketplace-station',
        'marketplace-station-' . drupal_clean_css_identifier($variables['name']),
      ),
    ),
  );

  $render['heading'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array(
        'panel-heading',
      ),
    ),
  );

  $render['heading']['title'] = array(
    '#type' => 'html_tag',
    '#tag' => 'h2',
    '#value' => $variables['name'],
    '#attributes' => array(
      'class' => array(
        'panel-title',
      ),
    ),
  );

  // Add grubhub message to any station with that word in it.
  if (stristr($variables['name'], 'grubhub')) {
    $render['heading']['grubhub'] = [
      '#markup' => '<div class="grubhub-alert alert alert-info">This station menu is <strong>only</strong> available with <a href="https://grubhub.com">GrubHub</a> online ordering.</div>',
    ];
  }

  $menu_items = array();

  foreach ($variables['courses'] as $course => $items) {
    $key = drupal_html_id($course);

    if (!isset($menu_items[$key])) {
      $menu_items["{$key}-heading"] = array(
        '#markup' => $course,
        '#theme_wrappers' => array('container'),
        '#attributes' => array(
          'class' => array(
            'h5',
            'menu-course-title',
          ),
        ),
      );

      $menu_items[$key] = array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => 'menu-course',
        ),
        'items' => array(),
      );
    }

    foreach ($items as $item) {
      $i = array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => array(
            'menu-item',
          ),
        ),
      );

      $i['name'] = array(
        '#type' => 'html_tag',
        '#tag' => 'div',
        '#value' => $item['name'],
        '#attributes' => array(
          'class' => array(
            'h6',
            'menu-item-title',
          ),
        ),
      );

      if (!empty($item['traits'])) {
        $i['traits'] = array(
          '#type' => 'container',
          '#attributes' => array(
            'class' => array(
              'menu-item-traits',
            ),
          ),
        );

        foreach ($item['traits'] as $trait) {
          $query = new EntityFieldQuery();
          $query->entityCondition('entity_type', 'taxonomy_term')
            ->entityCondition('bundle', 'allergy_and_nutrition')
            ->propertyCondition('name', $trait);

          $result = $query->execute();

          if (isset($result['taxonomy_term'])) {
            $tids = array_keys($result['taxonomy_term']);
            $terms = entity_load('taxonomy_term', $tids);

            foreach ($terms as $term) {
              $i['traits'][] = entity_view('taxonomy_term', array($term), 'list');
            }
          }
        }
      }

      $menu_items[$key]['items'][] = $i;
    }
  }

  $render['body'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array(
        'panel-body',
      ),
    ),
    'data' => array(
      '#markup' => render($menu_items),
    ),
  );

  return render($render);
}
