<?php
/**
 * @file
 * dining_location_entity.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dining_location_entity_user_default_roles() {
  $roles = array();

  // Exported role: food menu manager.
  $roles['food menu manager'] = array(
    'name' => 'food menu manager',
    'weight' => 2,
  );

  return $roles;
}
