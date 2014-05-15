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
 * Implements hook_field_default_field_instances_alter().
 */
function pll_oa_layouts_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_space-group_access'])) {
    $data['node-oa_space-group_access']['comment_alter'] = 0; /* WAS: '' */
    $data['node-oa_space-group_access']['required'] = 1; /* WAS: TRUE */
    $data['node-oa_space-group_access']['widget']['active'] = 1; /* WAS: '' */
  }
}
