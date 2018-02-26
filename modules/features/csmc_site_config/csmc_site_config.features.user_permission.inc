<?php
/**
 * @file
 * csmc_site_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function csmc_site_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer menu-fiat-main-menu menu items'.
  $permissions['administer menu-fiat-main-menu menu items'] = array(
    'name' => 'administer menu-fiat-main-menu menu items',
    'roles' => array(
      'Dealer Advanced' => 'Dealer Advanced',
      'Dealer Elite' => 'Dealer Elite',
      'Dealer Express' => 'Dealer Express',
      'SN Account Manager' => 'SN Account Manager',
      'SN Admin' => 'SN Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-ford-main-menu menu items'.
  $permissions['administer menu-ford-main-menu menu items'] = array(
    'name' => 'administer menu-ford-main-menu menu items',
    'roles' => array(
      'Dealer Advanced' => 'Dealer Advanced',
      'Dealer Elite' => 'Dealer Elite',
      'Dealer Express' => 'Dealer Express',
      'SN Account Manager' => 'SN Account Manager',
      'SN Admin' => 'SN Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-peugeot-main-menu menu items'.
  $permissions['administer menu-peugeot-main-menu menu items'] = array(
    'name' => 'administer menu-peugeot-main-menu menu items',
    'roles' => array(
      'Dealer Advanced' => 'Dealer Advanced',
      'Dealer Elite' => 'Dealer Elite',
      'Dealer Express' => 'Dealer Express',
      'SN Account Manager' => 'SN Account Manager',
      'SN Admin' => 'SN Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  return $permissions;
}
