<?php
/**
 * @file
 * govi_presupuesto.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_presupuesto_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'presupuesto';
  $context->description = 'Contexto para la sección de información presupuestal de la Entidad';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'presupuesto' => 'presupuesto',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/presupuesto/*' => 'transparencia/presupuesto/*',
        'transparencia/presupuesto' => 'transparencia/presupuesto',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'presupuesto_clasificacion' => 'presupuesto_clasificacion',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-presupuesto' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-presupuesto',
          'region' => 'posicion_e_3',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para la sección de información presupuestal de la Entidad');
  t('Transparencia');
  $export['presupuesto'] = $context;

  return $export;
}
