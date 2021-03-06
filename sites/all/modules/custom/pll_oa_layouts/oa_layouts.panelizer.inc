<?php
/**
 * @file
 * oa_layouts.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function oa_layouts_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_group:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_group';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4330e44a-0d39-4b18-82d2-8ce8c3d53317';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a0986757-bddf-45fc-90fe-bfeaed72064c';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a0986757-bddf-45fc-90fe-bfeaed72064c';
    $display->content['new-a0986757-bddf-45fc-90fe-bfeaed72064c'] = $pane;
    $display->panels['contentmain'][0] = 'new-a0986757-bddf-45fc-90fe-bfeaed72064c';
    $pane = new stdClass();
    $pane->pid = 'new-dbd8aad5-3dd3-468f-9c93-3fb95576ff2d';
    $pane->panel = 'contentmain';
    $pane->type = 'oa_core_members_widget';
    $pane->subtype = 'oa_core_members_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'hide_owner' => 0,
      'hide_teams' => 1,
      'show_number' => '0',
      'hide_members' => 0,
      'hide_inherited' => 0,
      'show_as_tabs' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dbd8aad5-3dd3-468f-9c93-3fb95576ff2d';
    $display->content['new-dbd8aad5-3dd3-468f-9c93-3fb95576ff2d'] = $pane;
    $display->panels['contentmain'][1] = 'new-dbd8aad5-3dd3-468f-9c93-3fb95576ff2d';
    $pane = new stdClass();
    $pane->pid = 'new-47077687-bf95-4d23-baa6-81767e69cb47';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'panopoly_image_full',
        'image_link' => '',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '47077687-bf95-4d23-baa6-81767e69cb47';
    $display->content['new-47077687-bf95-4d23-baa6-81767e69cb47'] = $pane;
    $display->panels['sidebar'][0] = 'new-47077687-bf95-4d23-baa6-81767e69cb47';
    $pane = new stdClass();
    $pane->pid = 'new-dffd04b0-21e2-4506-95b8-3fb4c09daca7';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dffd04b0-21e2-4506-95b8-3fb4c09daca7';
    $display->content['new-dffd04b0-21e2-4506-95b8-3fb4c09daca7'] = $pane;
    $display->panels['sidebar'][1] = 'new-dffd04b0-21e2-4506-95b8-3fb4c09daca7';
    $pane = new stdClass();
    $pane->pid = 'new-4a727012-89aa-46d4-9b18-a4dc6ae613a2';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4a727012-89aa-46d4-9b18-a4dc6ae613a2';
    $display->content['new-4a727012-89aa-46d4-9b18-a4dc6ae613a2'] = $pane;
    $display->panels['sidebar'][2] = 'new-4a727012-89aa-46d4-9b18-a4dc6ae613a2';
    $pane = new stdClass();
    $pane->pid = 'new-7c7168e4-bb9b-4f18-bc3a-5ac291742a84';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_core_add_member';
    $pane->subtype = 'oa_core_add_member';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7c7168e4-bb9b-4f18-bc3a-5ac291742a84';
    $display->content['new-7c7168e4-bb9b-4f18-bc3a-5ac291742a84'] = $pane;
    $display->panels['sidebar'][3] = 'new-7c7168e4-bb9b-4f18-bc3a-5ac291742a84';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_group:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_section:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Space',
      'keyword' => 'space',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6b061dde-e76e-4840-87d6-3c2d260e5bd0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1f764f22-e7d4-4e51-ae8f-15eb0505f91d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f764f22-e7d4-4e51-ae8f-15eb0505f91d';
    $display->content['new-1f764f22-e7d4-4e51-ae8f-15eb0505f91d'] = $pane;
    $display->panels['contentmain'][0] = 'new-1f764f22-e7d4-4e51-ae8f-15eb0505f91d';
    $pane = new stdClass();
    $pane->pid = 'new-879791b5-d7ee-47c6-b761-54a0d9b7c33e';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '879791b5-d7ee-47c6-b761-54a0d9b7c33e';
    $display->content['new-879791b5-d7ee-47c6-b761-54a0d9b7c33e'] = $pane;
    $display->panels['contentmain'][1] = 'new-879791b5-d7ee-47c6-b761-54a0d9b7c33e';
    $pane = new stdClass();
    $pane->pid = 'new-ee7b9a5a-2afb-49cd-b63c-bd6971ce0099';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-section_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'empty',
      ),
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => '',
      'exposed' => array(
        'type' => array(),
        'realname' => '',
        'og_group_ref_target_id' => '',
        'oa_section_ref_target_id' => '',
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ee7b9a5a-2afb-49cd-b63c-bd6971ce0099';
    $display->content['new-ee7b9a5a-2afb-49cd-b63c-bd6971ce0099'] = $pane;
    $display->panels['contentmain'][2] = 'new-ee7b9a5a-2afb-49cd-b63c-bd6971ce0099';
    $pane = new stdClass();
    $pane->pid = 'new-8a102498-9433-4daa-89e8-02137abfcfc0';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_widgets_content_visibility';
    $pane->subtype = 'oa_widgets_content_visibility';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'form_build_id' => 'form-AHJUfpYPcZ4fsSHUHIFy0Adu0CXy4e79Kcslz2yLodI',
      'form_token' => 'BzH8uxEwTjsQGuqkcXBIlcjCxMTFGGufXWz-7ckhC2M',
      'form_id' => 'oa_widgets_content_visibility_edit_form',
      'op' => 'Finish',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a102498-9433-4daa-89e8-02137abfcfc0';
    $display->content['new-8a102498-9433-4daa-89e8-02137abfcfc0'] = $pane;
    $display->panels['sidebar'][0] = 'new-8a102498-9433-4daa-89e8-02137abfcfc0';
    $pane = new stdClass();
    $pane->pid = 'new-e46eaca6-3e81-4a12-acd9-72122f1f183f';
    $pane->panel = 'sidebar';
    $pane->type = 'og_menu_single_menu';
    $pane->subtype = 'og_menu_single_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'parent' => 0,
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'og_menu_single_depth' => '0',
      'og_menu_single_parent' => 'auto',
      'form_build_id' => 'form-4K3ewrxBpQ6gLpQ17PMXLK44cCFWxCLoQS-Yp1Hks_E',
      'form_token' => '1Bb8t5EXHaEf_Y5XvtojdqAxSDMGwVGyanDS7B9BUEs',
      'form_id' => 'og_menu_single_pane_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e46eaca6-3e81-4a12-acd9-72122f1f183f';
    $display->content['new-e46eaca6-3e81-4a12-acd9-72122f1f183f'] = $pane;
    $display->panels['sidebar'][1] = 'new-e46eaca6-3e81-4a12-acd9-72122f1f183f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_section:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_space:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_space';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0e3fa956-fb7b-4e52-82aa-b79a16b2e38c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ef72fbd-6a52-407d-9f90-eff0b2c09771';
    $pane->panel = 'contentmain';
    $pane->type = 'oa_core_summary';
    $pane->subtype = 'oa_core_summary';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'og_member',
          'settings' => array(
            'state' => array(
              1 => '1',
            ),
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'panelizer',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'image_size' => 'quarter',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'show_description' => 1,
      'show_favorite' => 0,
      'show_links' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ef72fbd-6a52-407d-9f90-eff0b2c09771';
    $display->content['new-2ef72fbd-6a52-407d-9f90-eff0b2c09771'] = $pane;
    $display->panels['contentmain'][0] = 'new-2ef72fbd-6a52-407d-9f90-eff0b2c09771';
    $pane = new stdClass();
    $pane->pid = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-section_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => '6',
      'exposed' => array(
        'type' => array(),
        'realname' => '',
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 1,
        'oa_section_ref_target_id' => '',
      ),
      'use_pager' => 1,
      'pager_id' => '',
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
      'show_exposed_form' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de'] = $pane;
    $display->panels['contentmain'][1] = 'new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de';
    $pane = new stdClass();
    $pane->pid = 'new-ef2fcbc3-97c7-44de-b484-cba9881045b6';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_core_members_widget';
    $pane->subtype = 'oa_core_members_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'hide_owner' => 1,
      'hide_teams' => 1,
      'hide_members' => 0,
      'hide_inherited' => 1,
      'show_number' => '5',
      'show_as_tabs' => 0,
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef2fcbc3-97c7-44de-b484-cba9881045b6';
    $display->content['new-ef2fcbc3-97c7-44de-b484-cba9881045b6'] = $pane;
    $display->panels['sidebar'][0] = 'new-ef2fcbc3-97c7-44de-b484-cba9881045b6';
    $pane = new stdClass();
    $pane->pid = 'new-a78d4303-449c-4ace-b5ed-900fbbcaec1c';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_fullcalendar-oa_calendar_month';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '',
      ),
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a78d4303-449c-4ace-b5ed-900fbbcaec1c';
    $display->content['new-a78d4303-449c-4ace-b5ed-900fbbcaec1c'] = $pane;
    $display->panels['sidebar'][1] = 'new-a78d4303-449c-4ace-b5ed-900fbbcaec1c';
    $pane = new stdClass();
    $pane->pid = 'new-801d2668-fa45-4031-83ba-e7d47830a8a6';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_widgets_content_visibility';
    $pane->subtype = 'oa_widgets_content_visibility';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'form_build_id' => 'form-nfdmNUC5N1Z1lUluljqjL18jF_bVcdlU1-H470dZv94',
      'form_token' => 'eF5y_k-Sqs_hlOO917E4wjO8454L4ZYTryjMSnll_X8',
      'form_id' => 'oa_widgets_content_visibility_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '801d2668-fa45-4031-83ba-e7d47830a8a6';
    $display->content['new-801d2668-fa45-4031-83ba-e7d47830a8a6'] = $pane;
    $display->panels['sidebar'][2] = 'new-801d2668-fa45-4031-83ba-e7d47830a8a6';
    $pane = new stdClass();
    $pane->pid = 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $display->content['new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95'] = $pane;
    $display->panels['sidebar'][3] = 'new-2b5ef25a-4dce-4b89-99b7-f940adbd5e95';
    $pane = new stdClass();
    $pane->pid = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_section_pages-section_pages_within_spaces';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'fields_override' => array(
        'title' => 1,
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => '',
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'offset' => NULL,
      'link_to_view' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
    $display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54'] = $pane;
    $display->panels['sidebar'][4] = 'new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_space:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_space:space_description';
  $panelizer->title = 'Space members';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_space';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'column2' => array(
      'style' => 'oa_styles_well',
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '966de3d7-f2a2-4792-ae39-be8b05ba15aa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-58a4dfbf-b317-4e25-afe4-5f50ae5673bd';
    $pane->panel = 'contentmain';
    $pane->type = 'oa_core_summary';
    $pane->subtype = 'oa_core_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'image_size' => 'quarter',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'show_description' => 1,
      'show_favorite' => 0,
      'show_links' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58a4dfbf-b317-4e25-afe4-5f50ae5673bd';
    $display->content['new-58a4dfbf-b317-4e25-afe4-5f50ae5673bd'] = $pane;
    $display->panels['contentmain'][0] = 'new-58a4dfbf-b317-4e25-afe4-5f50ae5673bd';
    $pane = new stdClass();
    $pane->pid = 'new-5e59fe12-ce10-4110-9e96-866f831a3287';
    $pane->panel = 'contentmain';
    $pane->type = 'oa_core_members_widget';
    $pane->subtype = 'oa_core_members_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5e59fe12-ce10-4110-9e96-866f831a3287';
    $display->content['new-5e59fe12-ce10-4110-9e96-866f831a3287'] = $pane;
    $display->panels['contentmain'][1] = 'new-5e59fe12-ce10-4110-9e96-866f831a3287';
    $pane = new stdClass();
    $pane->pid = 'new-e7d8bf60-a12a-4fb0-bc5b-049decd4009a';
    $pane->panel = 'sidebar';
    $pane->type = 'oa_widgets_content_visibility';
    $pane->subtype = 'oa_widgets_content_visibility';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'form_build_id' => 'form-WqQzFzDF_ddzGEpNXFQZsJI-QMMvCegYIqSqsSFQTu4',
      'form_token' => 'eF5y_k-Sqs_hlOO917E4wjO8454L4ZYTryjMSnll_X8',
      'form_id' => 'oa_widgets_content_visibility_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7d8bf60-a12a-4fb0-bc5b-049decd4009a';
    $display->content['new-e7d8bf60-a12a-4fb0-bc5b-049decd4009a'] = $pane;
    $display->panels['sidebar'][0] = 'new-e7d8bf60-a12a-4fb0-bc5b-049decd4009a';
    $pane = new stdClass();
    $pane->pid = 'new-61e80912-c909-4d82-964e-ec8a1b527c54';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => '0',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '61e80912-c909-4d82-964e-ec8a1b527c54';
    $display->content['new-61e80912-c909-4d82-964e-ec8a1b527c54'] = $pane;
    $display->panels['sidebar'][1] = 'new-61e80912-c909-4d82-964e-ec8a1b527c54';
    $pane = new stdClass();
    $pane->pid = 'new-dc728fd2-508e-43c9-9f2d-ece45c6cc658';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_section_pages-section_pages_within_spaces';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'fields_override' => array(
        'title' => 1,
      ),
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => '',
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'offset' => NULL,
      'link_to_view' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dc728fd2-508e-43c9-9f2d-ece45c6cc658';
    $display->content['new-dc728fd2-508e-43c9-9f2d-ece45c6cc658'] = $pane;
    $display->panels['sidebar'][2] = 'new-dc728fd2-508e-43c9-9f2d-ece45c6cc658';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_space:space_description'] = $panelizer;

  return $export;
}
