<?php
/**
 * @file
 * pll_oa_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pll_oa_layouts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "pipelines") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pll_oa_layouts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function pll_oa_layouts_field_default_field_bases_alter(&$data) {
  if (isset($data['group_access'])) {
    $data['group_access']['settings']['allowed_values']['0'] = 'Open - accessible to all site users'; /* WAS: 'Private - accessible only to space members' */
    $data['group_access']['settings']['allowed_values']['1'] = 'Private - accessible only to space members'; /* WAS: 'Public - accessible to all site users' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pll_oa_layouts_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_space-body'])) {
    $data['node-oa_space-body']['required'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function pll_oa_layouts_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_space:default'])) {
    $data['node:oa_space:default']->display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de']->position = 0; /* WAS: 1 */
    $data['node:oa_space:default']->display->panels['contentmain']['0'] = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de'; /* WAS: 'new-2ef72fbd-6a52-407d-9f90-eff0b2c09771' */
    unset($data['node:oa_space:default']->display->content['new-2ef72fbd-6a52-407d-9f90-eff0b2c09771']);
    unset($data['node:oa_space:default']->display->panels['contentmain']['1']);
  }
  if (isset($data['node:oa_space:space_description'])) {
    $data['node:oa_space:space_description']->display->content['new-58a4dfbf-b317-4e25-afe4-5f50ae5673bd']->configuration = array(
      'image_size' => 'quarter',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'show_description' => 1,
      'show_favorite' => 0,
      'show_links' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function pll_oa_layouts_strongarm_alter(&$data) {
  if (isset($data['pathauto_node_oa_space_pattern'])) {
    $data['pathauto_node_oa_space_pattern']->value = 'space/[node:title]'; /* WAS: '[node:title]' */
  }
}
