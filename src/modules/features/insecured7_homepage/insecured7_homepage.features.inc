<?php
/**
 * @file
 * insecured7_homepage.features.inc
 */

/**
 * Implements hook_node_info().
 */
function insecured7_homepage_node_info() {
  $items = array(
    'links_page' => array(
      'name' => t('Links page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
