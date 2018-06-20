<?php
/**
 * @file
 * govi_informacion_interes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_informacion_interes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'informacion-interes';
  $context->description = '';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'convocatoria' => 'convocatoria',
        'documento' => 'documento',
        'glosario' => 'glosario',
        'preguntas_frecuentes' => 'preguntas_frecuentes',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/informacion-interes' => 'transparencia/informacion-interes',
        'transparencia/informacion-interes/*' => 'transparencia/informacion-interes/*',
        'transparencia/informacion-interes/convocatoria' => 'transparencia/informacion-interes/convocatoria',
        'transparencia/informacion-interes/convocatoria/*' => 'transparencia/informacion-interes/convocatoria/*',
        'transparencia/informacion-interes/convocatorias' => 'transparencia/informacion-interes/convocatorias',
        'transparencia/informacion-interes/convocatorias/*' => 'transparencia/informacion-interes/convocatorias/*',
        'transparencia/informacion-interes/publicaciones' => 'transparencia/informacion-interes/publicaciones',
        'transparencia/informacion-interes/publicaciones/*' => 'transparencia/informacion-interes/publicaciones/*',
        'transparencia/informacion-interes/publicacion' => 'transparencia/informacion-interes/publicacion',
        'transparencia/informacion-interes/publicacion/*' => 'transparencia/informacion-interes/publicacion/*',
        'noticias/*' => 'noticias/*',
        'noticias' => 'noticias',
        'noticia/*' => 'noticia/*',
        'calendario/month' => 'calendario/month',
        'calendario/month/*' => 'calendario/month/*',
        'transparencia/informacion-interes/faqs' => 'transparencia/informacion-interes/faqs',
        'transparencia/informacion-interes/faqs/*' => 'transparencia/informacion-interes/faqs/*',
        'transparencia/informacion-interes/glosario' => 'transparencia/informacion-interes/glosario',
        'transparencia/informacion-interes/glosario/*' => 'transparencia/informacion-interes/glosario/*',
        'transparencia/informacion-interes/informacion-ninos-ninas-adolecentes' => 'transparencia/informacion-interes/informacion-ninos-ninas-adolecentes',
        'transparencia/informacion-interes/informacion-ninos-ninas-adolecentes/*' => 'transparencia/informacion-interes/informacion-ninos-ninas-adolecentes/*',
        'transparencia/informacion-interes/informacion-adicional' => 'transparencia/informacion-interes/informacion-adicional',
        'transparencia/informacion-interes/informacion-adicional/*' => 'transparencia/informacion-interes/informacion-adicional/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-informacion-interes' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-informacion-interes',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Transparencia');
  $export['informacion-interes'] = $context;

  return $export;
}
