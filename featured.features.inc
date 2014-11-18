<?php
/**
 * @file
 * featured.features.inc
 */

/**
 * Implements hook_views_api().
 */
function featured_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function featured_node_info() {
  $items = array(
    'featured' => array(
      'name' => t('Featured'),
      'base' => 'node_content',
      'description' => t('Create a featured item for the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function featured_weight_features_default_settings() {
  $settings = array();

  $settings['featured'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
