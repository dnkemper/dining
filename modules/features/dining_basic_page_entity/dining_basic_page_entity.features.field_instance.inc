<?php
/**
 * @file
 * dining_basic_page_entity.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dining_basic_page_entity_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-page-field_snp_content_blocks'.
  $field_instances['node-page-field_snp_content_blocks'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'view_mode_selector',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'view_mode_selector',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_snp_content_blocks',
    'label' => 'Content Blocks',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'snp_accordion' => -1,
        'snp_accordion_item' => -1,
        'snp_block' => -1,
        'snp_card' => -1,
        'snp_cards' => -1,
        'snp_icon_card' => -1,
        'snp_image_gallery' => -1,
        'snp_map' => -1,
        'snp_map_mp' => -1,
        'snp_section' => 'snp_section',
        'snp_stat' => -1,
        'snp_textarea' => -1,
        'snp_video' => -1,
      ),
      'bundle_weights' => array(
        'snp_accordion' => 2,
        'snp_accordion_item' => 3,
        'snp_block' => 4,
        'snp_card' => 5,
        'snp_cards' => 6,
        'snp_icon_card' => 7,
        'snp_image_gallery' => 8,
        'snp_map' => 9,
        'snp_map_mp' => 10,
        'snp_section' => 11,
        'snp_stat' => 12,
        'snp_textarea' => 13,
        'snp_video' => 14,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Content Blocks');

  return $field_instances;
}
