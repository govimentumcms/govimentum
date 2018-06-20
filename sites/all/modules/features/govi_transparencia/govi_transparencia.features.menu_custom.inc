<?php
/**
 * @file
 * govi_transparencia.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_transparencia_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-transparencia.
  $menus['menu-menu-transparencia'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'title' => 'Transparencia',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Transparencia');

  return $menus;
}
