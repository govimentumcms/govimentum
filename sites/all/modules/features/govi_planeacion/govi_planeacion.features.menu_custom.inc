<?php
/**
 * @file
 * govi_planeacion.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_planeacion_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-planeacion.
  $menus['menu-menu-planeacion'] = array(
    'menu_name' => 'menu-menu-planeacion',
    'title' => 'Menu Planeación',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Planeación');

  return $menus;
}
