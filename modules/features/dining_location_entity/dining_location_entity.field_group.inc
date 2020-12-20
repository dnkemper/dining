<?php

/**
 * @file
 * dining_location_entity.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dining_location_entity_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_1|node|location|default';
  $field_group->group_name = 'group_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Main',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_location_coordinates',
      2 => 'field_location_person_ref',
      3 => 'location_menu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-1 field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_col_1|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_1|node|location|form';
  $field_group->group_name = 'group_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column Main',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_location_header_image',
      2 => 'field_location_hours_key',
      3 => 'field_location_person_ref',
      4 => 'title',
      5 => 'group_location_getting_around',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_col_1|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_1|node|location|full';
  $field_group->group_name = 'group_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Main',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_location_person_ref',
      2 => 'location_getting_around_bongo',
      3 => 'location_menu',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-1 field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_1|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_1|node|location|teaser';
  $field_group->group_name = 'group_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Main',
    'weight' => '22',
    'children' => array(
      0 => 'field_location_has_meal_swipes',
      1 => 'field_location_header_image',
      2 => 'field_location_building',
      3 => 'dining_hours_status_indicator',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-1 field-group-div col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_1|node|location|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_2|node|location|default';
  $field_group->group_name = 'group_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Sidebar',
    'weight' => '9',
    'children' => array(
      0 => 'field_location_has_meal_swipes',
      1 => 'field_location_building',
      2 => 'field_location_telephone',
      3 => 'field_location_hours_key',
      4 => 'location_involved',
      5 => 'location_social_media',
      6 => 'location_touch',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-2 field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_2|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_2|node|location|form';
  $field_group->group_name = 'group_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column Sidebar',
    'weight' => '1',
    'children' => array(
      0 => 'field_location_type',
      1 => 'field_location_has_meal_swipes',
      2 => 'field_location_building',
      3 => 'field_location_telephone',
      4 => 'field_location_address',
      5 => 'field_location_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_col_2|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_2|node|location|full';
  $field_group->group_name = 'group_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Sidebar',
    'weight' => '7',
    'children' => array(
      0 => 'field_location_type',
      1 => 'field_location_has_meal_swipes',
      2 => 'field_location_building',
      3 => 'field_location_telephone',
      4 => 'field_location_hours_key',
      5 => 'field_location_address',
      6 => 'field_location_gallery',
      7 => 'location_involved',
      8 => 'location_social_media',
      9 => 'location_touch',
      10 => 'location_allergen_legend',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-2 field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_2|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|location|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_loc_overview';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '8',
    'children' => array(
      0 => 'field_location_telephone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container_1|node|location|default';
  $field_group->group_name = 'group_container_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'field_location_header_image',
      1 => 'group_row_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container-1 field-group-div container-smooth',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container_1|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container_1|node|location|form';
  $field_group->group_name = 'group_container_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'field_location_header_image',
      1 => 'group_row_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-container-1 field-group-div container-smooth',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container_1|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container_1|node|location|full';
  $field_group->group_name = 'group_container_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'field_location_header_image',
      1 => 'group_row_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container-1 field-group-div container-smooth',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container_1|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container_1|node|location|teaser';
  $field_group->group_name = 'group_container_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'group_row_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container-1 field-group-div container-smooth',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container_1|node|location|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hours|node|location|full';
  $field_group->group_name = 'group_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Hours',
    'weight' => '11',
    'children' => array(
      0 => 'field_location_hours_key',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Hours',
      'instance_settings' => array(
        'classes' => 'group-hours field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hours|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loc_menu|node|location|default';
  $field_group->group_name = 'group_loc_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Todays Menu',
    'weight' => '12',
    'children' => array(
      0 => 'field_location_callout_link',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Todays Menu',
      'instance_settings' => array(
        'classes' => 'group-loc-menu field-group-bootstrap_fieldgroup_nav_item',
      ),
    ),
  );
  $field_groups['group_loc_menu|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loc_overview|node|location|default';
  $field_group->group_name = 'group_loc_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-loc-overview field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_loc_overview|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_callout|node|location|form';
  $field_group->group_name = 'group_location_callout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Callout',
    'weight' => '21',
    'children' => array(
      0 => 'field_location_callout_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location-callout field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_callout|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_contact|node|location|form';
  $field_group->group_name = 'group_location_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_location_fields';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '19',
    'children' => array(
      0 => 'field_location_building',
      1 => 'field_location_telephone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_contact|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_fields|node|location|form';
  $field_group->group_name = 'group_location_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '5',
    'children' => array(
      0 => 'group_location_callout',
      1 => 'group_location_contact',
      2 => 'group_location_hours',
      3 => 'group_location_images',
      4 => 'group_location_promo',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-location-fields field-group-tabs',
      ),
    ),
  );
  $field_groups['group_location_fields|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_general|node|location|form';
  $field_group->group_name = 'group_location_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '3',
    'children' => array(
      0 => 'field_location_image',
      1 => 'field_location_flickr_set',
      2 => 'field_location_hours_changes',
      3 => 'field_location_promo_reference',
      4 => 'path',
      5 => 'rabbit_hole',
      6 => 'redirect',
      7 => 'xmlsitemap',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_location_general|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_getting_around|node|location|default';
  $field_group->group_name = 'group_location_getting_around';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Around',
    'weight' => '1',
    'children' => array(
      0 => 'field_location_getting_around',
      1 => 'field_location_bongo',
      2 => 'field_location_map',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Getting Around',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-location-getting-around field-group-fieldset col-md-8',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_location_getting_around|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_getting_around|node|location|form';
  $field_group->group_name = 'group_location_getting_around';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Getting Around',
    'weight' => '12',
    'children' => array(
      0 => 'field_location_coordinates',
      1 => 'field_location_bongo',
      2 => 'field_location_getting_around',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_getting_around|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_getting_around|node|location|full';
  $field_group->group_name = 'group_location_getting_around';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container_1';
  $field_group->data = array(
    'label' => 'Getting Around',
    'weight' => '8',
    'children' => array(
      0 => 'field_location_getting_around',
      1 => 'field_location_map',
      2 => 'field_location_bongo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Getting Around',
      'instance_settings' => array(
        'classes' => 'col-md-12 group-location-getting-around field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_location_getting_around|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_hours|node|location|default';
  $field_group->group_name = 'group_location_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Hours',
    'weight' => '9',
    'children' => array(
      0 => 'field_location_hours_key',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-hours field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_location_hours|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_hours|node|location|form';
  $field_group->group_name = 'group_location_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Hours',
    'weight' => '19',
    'children' => array(
      0 => 'field_location_hours_key',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-hours field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_location_hours|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_hours|node|location|full';
  $field_group->group_name = 'group_location_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Hours',
    'weight' => '8',
    'children' => array(
      0 => 'field_location_hours_key',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_location_hours|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_images|node|location|form';
  $field_group->group_name = 'group_location_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_location_fields';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '18',
    'children' => array(
      0 => 'field_location_image',
      1 => 'field_location_header_image',
      2 => 'field_location_flickr_set',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_images|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_integrations|node|location|form';
  $field_group->group_name = 'group_location_integrations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_location_fields';
  $field_group->data = array(
    'label' => 'Integrations',
    'weight' => '23',
    'children' => array(
      0 => 'field_location_open_menu_key',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-integrations field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_integrations|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_meet_us|node|location|default';
  $field_group->group_name = 'group_location_meet_us';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Meet Us',
    'weight' => '9',
    'children' => array(
      0 => 'field_location_person_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Meet Us',
      'instance_settings' => array(
        'classes' => 'group-location-meet-us field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_location_meet_us|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_meet_us|node|location|form';
  $field_group->group_name = 'group_location_meet_us';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Meet Us',
    'weight' => '9',
    'children' => array(
      0 => 'field_location_person_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Meet Us',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-person-meet-us field-group-div',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_location_meet_us|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_meet_us|node|location|full';
  $field_group->group_name = 'group_location_meet_us';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Meet Us',
    'weight' => '12',
    'children' => array(
      0 => 'field_location_person_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Meet Us',
      'instance_settings' => array(
        'classes' => 'group-location-meet-us field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_location_meet_us|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_menu|node|location|full';
  $field_group->group_name = 'group_location_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Menu',
    'weight' => '13',
    'children' => array(
      0 => 'field_dining_menu',
      1 => 'field_nutrition_and_allergy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Menu',
      'instance_settings' => array(
        'classes' => 'group-location-menu',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_location_menu|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_nutrition|node|location|form';
  $field_group->group_name = 'group_location_nutrition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_col_1';
  $field_group->data = array(
    'label' => 'Dining Menu',
    'weight' => '7',
    'children' => array(
      0 => 'field_dining_menu',
      1 => 'field_nutrition_and_allergy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dining Menu',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_location_nutrition|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_promo|node|location|form';
  $field_group->group_name = 'group_location_promo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_location_fields';
  $field_group->data = array(
    'label' => 'Promotion',
    'weight' => '22',
    'children' => array(
      0 => 'field_location_promo_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-promo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_promo|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loc|node|location|default';
  $field_group->group_name = 'group_loc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'group_loc_menu',
      1 => 'group_loc_overview',
      2 => 'group_loc_retail_menu',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'bootstrap_nav_type' => 'pills',
        'bootstrap_stacked' => '0',
        'bootstrap_orientation' => '0',
        'classes' => 'group-loc field-group-bootstrap_fieldgroup_nav',
      ),
    ),
  );
  $field_groups['group_loc|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nutrition_menu|node|location|default';
  $field_group->group_name = 'group_nutrition_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nutrition Menu',
    'weight' => '1',
    'children' => array(
      0 => 'field_dining_menu',
      1 => 'field_nutrition_and_allergy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Nutrition Menu',
      'instance_settings' => array(
        'id' => 'today_block',
        'classes' => 'group-nutrition-menu field-group-fieldset col-md-4',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_nutrition_menu|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_body|node|person|full';
  $field_group->group_name = 'group_panel_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_person_meet_us';
  $field_group->data = array(
    'label' => 'Panel Body',
    'weight' => '3',
    'children' => array(
      0 => 'person_action_buttons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel Body',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-panel-body field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_panel_body|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_header|node|person|full';
  $field_group->group_name = 'group_person_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_person_meet_us';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '2',
    'children' => array(
      0 => 'field_person_name',
      1 => 'field_person_title',
      2 => 'field_person_gender_pronoun',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-person-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_person_header|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_meet_us|node|person|full';
  $field_group->group_name = 'group_person_meet_us';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meet Us',
    'weight' => '0',
    'children' => array(
      0 => 'field_person_photo',
      1 => 'group_panel_body',
      2 => 'group_person_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meet Us',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-person-meet-us field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_person_meet_us|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|location|default';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_container_1';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '1',
    'children' => array(
      0 => 'group_col_1',
      1 => 'group_col_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-1 field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_1|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|location|form';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_container_1';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '14',
    'children' => array(
      0 => 'group_col_2',
      1 => 'group_col_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-row-1 field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_1|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|location|full';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container_1';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '6',
    'children' => array(
      0 => 'group_col_1',
      1 => 'group_col_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-1 field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_1|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|location|teaser';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_container_1';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '1',
    'children' => array(
      0 => 'group_col_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_1|node|location|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Callout');
  t('Column Main');
  t('Column Sidebar');
  t('Contact');
  t('Container');
  t('Dining Menu');
  t('Fields');
  t('General');
  t('Getting Around');
  t('Header');
  t('Hours');
  t('Images');
  t('Integrations');
  t('Location');
  t('Meet Us');
  t('Menu');
  t('Nutrition Menu');
  t('Overview');
  t('Panel Body');
  t('Promotion');
  t('Row');
  t('Todays Menu');

  return $field_groups;
}
