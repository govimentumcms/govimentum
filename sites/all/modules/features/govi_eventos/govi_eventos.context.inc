<?php
/**
 * @file
 * govi_eventos.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_eventos_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventos';
  $context->description = 'bloque eventos';
  $context->tag = 'eventos';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'eventos' => 'eventos',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'eventos' => 'eventos',
        'eventos:page' => 'eventos:page',
        'eventos:page_1' => 'eventos:page_1',
        'eventos:page_2' => 'eventos:page_2',
        'eventos:page_3' => 'eventos:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-eventos-block_1' => array(
          'module' => 'views',
          'delta' => 'eventos-block_1',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bloque eventos');
  t('eventos');
  $export['eventos'] = $context;

  return $export;
}
