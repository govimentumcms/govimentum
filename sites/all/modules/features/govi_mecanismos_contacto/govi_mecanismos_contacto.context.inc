<?php
/**
 * @file
 * govi_mecanismos_contacto.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_mecanismos_contacto_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mecanismos_contacto';
  $context->description = 'Contexto para los elementos relacionados con los mecanismos de contacto';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'mecanismos_atencion_ciudadano' => 'mecanismos_atencion_ciudadano',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/atencion-ciudadano' => 'transparencia/atencion-ciudadano',
        'transparencia/atencion-ciudadano/*' => 'transparencia/atencion-ciudadano/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-transparencia-segundo-nivel' => array(
          'module' => 'menu',
          'delta' => 'menu-transparencia-segundo-nivel',
          'region' => 'posicion_e_1',
          'weight' => '-10',
        ),
        'menu-menu-menu-mecanismos-de-contacto' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-mecanismos-de-contacto',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para los elementos relacionados con los mecanismos de contacto');
  t('Transparencia');
  $export['mecanismos_contacto'] = $context;

  return $export;
}
