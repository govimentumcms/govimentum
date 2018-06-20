<?php
/**
 * @file
 * govi_links_destacados.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_links_destacados_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_links_destacados_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function govi_links_destacados_image_default_styles() {
  $styles = array();

  // Exported image style: enlaces_destacados.
  $styles['enlaces_destacados'] = array(
    'label' => 'Enlaces destacados',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 309,
          'height' => 70,
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
function govi_links_destacados_node_info() {
  $items = array(
    'enlace_destacado' => array(
      'name' => t('Enlace destacado'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para crear enlaces hacia un contenido destacado. El diseño es un boton especial con imágen asociada al tema'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
