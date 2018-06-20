<?php
/**
 * @file
 * govi_mecanismos_contacto.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_mecanismos_contacto_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'mecanismos_de_atencion_ciudadania';
  $path_breadcrumb->name = 'Mecanismos de atención a la ciudadanía';
  $path_breadcrumb->path = 'transparencia/mecanismos-contacto/mecanismos-atencion-ciudadania';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Mecanismos de contacto',
      2 => 'Mecanismos de atención a la ciudadanía',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/mecanismos-contacto',
      2 => 'transparencia/mecanismos-contacto/mecanismos-atencion-ciudadania',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['mecanismos_de_atencion_ciudadania'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'mecanismos_de_contacto_don_el_sujeto_obligado';
  $path_breadcrumb->name = 'Mecanismos de contacto con el sujeto obligado';
  $path_breadcrumb->path = 'transparencia/mecanismos-contacto';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Mecanismos de Contacto',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/mecanismos-contacto',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['mecanismos_de_contacto_don_el_sujeto_obligado'] = $path_breadcrumb;

  return $export;
}
