<?php
/**
 * @file
 * govi_informacion_interes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_informacion_interes_ctools_plugin_api($module = NULL, $api = NULL) {
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
function govi_informacion_interes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_informacion_interes_node_info() {
  $items = array(
    'convocatoria' => array(
      'name' => t('Convocatoria'),
      'base' => 'node_content',
      'description' => t('Gestiona las convocatorias de la entidad o relacionadas, hace parte de la Información de Interés'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'documento' => array(
      'name' => t('2. Información de interés'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar los documentos relacionados con Estudios, Investigaciones, Otras publicaciones e Información adicional de la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
    'glosario' => array(
      'name' => t('2.5 Glosario'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar el glosario de términos relacionados con la Entidad.'),
      'has_title' => '1',
      'title_label' => t('Termino'),
      'help' => '',
    ),
    'preguntas_frecuentes' => array(
      'name' => t('2.4 Preguntas y respuestas frecuentes'),
      'base' => 'node_content',
      'description' => t('Con este tipo de contenido puede gestionar las preguntas y respuestas frecuentes de Entidad'),
      'has_title' => '1',
      'title_label' => t('Pregunta'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
