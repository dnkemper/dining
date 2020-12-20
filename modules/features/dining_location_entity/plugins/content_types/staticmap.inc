<?php
/**
 * @file
 * Ctools content type plugin file for signage panes module.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Static Location Map'),
  'description' => t('Creates a callout for dining locations.'),
  'category' => t('Locations'),
  'all contexts' => TRUE,
  'edit form' => 'staticmap_edit_form',
  'render callback' => 'staticmap_render',
  'admin info' => 'staticmap_admin_info',
);


/**
 * The 'admin info' callback for panel pane.
 */
function staticmap_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Showing locations.');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function staticmap_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function staticmap_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Run-time rendering of the body of the block (content type).
 *
 * See ctools_plugin_examples for more advanced info.
 */
function staticmap_render($subtype, $conf, $panel_args, $context = NULL) {
  $path = drupal_get_path('module', 'dining_location_entity');

  $block = new stdClass();

  $block->title = t('Where to Eat');

  $block->content = array(
    'map' => array(
      '#theme' => 'staticmap',
    ),
    'pattern' => array(
      '#markup' => '<div class="pos-abs pattern-overlay opacity-2"></div>',
    ),
    'wrapper' => array(
      '#type' => 'container',
        '#attributes' => array(
          'class' => array('staticmap-title-wrapper'),
        ),
      'wrapper' => array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => array('container'),
        ),
        'title' => array(
          '#prefix' => '<h2 class="title title-bold">',
          '#markup' => 'Where to Eat',
          '#suffix' => '</h2>',
        ),
        'description' => array(
          '#prefix' => '<p class="description sub-head">',
          '#markup' => t('Check out our C-Stores, Cafes and Market Places.'),
          '#suffix' => '</p>',
        ),
        'calltoaction' => array(
          '#type' => 'link',
          '#title' => 'View locations',
          '#href' => 'locations',
          '#attributes' => array('class' => array('btn-default')),
        ),
      ),
    ),
  );

  return $block;
}
