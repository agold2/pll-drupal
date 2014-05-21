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
  $overrides["field_instance.node-oa_space-body.required"] = 1;

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|position"] = 5;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95|position"] = 3;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-2ef72fbd-6a52-407d-9f90-eff0b2c09771"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-38d9638d-d499-46ff-93fa-84400cb97eca"] = (object) array(
      'pid' => 'new-38d9638d-d499-46ff-93fa-84400cb97eca',
      'panel' => 'contentmain',
      'type' => 'panels_mini',
      'subtype' => 'pll_space_activity',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '38d9638d-d499-46ff-93fa-84400cb97eca',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-4d748cc2-47b4-4fb4-96e8-7aba2962a58e"] = (object) array(
      'pid' => 'new-4d748cc2-47b4-4fb4-96e8-7aba2962a58e',
      'panel' => 'sidebar',
      'type' => 'oa_core_add_member',
      'subtype' => 'oa_core_add_member',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '4d748cc2-47b4-4fb4-96e8-7aba2962a58e',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-801d2668-fa45-4031-83ba-e7d47830a8a6|position"] = 4;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-a769a0a6-50cf-4404-b00f-3f4232914e18"] = (object) array(
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
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'a769a0a6-50cf-4404-b00f-3f4232914e18',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-af6554c6-9ade-4062-8bef-eafa5b76f324"] = (object) array(
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
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'af6554c6-9ade-4062-8bef-eafa5b76f324',
    );
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|0"] = 'new-38d9638d-d499-46ff-93fa-84400cb97eca';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|contentmain|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|0"] = 'new-af6554c6-9ade-4062-8bef-eafa5b76f324';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|1"] = 'new-4d748cc2-47b4-4fb4-96e8-7aba2962a58e';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|2"] = 'new-a769a0a6-50cf-4404-b00f-3f4232914e18';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|3"] = 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|4"] = 'new-801d2668-fa45-4031-83ba-e7d47830a8a6';
  $overrides["panelizer_defaults.node:oa_space:default.display|panels|sidebar|5"] = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
  $overrides["panelizer_defaults.node:oa_space:default.extra|panels_breadcrumbs_home"] = 0;
  $overrides["panelizer_defaults.node:oa_space:default.extra|panels_breadcrumbs_paths"] = '/spaces/';
  $overrides["panelizer_defaults.node:oa_space:default.extra|panels_breadcrumbs_state"] = 0;
  $overrides["panelizer_defaults.node:oa_space:default.extra|panels_breadcrumbs_titles"] = '';
  $overrides["panelizer_defaults.node:oa_space:space_description.display|content|new-58a4dfbf-b317-4e25-afe4-5f50ae5673bd|configuration"] = array(
    'image_size' => 'quarter',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'show_description' => 1,
    'show_favorite' => 0,
    'show_links' => 0,
  );

  // Exported overrides for: variable
  $overrides["variable.pathauto_node_oa_space_pattern.value"] = 'space/[node:title]';

 return $overrides;
}
