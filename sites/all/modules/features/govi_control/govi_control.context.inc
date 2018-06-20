<?php
/**
 * @file
 * govi_control.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_control_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'control';
  $context->description = 'Contexto para los elementos relacionados con el control de la Entidad';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'control' => 'control',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/control' => 'transparencia/control',
        'transparencia/control/*' => 'transparencia/control/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'control_clasificacion' => 'control_clasificacion',
        'control_tipo_de_informes_de_gestion' => 'control_tipo_de_informes_de_gestion',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-control' => array(
          'module' => 'menu',
          'delta' => 'menu-control',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para los elementos relacionados con el control de la Entidad');
  t('Transparencia');
  $export['control'] = $context;

  return $export;
}
