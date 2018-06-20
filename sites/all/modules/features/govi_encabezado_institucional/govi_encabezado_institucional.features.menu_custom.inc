<?php
/**
 * @file
 * govi_encabezado_institucional.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govi_encabezado_institucional_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-barra-superior.
  $menus['menu-barra-superior'] = array(
    'menu_name' => 'menu-barra-superior',
    'title' => 'Menu superior',
    'description' => 'Implementa mapa del sitio y acceso de usuario',
  );
  // Exported menu: menu-menu-secundario.
  $menus['menu-menu-secundario'] = array(
    'menu_name' => 'menu-menu-secundario',
    'title' => 'Menu Secundario',
    'description' => '',
  );
  // Exported menu: menu-transparencia-segundo-nivel.
  $menus['menu-transparencia-segundo-nivel'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'title' => 'Transparencia Segundo nivel',
    'description' => 'Transparencia segundo nivel',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Implementa mapa del sitio y acceso de usuario');
  t('Menu Secundario');
  t('Menu superior');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('Transparencia Segundo nivel');
  t('Transparencia segundo nivel');
  t('User menu');

  return $menus;
}
