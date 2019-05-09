<?php

/**
 * @file
 * govi_eventos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_eventos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_eventos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function govi_eventos_image_default_styles() {
  $styles = array();

  // Exported image style: imagen_eventos_nodo.
  $styles['imagen_eventos_nodo'] = array(
    'label' => 'Imagen eventos nodo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 408,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function govi_eventos_node_info() {
  $items = array(
    'eventos' => array(
      'name' => t('2.6 Calendario de actividades'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar los eventos de la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
