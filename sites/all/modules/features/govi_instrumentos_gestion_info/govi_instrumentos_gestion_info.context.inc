<?php
/**
 * @file
 * govi_instrumentos_gestion_info.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_instrumentos_gestion_info_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'instrumentos_gestion';
  $context->description = 'Contexto para los elementos relacionados con la transparencia de la Entidad';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/instrumentos-gestion-informacion-publica/' => 'transparencia/instrumentos-gestion-informacion-publica/',
        'transparencia/instrumentos-gestion-informacion-publica/*' => 'transparencia/instrumentos-gestion-informacion-publica/*',
        'transparencia/instrumentos-gestion-informacion-publica' => 'transparencia/instrumentos-gestion-informacion-publica',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'instrumentos_clasificacion' => 'instrumentos_clasificacion',
        'instrumentos_tipo_documento' => 'instrumentos_tipo_documento',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-instrumentos-gestion' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-instrumentos-gestion',
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
  $export['instrumentos_gestion'] = $context;

  return $export;
}
