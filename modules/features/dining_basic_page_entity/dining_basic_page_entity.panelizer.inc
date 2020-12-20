<?php
/**
 * @file
 * dining_basic_page_entity.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dining_basic_page_entity_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:page:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bbf61478-44c7-4369-85b3-7309d2ce59e3';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:page:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4e0518d2-d8bf-40b1-83c0-ebe058d33260';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4e0518d2-d8bf-40b1-83c0-ebe058d33260';
  $display->content['new-4e0518d2-d8bf-40b1-83c0-ebe058d33260'] = $pane;
  $display->panels['contentmain'][0] = 'new-4e0518d2-d8bf-40b1-83c0-ebe058d33260';
  $pane = new stdClass();
  $pane->pid = 'new-0c367d7c-da53-440e-9871-fcd08cab7f50';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'default',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0c367d7c-da53-440e-9871-fcd08cab7f50';
  $display->content['new-0c367d7c-da53-440e-9871-fcd08cab7f50'] = $pane;
  $display->panels['contentmain'][1] = 'new-0c367d7c-da53-440e-9871-fcd08cab7f50';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4e0518d2-d8bf-40b1-83c0-ebe058d33260';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

  return $export;
}
