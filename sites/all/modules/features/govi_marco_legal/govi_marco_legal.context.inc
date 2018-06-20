<?php
/**
 * @file
 * govi_marco_legal.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_marco_legal_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marco_legal';
  $context->description = 'Contexto para los elementos relacionados con el marco legal de la Entidad';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'marco_legal' => 'marco_legal',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/marco-legal/*' => 'transparencia/marco-legal/*',
        'transparencia/marco-legal' => 'transparencia/marco-legal',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'marco_legal_clasificacion' => 'marco_legal_clasificacion',
        'marco_legal_lineamientos' => 'marco_legal_lineamientos',
        'marco_legal_lugares_expedicion' => 'marco_legal_lugares_expedicion',
        'marco_legal_normatividad' => 'marco_legal_normatividad',
        'marco_legal_planes' => 'marco_legal_planes',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-marco-legal' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-marco-legal',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para los elementos relacionados con el marco legal de la Entidad');
  t('Transparencia');
  $export['marco_legal'] = $context;

  return $export;
}
