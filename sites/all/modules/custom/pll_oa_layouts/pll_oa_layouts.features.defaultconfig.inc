<?php
/**
 * @file
 * pll_oa_layouts.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function pll_oa_layouts_defaultconfig_features() {
  return array(
    'pll_oa_layouts' => array(
      'field_default_fields' => 'field_default_fields',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function pll_oa_layouts_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-oa_space-field_pll_space_type'.
  $fields['node-oa_space-field_pll_space_type'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_pll_space_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Interest Based Community' => 'Interest Based Community',
          'Project Based Community' => 'Project Based Community',
          'Research Community' => 'Research Community',
          'Study Community' => 'Study Community',
          'Portfolio' => 'Portfolio',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'oa_space',
      'comment_alter' => 0,
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 18,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pll_space_type',
      'label' => 'Space Type',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 1,
        ),
        'type' => 'options_select',
        'weight' => 42,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Space Type');

  return $fields;
}
