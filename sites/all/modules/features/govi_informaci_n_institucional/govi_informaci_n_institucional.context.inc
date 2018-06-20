<?php
/**
 * @file
 * govi_informaci_n_institucional.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_informaci_n_institucional_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'organizacion';
  $context->description = 'Contexto para los elementos relacionados con la información institucional';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'transparencia/organizacion' => 'transparencia/organizacion',
        'transparencia/organizacion/*' => 'transparencia/organizacion/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-organizacion' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-organizacion',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para los elementos relacionados con la información institucional');
  t('Transparencia');
  $export['organizacion'] = $context;

  return $export;
}
