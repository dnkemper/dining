<?php
/**
 * @file
 * Theme and preprocess functions for nodes.
 */
function dining_preprocess_node(&$vars) {
  // Add theme hook suggestion for view mode.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];

  $vars['classes_array'][] = 'node--' . $vars['type'] . '--' . $vars['view_mode'];

  // Add node-title to header.
  $vars['title_attributes_array']['class'][] = 'node-title';

  switch ($vars['type']) {
    case 'location':
      if ($vars['view_mode'] == 'full') {
        // Hide field_location_header_image. We print these in page.tpl.php.
        hide($vars['content']['field_location_header_image']);
      }
      if ($vars['view_mode'] == 'teaser') {
        $vars['title_attributes_array']['class'] = array('panel-title');
        $vars['classes_array'][] = 'paragraphs-item-snp-card';
        $vars['classes_array'][] = 'panel';
        $vars['classes_array'][] = 'panel-default';

        if (!empty($vars['field_location_header_image'])) {

          $markup = array(
            '#type' => 'container',
            '#attributes' => array(
              'class' => 'location-teaser-image',
            ),
            'image' => array(
              '#theme' => 'image_formatter',
              '#item' => array(
                'uri' => $vars['field_location_header_image'][0]['uri'],
                'alt' => $vars['field_location_header_image'][0]['alt'],
                'title' => $vars['field_location_header_image'][0]['title'],
              ),
              '#image_style' => 'snp_card_grid',
            ),
          );

          $vars['content']['field_location_header_image'] = $markup;
        }
      }
      break;

    case 'person':
      if ($vars['view_mode'] == 'teaser') {
        $vars['classes_array'][] = 'panel';
        $vars['classes_array'][] = 'panel-default';
        hide($vars['content']['links']['node']);
      }
      break;

    case 'webform':
      if ($vars['nid'] == '17171') {
        $date_form = drupal_get_form('dining_hours_location_form', 'RES-HSG-Dietitian', 'dietitian', 'l, F j', TRUE, '17171');

        $vars['content'][] = array(
          '#markup' => t('<h2>Dietitian Availability</h2>'),
        );

        $vars['content'][] = $date_form;

        $vars['content']['#attached'] = array(
          'js' => array(
            array(
              'data' => array(
                'diningHours' => array(
                  'dietician' => array(
                    'todaysHours' => NULL,
                    'nextOpenDay' => NULL,
                  ),
                ),
              ),
              'type' => 'setting',
            ),
          ),
        );
      }

      break;
  }
}
