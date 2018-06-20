<?php
/**
 * @file
 * govi_instrumentos_gestion_info.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_instrumentos_gestion_info_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-instrumentos-gestion.
  $menus['menu-menu-instrumentos-gestion'] = array(
    'menu_name' => 'menu-menu-instrumentos-gestion',
    'title' => 'Instrumentos de gestión de Informacion pública',
    'description' => 'Navegación para la clasificación de los documentos de los Instrumentos de gestión de la información pública',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Instrumentos de gestión de Informacion pública');
  t('Navegación para la clasificación de los documentos de los Instrumentos de gestión de la información pública');

  return $menus;
}
