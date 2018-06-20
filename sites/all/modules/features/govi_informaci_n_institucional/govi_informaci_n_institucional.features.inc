<?php
/**
 * @file
 * govi_informaci_n_institucional.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_informaci_n_institucional_ctools_plugin_api($module = NULL, $api = NULL) {
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
function govi_informaci_n_institucional_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_informaci_n_institucional_node_info() {
  $items = array(
    'organizacion' => array(
      'name' => t('3. Estructura orgánica y talento humano'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar la información sobre la Misión, Visión, Funciones y deberes, Procesos y procedimientos, Organigrama, Directorio de entidades, Directorio de agremiaciones asociaciones y otros grupos de interés y Ofertas empleo de la Entidad'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
