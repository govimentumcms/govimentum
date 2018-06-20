<?php
/**
 * @file
 * govi_informaci_n_institucional.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_informaci_n_institucional_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'organizacion';
  $path_breadcrumb->name = 'Organización';
  $path_breadcrumb->path = 'transparencia/organizacion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Organización',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -89;
  $export['organizacion'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'organizacion_directorio_funcionarios';
  $path_breadcrumb->name = 'Organización Directorio de funcionarios';
  $path_breadcrumb->path = 'transparencia/organizacion/directorio-funcionarios';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Organización',
      2 => 'Directorio de Funcionarios',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/organizacion',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -88;
  $export['organizacion_directorio_funcionarios'] = $path_breadcrumb;

  return $export;
}
