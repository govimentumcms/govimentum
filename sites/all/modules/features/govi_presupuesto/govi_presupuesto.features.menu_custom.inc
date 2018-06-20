<?php
/**
 * @file
 * govi_presupuesto.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_presupuesto_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-presupuesto.
  $menus['menu-menu-presupuesto'] = array(
    'menu_name' => 'menu-menu-presupuesto',
    'title' => 'Menu Presupuesto',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Presupuesto');

  return $menus;
}
