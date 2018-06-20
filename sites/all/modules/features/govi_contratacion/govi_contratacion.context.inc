<?php
/**
 * @file
 * govi_contratacion.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_contratacion_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contratacion';
  $context->description = 'Contexto para los elementos relacionados con la transparencia de la Entidad';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contratacion' => 'contratacion',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/contratacion/*' => 'transparencia/contratacion/*',
        'transparencia/contratacion' => 'transparencia/contratacion',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-contratacion' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-contratacion',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para los elementos relacionados con la transparencia de la Entidad');
  t('Transparencia');
  $export['contratacion'] = $context;

  return $export;
}
