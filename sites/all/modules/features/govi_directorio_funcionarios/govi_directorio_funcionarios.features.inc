<?php
/**
 * @file
 * govi_directorio_funcionarios.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_directorio_funcionarios_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_directorio_funcionarios_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_directorio_funcionarios_node_info() {
  $items = array(
    'directorio_funcionarios' => array(
      'name' => t('3.5 Directorio de Información de servidores públicos y contratistas'),
      'base' => 'node_content',
      'description' => t('Este tipo de contenido contiene la metadata básica que permite la interoperabilidad con el Sistema de Información de Administración Pública - SIDEAP del Departamento Administrativo del Servicio Civil Distrital - DASCD y la referencia al directorio de funcionarios suministrado por esta plataforma para la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Nombre completo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
