<?php
/**
 * @file
 * govi_directorio_funcionarios.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_directorio_funcionarios_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'directorio_funcionarios';
  $context->description = 'Contexto para los elementos del directorio de funcionarios relacionados con la información institucional';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'organizacion/directorio-funcionarios' => 'organizacion/directorio-funcionarios',
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
  t('Contexto para los elementos del directorio de funcionarios relacionados con la información institucional');
  t('Transparencia');
  $export['directorio_funcionarios'] = $context;

  return $export;
}
