<?php
/**
 * @file
 * dining_location_entity.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dining_location_entity_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer bongo'.
  $permissions['administer bongo'] = array(
    'name' => 'administer bongo',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'bongo',
  );

  return $permissions;
}
