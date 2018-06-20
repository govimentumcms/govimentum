<?php
/**
 * @file
 * govi_instrumentos_gestion_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_instrumentos_gestion_info_ctools_plugin_api($module = NULL, $api = NULL) {
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
function govi_instrumentos_gestion_info_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_instrumentos_gestion_info_node_info() {
  $items = array(
    'instrumentos_gestion_informacion' => array(
      'name' => t('10. Instrumentos de gestión de información pública'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar Registro de activos de información, Índice de información clasificada y reservada, Esquema de publicación de información, Programa de gestión documental, Tablas de retención documental, Registro de publicaciones, Costos de reproducción e Informe de PQRS de la Entidad.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
