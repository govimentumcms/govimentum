<?php
/**
 * @file
 * govi_servicio_al_ciudadano.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_servicio_al_ciudadano_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_servicio_al_ciudadano_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function govi_servicio_al_ciudadano_image_default_styles() {
  $styles = array();

  // Exported image style: banner_servicio_ciudadano.
  $styles['banner_servicio_ciudadano'] = array(
    'label' => 'Banner de servicio al ciudadano',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
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
function govi_servicio_al_ciudadano_node_info() {
  $items = array(
    'enlaces_servicio_ciudadano' => array(
      'name' => t('Enlaces Servicio al Ciudadano'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar los enlaces en el bloque servicio al ciudadano y en el dropdown mas servicios'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sdqs_logs' => array(
      'name' => t('SDQS Logs'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido que registra información básica sobre las peticiones realizadas a través del módulo govi_sdqs con el fin de proveer trazabilidad entre ambos sistemas'),
      'has_title' => '1',
      'title_label' => t('cod_radicado'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
