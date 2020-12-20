<?php

/**
 * @file
 * dining_location_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dining_location_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dining_locations_api_main';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Locations: API - Main';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'XML Articles Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'locations';
  $handler->display->display_options['style_options']['top_child_object'] = 'location';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'site';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Dining';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_location_type']['id'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['fields']['field_location_type']['field'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['label'] = 'type';
  $handler->display->display_options['fields']['field_location_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_location_building']['id'] = 'field_location_building';
  $handler->display->display_options['fields']['field_location_building']['table'] = 'field_data_field_location_building';
  $handler->display->display_options['fields']['field_location_building']['field'] = 'field_location_building';
  $handler->display->display_options['fields']['field_location_building']['label'] = 'building';
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_location_telephone']['id'] = 'field_location_telephone';
  $handler->display->display_options['fields']['field_location_telephone']['table'] = 'field_data_field_location_telephone';
  $handler->display->display_options['fields']['field_location_telephone']['field'] = 'field_location_telephone';
  $handler->display->display_options['fields']['field_location_telephone']['label'] = 'telephone';
  $handler->display->display_options['fields']['field_location_telephone']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_location_telephone']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_location_telephone']['settings'] = array(
    'title' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_location_image']['id'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['table'] = 'field_data_field_location_image';
  $handler->display->display_options['fields']['field_location_image']['field'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['label'] = 'image';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Flex Swipes */
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['id'] = 'field_location_has_meal_swipes';
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['table'] = 'field_data_field_location_has_meal_swipes';
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['field'] = 'field_location_has_meal_swipes';
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['label'] = 'meal_swipes';
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Coordinates */
  $handler->display->display_options['fields']['field_location_coordinates']['id'] = 'field_location_coordinates';
  $handler->display->display_options['fields']['field_location_coordinates']['table'] = 'field_data_field_location_coordinates';
  $handler->display->display_options['fields']['field_location_coordinates']['field'] = 'field_location_coordinates';
  $handler->display->display_options['fields']['field_location_coordinates']['label'] = 'coordinates';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );

  /* Display: XML (Main) */
  $handler = $view->new_display('page', 'XML (Main)', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_xml_style';
  $handler->display->display_options['style_options']['root_element'] = 'locations';
  $handler->display->display_options['style_options']['top_child_object'] = 'location';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['escape_as_CDATA'] = 'yes';
  $handler->display->display_options['style_options']['header'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'site';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Dining';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_location_type']['id'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['fields']['field_location_type']['field'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['label'] = 'type';
  $handler->display->display_options['fields']['field_location_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_location_building']['id'] = 'field_location_building';
  $handler->display->display_options['fields']['field_location_building']['table'] = 'field_data_field_location_building';
  $handler->display->display_options['fields']['field_location_building']['field'] = 'field_location_building';
  $handler->display->display_options['fields']['field_location_building']['label'] = 'building';
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_location_telephone']['id'] = 'field_location_telephone';
  $handler->display->display_options['fields']['field_location_telephone']['table'] = 'field_data_field_location_telephone';
  $handler->display->display_options['fields']['field_location_telephone']['field'] = 'field_location_telephone';
  $handler->display->display_options['fields']['field_location_telephone']['label'] = 'telephone';
  $handler->display->display_options['fields']['field_location_telephone']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_location_telephone']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_location_telephone']['settings'] = array(
    'title' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_location_image']['id'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['table'] = 'field_data_field_location_image';
  $handler->display->display_options['fields']['field_location_image']['field'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['label'] = 'image';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Flex Swipes */
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['id'] = 'field_location_has_meal_swipes';
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['table'] = 'field_data_field_location_has_meal_swipes';
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['field'] = 'field_location_has_meal_swipes';
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['label'] = 'meal_swipes';
  $handler->display->display_options['fields']['field_location_has_meal_swipes']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Coordinates */
  $handler->display->display_options['fields']['field_location_coordinates']['id'] = 'field_location_coordinates';
  $handler->display->display_options['fields']['field_location_coordinates']['table'] = 'field_data_field_location_coordinates';
  $handler->display->display_options['fields']['field_location_coordinates']['field'] = 'field_location_coordinates';
  $handler->display->display_options['fields']['field_location_coordinates']['label'] = 'coordinates';
  $handler->display->display_options['path'] = 'api/v1/xml/locations';

  /* Display: JSON (Main) */
  $handler = $view->new_display('page', 'JSON (Main)', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'JSON Articles Feed';
  $handler->display->display_options['path'] = 'api/v1/json/locations';
  $export['dining_locations_api_main'] = $view;

  $view = new view();
  $view->name = 'locations';
  $view->description = 'Views configuration for locations.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_location_type_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '0';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>There are no UI dining locations close to you.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );
  /* Filter criterion: Content: Type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_tid']['id'] = 'field_location_type_tid';
  $handler->display->display_options['filters']['field_location_type_tid']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_tid']['field'] = 'field_location_type_tid';
  $handler->display->display_options['filters']['field_location_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_type_tid']['expose']['operator_id'] = 'field_location_type_tid_op';
  $handler->display->display_options['filters']['field_location_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_location_type_tid']['expose']['operator'] = 'field_location_type_tid_op';
  $handler->display->display_options['filters']['field_location_type_tid']['expose']['identifier'] = 'field_location_type_tid';
  $handler->display->display_options['filters']['field_location_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_location_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_type_tid']['vocabulary'] = 'location_type';

  /* Display: Locations Block */
  $handler = $view->new_display('block', 'Locations Block', 'locations_block');
  $handler->display->display_options['display_description'] = 'With exposed filters.';
  $export['locations'] = $view;

  return $export;
}
