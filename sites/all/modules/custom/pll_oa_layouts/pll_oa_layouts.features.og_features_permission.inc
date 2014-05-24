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

  // Exported og permission: 'node:oa_space:subscribe without approval'
  $permissions['node:oa_space:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
