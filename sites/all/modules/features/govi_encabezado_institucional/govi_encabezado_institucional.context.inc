<?php
/**
 * @file
 * govi_encabezado_institucional.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function govi_encabezado_institucional_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menus_segundo_nivel';
  $context->description = 'habilita el menu tranparencia en las paginas internas';
  $context->tag = 'Transparencia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contratacion' => 'contratacion',
        'control' => 'control',
        'convocatoria' => 'convocatoria',
        'directorio_funcionarios' => 'directorio_funcionarios',
        'documento' => 'documento',
        'glosario' => 'glosario',
        'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
        'marco_legal' => 'marco_legal',
        'organizacion' => 'organizacion',
        'planeacion' => 'planeacion',
        'preguntas_frecuentes' => 'preguntas_frecuentes',
        'presupuesto' => 'presupuesto',
        'tramites_servicios' => 'tramites_servicios',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'transparencia/marco-legal/*' => 'transparencia/marco-legal/*',
        'transparencia/marco-legal' => 'transparencia/marco-legal',
        'transparencia/organizacion/*' => 'transparencia/organizacion/*',
        'transparencia/organizacion' => 'transparencia/organizacion',
        'transparencia/planeacion/*' => 'transparencia/planeacion/*',
        'transparencia/planeacion' => 'transparencia/planeacion',
        'transparencia/contratacion/*' => 'transparencia/contratacion/*',
        'transparencia/contratacion' => 'transparencia/contratacion',
        'transparencia/presupuesto/*' => 'transparencia/presupuesto/*',
        'transparencia/presupuesto' => 'transparencia/presupuesto',
        'transparencia/instrumentos-gestion-informacion-publica/*' => 'transparencia/instrumentos-gestion-informacion-publica/*',
        'transparencia/instrumentos-gestion-informacion-publica' => 'transparencia/instrumentos-gestion-informacion-publica',
        'transparencia/tramites-servicios/*' => 'transparencia/tramites-servicios/*',
        'transparencia/tramites-servicios' => 'transparencia/tramites-servicios',
        'transparencia/control' => 'transparencia/control',
        'transparencia/control/*' => 'transparencia/control/*',
        'transparencia/informacion-interes' => 'transparencia/informacion-interes',
        'transparencia/informacion-interes/*' => 'transparencia/informacion-interes/*',
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
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Transparencia');
  t('habilita el menu tranparencia en las paginas internas');
  $export['menus_segundo_nivel'] = $context;

  return $export;
}
