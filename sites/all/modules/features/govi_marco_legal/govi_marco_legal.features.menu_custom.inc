<?php
/**
 * @file
 * govi_marco_legal.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_marco_legal_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-marco-legal.
  $menus['menu-menu-marco-legal'] = array(
    'menu_name' => 'menu-menu-marco-legal',
    'title' => 'Menu Marco Legal',
    'description' => 'Navegación para la clasificación del marco legal que afecta a la Entidad',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Marco Legal');
  t('Navegación para la clasificación del marco legal que afecta a la Entidad');

  return $menus;
}
