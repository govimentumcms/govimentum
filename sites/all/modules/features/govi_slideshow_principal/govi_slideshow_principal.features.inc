<?php
/**
 * @file
 * govi_slideshow_principal.features.inc
 */

/**
 * Implements hook_views_api().
 */
function govi_slideshow_principal_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function govi_slideshow_principal_image_default_styles() {
  $styles = array();

  // Exported image style: main_slideshow.
  $styles['main_slideshow'] = array(
    'label' => 'Slideshow principal',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 970,
          'height' => 270,
          'upscale' => 0,
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
function govi_slideshow_principal_node_info() {
  $items = array(
    'main_slideshow' => array(
      'name' => t('Slideshow principal'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para publicar las imágenes destacadas en la sección principal del parallax'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
