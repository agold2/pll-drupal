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
 * Implements hook_og_features_default_permissions_alter().
 */
function pll_oa_layouts_og_features_default_permissions_alter(&$data) {
  if (isset($data['node:oa_group:subscribe without approval'])) {
    unset($data['node:oa_group:subscribe without approval']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function pll_oa_layouts_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_space:default'])) {
    $data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->configuration['context'] = array(
      0 => 'panelizer',
    ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->position = 5; /* WAS: 2 */
    $data['node:oa_space:default']->display->content['new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95']->position = 3; /* WAS: 1 */
    $data['node:oa_space:default']->display->content['new-38d9638d-d499-46ff-93fa-84400cb97eca'] = (object) array(
          'pid' => 'new-38d9638d-d499-46ff-93fa-84400cb97eca',
          'panel' => 'contentmain',
          'type' => 'panels_mini',
          'subtype' => 'pll_space_activity',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '38d9638d-d499-46ff-93fa-84400cb97eca',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-4d748cc2-47b4-4fb4-96e8-7aba2962a58e'] = (object) array(
          'pid' => 'new-4d748cc2-47b4-4fb4-96e8-7aba2962a58e',
          'panel' => 'sidebar',
          'type' => 'oa_core_add_member',
          'subtype' => 'oa_core_add_member',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '4d748cc2-47b4-4fb4-96e8-7aba2962a58e',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-801d2668-fa45-4031-83ba-e7d47830a8a6']->position = 4; /* WAS: 0 */
    $data['node:oa_space:default']->display->content['new-a769a0a6-50cf-4404-b00f-3f4232914e18'] = (object) array(
          'pid' => 'new-a769a0a6-50cf-4404-b00f-3f4232914e18',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'oa_worktracker-task_list',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 0,
              'oa_section_ref_target_id' => '',
              'keys' => '',
              'realname_1' => '',
              'realname' => '',
              'field_oa_worktracker_task_status_value' => array(),
              'field_oa_worktracker_priority_value' => array(),
              'field_oa_worktracker_task_type_value' => array(),
            ),
            'show_exposed_form' => 0,
            'items_per_page' => 6,
            'fields_override' => array(
              'title' => 1,
              'timestamp' => 1,
              'realname_1' => 0,
              'realname' => 0,
              'title_1' => 0,
              'field_oa_worktracker_priority' => 0,
              'field_oa_worktracker_task_type' => 0,
              'field_oa_worktracker_task_status' => 1,
              'comment_count' => 0,
              'last_updated' => 1,
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Tasks',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'a769a0a6-50cf-4404-b00f-3f4232914e18',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-af6554c6-9ade-4062-8bef-eafa5b76f324'] = (object) array(
          'pid' => 'new-af6554c6-9ade-4062-8bef-eafa5b76f324',
          'panel' => 'sidebar',
          'type' => 'oa_core_members_widget',
          'subtype' => 'oa_core_members_widget',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'hide_owner' => 1,
            'hide_teams' => 1,
            'hide_members' => 0,
            'hide_inherited' => 1,
            'show_number' => 6,
            'show_as_tabs' => 0,
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '<none>',
          ),
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'af6554c6-9ade-4062-8bef-eafa5b76f324',
        ); /* WAS: '' */
    $data['node:oa_space:default']->display->panels['contentmain']['0'] = 'new-38d9638d-d499-46ff-93fa-84400cb97eca'; /* WAS: 'new-2ef72fbd-6a52-407d-9f90-eff0b2c09771' */
    $data['node:oa_space:default']->display->panels['sidebar']['3'] = 'new-4d748cc2-47b4-4fb4-96e8-7aba2962a58e'; /* WAS: '' */
    $data['node:oa_space:default']->display->panels['sidebar']['4'] = 'new-a769a0a6-50cf-4404-b00f-3f4232914e18'; /* WAS: '' */
    $data['node:oa_space:default']->display->panels['sidebar']['5'] = 'new-af6554c6-9ade-4062-8bef-eafa5b76f324'; /* WAS: '' */
    $data['node:oa_space:default']->extra['panels_breadcrumbs_home'] = 0; /* WAS: '' */
    $data['node:oa_space:default']->extra['panels_breadcrumbs_paths'] = '/spaces/'; /* WAS: '' */
    $data['node:oa_space:default']->extra['panels_breadcrumbs_state'] = 0; /* WAS: '' */
    $data['node:oa_space:default']->extra['panels_breadcrumbs_titles'] = ''; /* WAS: '' */
    unset($data['node:oa_space:default']->display->content['new-2ef72fbd-6a52-407d-9f90-eff0b2c09771']);
    unset($data['node:oa_space:default']->display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de']);
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
