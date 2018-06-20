<?php
/**
 * @file
 * govi_tramites_servicios.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_tramites_servicios_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tramites_servicios';
  $context->description = 'Contexto para los elementos relacionados con trámites y servicios de la Entidad';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'tramites_servicios' => 'tramites_servicios',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/tramites-servicios/*' => 'transparencia/tramites-servicios/*',
        'transparencia/tramites-servicios' => 'transparencia/tramites-servicios',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'tramites_servicios_clasificacion' => 'tramites_servicios_clasificacion',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-tramites-servicios' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-tramites-servicios',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para los elementos relacionados con trámites y servicios de la Entidad');
  t('Transparencia');
  $export['tramites_servicios'] = $context;

  return $export;
}
