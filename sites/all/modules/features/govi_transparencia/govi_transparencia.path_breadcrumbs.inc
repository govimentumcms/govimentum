<?php
/**
 * @file
 * govi_transparencia.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_transparencia_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'transparencia_home';
  $path_breadcrumb->name = 'Transparencia Home';
  $path_breadcrumb->path = 'transparencia';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['transparencia_home'] = $path_breadcrumb;

  return $export;
}
