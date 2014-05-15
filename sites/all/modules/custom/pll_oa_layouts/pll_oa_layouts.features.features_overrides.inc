<?php
/**
 * @file
 * pll_oa_layouts.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pll_oa_layouts_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.group_access.settings|allowed_values|0"] = 'Open - accessible to all site users';
  $overrides["field_base.group_access.settings|allowed_values|1"] = 'Private - accessible only to space members';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-oa_space-group_access.comment_alter"] = 0;
  $overrides["field_instance.node-oa_space-group_access.required"] = 1;
  $overrides["field_instance.node-oa_space-group_access.widget|active"] = 1;

 return $overrides;
}
