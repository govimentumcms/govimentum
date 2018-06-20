<?php
/**
 * @file
 * govi_encabezado_institucional.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_encabezado_institucional_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_encabezado_institucional_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function govi_encabezado_institucional_image_default_styles() {
  $styles = array();

  // Exported image style: logo_header.
  $styles['logo_header'] = array(
    'label' => 'Logo header',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 60,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo_header_escudo.
  $styles['logo_header_escudo'] = array(
    'label' => 'logo header escudo',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 55,
          'upscale' => 1,
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
function govi_encabezado_institucional_node_info() {
  $items = array(
    'imagen_simple' => array(
      'name' => t('Imagen simple'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para impementar logos, banners, infografias e imagenes destacadas que pueden tener un enlace'),
      'has_title' => '1',
      'title_label' => t('Imagen simple'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
