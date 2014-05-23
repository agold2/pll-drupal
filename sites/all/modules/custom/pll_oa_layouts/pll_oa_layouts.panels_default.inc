<?php
/**
 * @file
 * pll_oa_layouts.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function pll_oa_layouts_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'pll_space_activity';
  $mini->category = 'PLL';
  $mini->admin_title = 'Space Recent Activity';
  $mini->admin_description = 'Includes Add content dropdown, styled to be in header';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd73b9dfa-4641-40c2-b624-54682cbf87e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-27aad498-07d5-4549-a57a-f7ae78ba4b97';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'pll_recent_activity-section_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'show_exposed_form' => 1,
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '6',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '27aad498-07d5-4549-a57a-f7ae78ba4b97';
    $display->content['new-27aad498-07d5-4549-a57a-f7ae78ba4b97'] = $pane;
    $display->panels['middle'][0] = 'new-27aad498-07d5-4549-a57a-f7ae78ba4b97';
    $pane = new stdClass();
    $pane->pid = 'new-544b6e17-bef0-4cf5-84a8-2d68dc155286';
    $pane->panel = 'middle';
    $pane->type = 'add_space_content';
    $pane->subtype = 'add_space_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '544b6e17-bef0-4cf5-84a8-2d68dc155286';
    $display->content['new-544b6e17-bef0-4cf5-84a8-2d68dc155286'] = $pane;
    $display->panels['middle'][1] = 'new-544b6e17-bef0-4cf5-84a8-2d68dc155286';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['pll_space_activity'] = $mini;

  return $export;
}
