<?php
/**
 * @file
 * govi_instrumentos_gestion_info.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_instrumentos_gestion_info_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'instrumentos_';
  $path_breadcrumb->name = 'Instrumentos ';
  $path_breadcrumb->path = 'transparencia/instrumentos-gestion-informacion-publica';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Instrumentos de gestión de info pública',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -65;
  $export['instrumentos_'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'instrumentos_gestion_docuemental_contenido';
  $path_breadcrumb->name = 'Instrumentos Gestión docuemental contenido';
  $path_breadcrumb->path = 'node/%gesdoc';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Instrumentos de gestión de info pública',
      2 => 'Gestión Documental',
      3 => '%gesdoc:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/instrumentos-gestion-informacion-publica',
      2 => 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'gesdoc' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/instrumentos-gestion-informacion-publica/gestión-documental/*
transparencia/instrumentos-gestion-informacion-publica/gestion-documental/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
            ),
          ),
          'context' => 'gesdoc',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -61;
  $export['instrumentos_gestion_docuemental_contenido'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'instrumentos_gestion_documental';
  $path_breadcrumb->name = 'Instrumentos Gestión documental';
  $path_breadcrumb->path = 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Instrumentos de gestión de información pública',
      2 => 'Gestión docuemental',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/instrumentos-gestion-informacion-publica',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -62;
  $export['instrumentos_gestion_documental'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'instrumentos_informe_pqrs_contenidos';
  $path_breadcrumb->name = 'Instrumentos Informe PQRS contenidos';
  $path_breadcrumb->path = 'node/%pqrsd';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Instrumentos de gestión de info pública',
      2 => 'Informe de PQRS y denuncias',
      3 => '%pqrsd:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'ransparencia/instrumentos-gestion-informacion-publica',
      2 => 'ransparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'pqrsd' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes/*
transparencia/instrumentos-gestion-informacion-publica/informe-peticiones-quejas-reclamos-denuncias-y-solicitudes-acceso-información/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
            ),
          ),
          'context' => 'pqrsd',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -59;
  $export['instrumentos_informe_pqrs_contenidos'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'instrumentos_informes_pqrs_denuncias';
  $path_breadcrumb->name = 'Instrumentos informes PQRS y denuncias';
  $path_breadcrumb->path = 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Instrumentos de gestión de info pública',
      2 => 'Informe de PQRS y denuncias',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/instrumentos-gestion-informacion-publica',
      2 => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -60;
  $export['instrumentos_informes_pqrs_denuncias'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'instrumentos_relacionados_informacion';
  $path_breadcrumb->name = 'Instrumentos Relacionados con la Información';
  $path_breadcrumb->path = 'transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Instrumentos de gestión de la info pública',
      2 => 'Relacionados con la Información',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/instrumentos-gestion-informacion-publica',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -64;
  $export['instrumentos_relacionados_informacion'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'instrumentos_relacionados_informacion_contenido';
  $path_breadcrumb->name = 'Instrumentos Relacionados con la Información contenido';
  $path_breadcrumb->path = 'node/%relinfo';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Instrumentos de gestión de info pública',
      2 => 'Relacionados con la Información',
      3 => '%relinfo:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/instrumentos-gestion-informacion-publica',
      2 => 'transparencia/instrumentos-gestion-informacion-publica/relacionados-información/',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'relinfo' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/instrumentos-gestion-informacion-publica/relacionados-información/*
transparencia/instrumentos-gestion-informacion-publica/relacionados-información/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
            ),
          ),
          'context' => 'relinfo',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -63;
  $export['instrumentos_relacionados_informacion_contenido'] = $path_breadcrumb;

  return $export;
}
