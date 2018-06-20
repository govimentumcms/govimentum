<?php
/**
 * @file
 * govi_planeacion.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_planeacion_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'planeacion';
  $context->description = 'planeacion';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'planeacion' => 'planeacion',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/planeacion/*' => 'transparencia/planeacion/*',
        'transparencia/planeacion' => 'transparencia/planeacion',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'planeacion_clasificacion' => 'planeacion_clasificacion',
        'planeacion_clasificacion_metas_indicadores' => 'planeacion_clasificacion_metas_indicadores',
        'planeacion_clasificacion_planes' => 'planeacion_clasificacion_planes',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-planeacion' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-planeacion',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Transparencia');
  t('planeacion');
  $export['planeacion'] = $context;

  return $export;
}
