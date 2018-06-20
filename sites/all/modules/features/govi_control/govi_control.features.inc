<?php
/**
 * @file
 * govi_control.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_control_ctools_plugin_api($module = NULL, $api = NULL) {
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
function govi_control_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_control_node_info() {
  $items = array(
    'control' => array(
      'name' => t('7. Control'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar Informes de gestión, evaluación y auditoría, Reportes de control interno, Planes de mejoramiento, Entes de control que vigilan a la entidad y mecanismos de supervisión, Información para población vulnerable y Defensa judicial de la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
