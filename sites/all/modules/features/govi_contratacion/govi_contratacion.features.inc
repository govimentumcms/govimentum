<?php
/**
 * @file
 * govi_contratacion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_contratacion_ctools_plugin_api($module = NULL, $api = NULL) {
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
function govi_contratacion_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_contratacion_node_info() {
  $items = array(
    'contratacion' => array(
      'name' => t('8. Contratación'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar Información contractual, Ejecución de contratos, Procedimientos, lineamientos y políticas en materia de adquisición y compras, y Plan Anual de Adquisiciones de la Entidad'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
