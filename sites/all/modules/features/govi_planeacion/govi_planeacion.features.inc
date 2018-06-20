<?php
/**
 * @file
 * govi_planeacion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_planeacion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_planeacion_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_planeacion_node_info() {
  $items = array(
    'planeacion' => array(
      'name' => t('6. Planeación'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar Políticas, lineamientos y manuales, Plan de gasto público, Programas y proyectos en ejecución, Metas, objetivos e indicadores de gestión y/o desempeño, Participación en la formulación de políticas e Informes de empalme de la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
