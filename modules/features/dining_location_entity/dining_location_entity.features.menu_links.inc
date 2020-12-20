<?php

/**
 * @file
 * dining_location_entity.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dining_location_entity_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-social-media_facebook:https://www.facebook.com/UIowa.UHD.
  $menu_links['menu-social-media_facebook:https://www.facebook.com/UIowa.UHD'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'https://www.facebook.com/UIowa.UHD',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-media_facebook:https://www.facebook.com/UIowa.UHD',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media_instagram:https://www.instagram.com/uiowa.uhd.
  $menu_links['menu-social-media_instagram:https://www.instagram.com/uiowa.uhd'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'https://www.instagram.com/uiowa.uhd',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-media_instagram:https://www.instagram.com/uiowa.uhd',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('Instagram');

  return $menu_links;
}
