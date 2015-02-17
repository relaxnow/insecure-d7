<?php
/**
 * @file
 * insecured7_homepage.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function insecured7_homepage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_my-credit-card:my-credit-card
  $menu_links['main-menu_my-credit-card:my-credit-card'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-credit-card',
    'router_path' => 'my-credit-card',
    'link_title' => 'My Credit Card',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_my-credit-card:my-credit-card',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_my-vouchers:my-vouchers
  $menu_links['main-menu_my-vouchers:my-vouchers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-vouchers',
    'router_path' => 'my-vouchers',
    'link_title' => 'My Vouchers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_my-vouchers:my-vouchers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Credit Card');
  t('My Vouchers');


  return $menu_links;
}
