<?php
/**
 * @file
 * govi_gestion_institucional.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_gestion_institucional_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function govi_gestion_institucional_node_info() {
  $items = array(
    'gestion_institucional' => array(
      'name' => t('Gestión institucional'),
      'base' => 'node_content',
      'description' => t('Este tipo de contenido permite gestinonar información relacionada con la gestión institucional de acuerdo a lo establecido con la Ley de Transparencia (Ley 1712 de 2014)'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
