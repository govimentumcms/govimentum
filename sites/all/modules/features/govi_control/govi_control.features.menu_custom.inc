<?php
/**
 * @file
 * govi_control.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_control_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-control.
  $menus['menu-control'] = array(
    'menu_name' => 'menu-control',
    'title' => 'Control',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Control');

  return $menus;
}
