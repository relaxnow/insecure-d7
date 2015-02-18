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

  // Exported menu link: main-menu_friendly-fortune:fortune/90/10
  $menu_links['main-menu_friendly-fortune:fortune/90/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'fortune/90/10',
    'router_path' => 'fortune/%/%',
    'link_title' => 'Friendly Fortune',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_friendly-fortune:fortune/90/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_links:node/1
  $menu_links['main-menu_links:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Links',
    'options' => array(
      'identifier' => 'main-menu_links:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
  );
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
    'weight' => 1,
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
    'weight' => 2,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Friendly Fortune');
  t('Home');
  t('Links');
  t('My Credit Card');
  t('My Vouchers');


  return $menu_links;
}
