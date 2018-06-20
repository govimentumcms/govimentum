<?php
/**
 * @file
 * govi_contratacion.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_contratacion_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-contratacion.
  $menus['menu-menu-contratacion'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'title' => 'Contratación',
    'description' => 'Navegación para la clasificación de los documentos de la contratación de la Entidad',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contratación');
  t('Navegación para la clasificación de los documentos de la contratación de la Entidad');

  return $menus;
}
