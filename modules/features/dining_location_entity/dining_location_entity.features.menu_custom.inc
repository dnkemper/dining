<?php

/**
 * @file
 * dining_location_entity.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function dining_location_entity_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-menu-social-media.
  $menus['menu-menu-social-media'] = array(
    'menu_name' => 'menu-menu-social-media',
    'title' => 'Social Media',
    'description' => '',
  );
  // Exported menu: menu-social-media.
  $menus['menu-social-media'] = array(
    'menu_name' => 'menu-social-media',
    'title' => 'Social Media',
    'description' => '<em>Social Media</em> menu links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<em>Social Media</em> menu links');
  t('Main menu');
  t('Social Media');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
