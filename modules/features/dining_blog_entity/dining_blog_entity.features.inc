<?php
/**
 * @file
 * dining_blog_entity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dining_blog_entity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function dining_blog_entity_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: blog_posts.
  $custom_breadcrumbs['blog_posts'] = array(
    'name' => 'Blog Posts',
    'titles' => 'Blog',
    'paths' => 'blog',
    'visibility_php' => '',
    'node_type' => 'blog',
    'language' => '',
    'machine_name' => 'blog_posts',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_custom_breadcrumbs_paths_features_default_settings().
 */
function dining_blog_entity_custom_breadcrumbs_paths_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: categories.
  $custom_breadcrumbs['categories'] = array(
    'name' => 'Categories',
    'titles' => 'Blog',
    'paths' => 'blog',
    'visibility_php' => '',
    'specific_path' => 'blog/categories*',
    'language' => '',
    'machine_name' => 'categories',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function dining_blog_entity_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Use <em>blog posts</em> for timely dining-related articles and updates.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
