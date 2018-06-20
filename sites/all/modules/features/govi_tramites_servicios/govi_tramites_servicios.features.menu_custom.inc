<?php
/**
 * @file
 * govi_tramites_servicios.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_tramites_servicios_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-tramites-servicios.
  $menus['menu-menu-tramites-servicios'] = array(
    'menu_name' => 'menu-menu-tramites-servicios',
    'title' => 'Trámites y Servicios',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Trámites y Servicios');

  return $menus;
}
