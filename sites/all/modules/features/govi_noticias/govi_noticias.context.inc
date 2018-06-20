<?php
/**
 * @file
 * govi_noticias.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_noticias_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lista_noticias';
  $context->description = 'Contexto que define los elementos relacionados con las noticias';
  $context->tag = 'noticias';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'noticia' => 'noticia',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'noticias' => 'noticias',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-pagina_noticias-page' => array(
          'module' => 'views',
          'delta' => '-exp-pagina_noticias-page',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
        'views-noticias_relacionadas-block' => array(
          'module' => 'views',
          'delta' => 'noticias_relacionadas-block',
          'region' => 'posicion_e_3',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto que define los elementos relacionados con las noticias');
  t('noticias');
  $export['lista_noticias'] = $context;

  return $export;
}
