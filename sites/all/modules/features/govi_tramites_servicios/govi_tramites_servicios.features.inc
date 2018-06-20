<?php
/**
 * @file
 * govi_tramites_servicios.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_tramites_servicios_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_tramites_servicios_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_tramites_servicios_node_info() {
  $items = array(
    'tramites_servicios' => array(
      'name' => t('Trámites y Servicios'),
      'base' => 'node_content',
      'description' => t('Publicar la información relacionada con los trámites y servicios de la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
