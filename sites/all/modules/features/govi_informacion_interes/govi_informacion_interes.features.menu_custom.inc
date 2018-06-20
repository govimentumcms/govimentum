<?php
/**
 * @file
 * govi_informacion_interes.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_informacion_interes_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-informacion-interes.
  $menus['menu-menu-informacion-interes'] = array(
    'menu_name' => 'menu-menu-informacion-interes',
    'title' => 'Información de Interés',
    'description' => 'Menú para  característica funcional de información de interes',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Información de Interés');
  t('Menú para  característica funcional de información de interes');

  return $menus;
}
