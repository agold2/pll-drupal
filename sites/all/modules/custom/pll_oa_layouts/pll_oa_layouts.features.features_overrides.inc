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

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-2ef72fbd-6a52-407d-9f90-eff0b2c09771"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de|position"] = 0;
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|0"] = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:space_description.display|content|new-58a4dfbf-b317-4e25-afe4-5f50ae5673bd|configuration"] = array(
    'image_size' => 'quarter',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'show_description' => 1,
    'show_favorite' => 0,
    'show_links' => 0,
  );

 return $overrides;
}
