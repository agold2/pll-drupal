<?php
/**
 * @file
 * pll_oa_layouts.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function pll_oa_layouts_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:oa_group:approve and deny subscription'
  $permissions['node:oa_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_group:subscribe without approval'
  $permissions['node:oa_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:oa_space:approve and deny subscription'
  $permissions['node:oa_space:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_space:subscribe without approval'
  $permissions['node:oa_space:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
