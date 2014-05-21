<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function pll_bootstrap_preprocess_page(&$variables) {
  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-9"';
  }
  else {
    $variables['content_column_class'] = ' class="col-sm-12"';
  }

  // Primary nav.
  $variables['primary_nav'] = FALSE;
  if ($variables['main_menu']) {
    // Build links.
    $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    // Provide default theme wrapper function.
    $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
  }

  // Secondary nav.
  $variables['secondary_nav'] = FALSE;
  if ($variables['secondary_menu']) {
    // Build links.
    $variables['secondary_nav'] = menu_tree(variable_get('menu_secondary_links_source', 'user-menu'));
    // Provide default theme wrapper function.
    $variables['secondary_nav']['#theme_wrappers'] = array('menu_tree__secondary');
  }

  // ASU Header
  $variables['asu_header_classes_array'] = array('asu-header');

  // ASU Footer
  $variables['asu_footer_classes_array'] = array('asu-footer');

  // Top Nav
  $variables['navbar_top_classes_array'] = array('navbar-top');

  if (theme_get_setting('bootstrap_navbar_position') !== '') {
    $variables['navbar_top_classes_array'][] = 'navbar-' . theme_get_setting('bootstrap_navbar_position');
  }
  else {
    $variables['navbar_top_classes_array'][] = 'container';
  }
  if (theme_get_setting('bootstrap_navbar_inverse')) {
    $variables['navbar_top_classes_array'][] = 'navbar-top-inverse';
  }
  else {
    $variables['navbar_top_classes_array'][] = 'navbar-top-default';
  }

  // Middle Nav
  $variables['navbar_middle_classes_array'] = array('navbar-middle');

  if (theme_get_setting('bootstrap_navbar_position') !== '') {
    $variables['navbar_middle_classes_array'][] = 'navbar-' . theme_get_setting('bootstrap_navbar_position');
  }
  else {
    $variables['navbar_middle_classes_array'][] = 'container';
  }
  if (theme_get_setting('bootstrap_navbar_inverse')) {
    $variables['navbar_middle_classes_array'][] = 'navbar-middle-inverse';
  }
  else {
    $variables['navbar_middle_classes_array'][] = 'navbar-middle-default';
  }

  // Bottom Nav
  $variables['navbar_bottom_classes_array'] = array('navbar-bottom');

  if (theme_get_setting('bootstrap_navbar_position') !== '') {
    $variables['navbar_bottom_classes_array'][] = 'navbar-' . theme_get_setting('bootstrap_navbar_position');
  }
  else {
    $variables['navbar_bottom_classes_array'][] = 'container';
  }
  if (theme_get_setting('bootstrap_navbar_inverse')) {
    $variables['navbar_bottom_classes_array'][] = 'navbar-bottom-inverse';
  }
  else {
    $variables['navbar_bottom_classes_array'][] = 'navbar-bottom-default';
  }
  // Fluid Content 
  $variables['fluid_content_classes_array'] = array('fluid-content');
}
/**
 * Implements hook_process_page().
 *
 * @see page.tpl.php
 */
function pll_bootstrap_process_page(&$variables) {
  $variables['asu_header_classes'] = implode(' ', $variables['asu_header_classes_array']);
  $variables['navbar_top_classes'] = implode(' ', $variables['navbar_top_classes_array']);
  $variables['navbar_middle_classes'] = implode(' ', $variables['navbar_middle_classes_array']);
  $variables['navbar_bottom_classes'] = implode(' ', $variables['navbar_bottom_classes_array']);
  $variables['asu_footer_classes'] = implode(' ', $variables['asu_footer_classes_array']);
  $variables['fluid_content_classes'] = implode(' ', $variables['fluid_content_classes_array']);
}
function pll_bootstrap_preprocess_status_messages(&$variables) {
}
function pll_bootstrap_process_status_messages(&$variables) {
}
/**
 * Implements hook__status_messages().
 *
 * @see page.tpl.php
 */
function pll_bootstrap_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"messages $type\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        switch ($type) {
          case "status":
            $output .= '  <li><i class="gi gi-circle_ok"></i><span class="type">Success</span>' . $message . "</li>\n";
            break;
          case "error":
            $output .= '  <li><i class="gi gi-circle_remove"></i><span class="type">Error</span>' . $message . "</li>\n";
            break;
          case "warning":
            $output .= '  <li><i class="gi gi-circle_remove"></i><span class="type">Warning</span>' . $message . "</li>\n";
            break;
        }

      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }
    $output .= "</div>\n";
  }
  return $output;
}

