<?php
/**
 * @file
 * govi_mecanismos_contacto.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_mecanismos_contacto_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-mecanismos-de-contacto.
  $menus['menu-menu-mecanismos-de-contacto'] = array(
    'menu_name' => 'menu-menu-mecanismos-de-contacto',
    'title' => 'Menu Mecanismos de Contacto',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Mecanismos de Contacto');

  return $menus;
}
