<?php
/**
 * @file
 * govi_transparencia.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function govi_transparencia_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  return $permissions;
}
