<?php
/**
 * @file
 * insecured7_homepage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function insecured7_homepage_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
