<?php
/**
 * @file
 * govi_informaci_n_institucional.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_informaci_n_institucional_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-organizacion.
  $menus['menu-menu-organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'title' => 'Estructura orgánica y talento humano',
    'description' => 'Listado de items que permite navegar a través de la Información Institucional de la Entidad en una misma página',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Estructura orgánica y talento humano');
  t('Listado de items que permite navegar a través de la Información Institucional de la Entidad en una misma página');

  return $menus;
}
