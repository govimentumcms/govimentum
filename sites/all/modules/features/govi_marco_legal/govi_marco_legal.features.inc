<?php
/**
 * @file
 * govi_marco_legal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_marco_legal_ctools_plugin_api($module = NULL, $api = NULL) {
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
function govi_marco_legal_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_marco_legal_node_info() {
  $items = array(
    'marco_legal' => array(
      'name' => t('4. Normatividad'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar la normatividad del orden territorial que rige a la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
