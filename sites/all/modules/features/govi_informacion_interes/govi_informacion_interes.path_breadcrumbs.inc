<?php
/**
 * @file
 * govi_informacion_interes.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_informacion_interes_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'convocatoria';
  $path_breadcrumb->name = 'Convocatoria';
  $path_breadcrumb->path = 'node/%convocatoria';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Información de Interés',
      2 => 'Convocatorias',
      3 => '%convocatoria:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => 'transparencia/informacion-interes/convocatorias',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'convocatoria' => array(
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'convocatoria' => 'convocatoria',
            ),
          ),
          'context' => 'convocatoria',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/informacion-interes/convocatorias/*
transparencia/informacion-interes/convocatoria/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -50;
  $export['convocatoria'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'convocatorias';
  $path_breadcrumb->name = 'Convocatorias Home';
  $path_breadcrumb->path = 'transparencia/informacion-interes/convocatorias';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Trasparencia',
      1 => 'Información de Interés',
      2 => 'Convocatorias',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -49;
  $export['convocatorias'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'estudios_investigaciones_otras_publicaciones';
  $path_breadcrumb->name = 'Estudios, investigaciones y otras publicaciones Home';
  $path_breadcrumb->path = 'transparencia/informacion-interes/publicaciones';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Estudios, investigaciones y otras publicaciones',
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
  $path_breadcrumb->weight = -51;
  $export['estudios_investigaciones_otras_publicaciones'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'estudios_investigaciones_y_otras_publicaciones';
  $path_breadcrumb->name = 'Estudios, investigaciones y otras publicaciones';
  $path_breadcrumb->path = 'node/%publicaciones';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Estudios, investigaciones y otras publicaciones',
      2 => '%publicaciones:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/informacion-interes/publicaciones',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'publicaciones' => array(
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
            'paths' => 'transparencia/informacion-interes/publicaciones/*
transparencia/informacion-interes/publicacion/estudios/*
transparencia/informacion-interes/publicacion/investigaciones/*
transparencia/informacion-interes/publicacion/otras-publicaciones/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'documento' => 'documento',
            ),
          ),
          'context' => 'publicaciones',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -52;
  $export['estudios_investigaciones_y_otras_publicaciones'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'faqs';
  $path_breadcrumb->name = 'FAQS';
  $path_breadcrumb->path = 'node/%pregunta';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Información e Interés',
      2 => 'FAQS',
      3 => '%pregunta:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => 'transparencia/informacion-interes/faqs',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'pregunta' => array(
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'preguntas_frecuentes' => 'preguntas_frecuentes',
            ),
          ),
          'context' => 'pregunta',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/informacion-interes/faqs/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['faqs'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'faqs_home';
  $path_breadcrumb->name = 'FAQS Home';
  $path_breadcrumb->path = 'transparencia/informacion-interes/faqs';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Información de Interés',
      2 => 'FAQS',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['faqs_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'glosario';
  $path_breadcrumb->name = 'Glosario';
  $path_breadcrumb->path = 'node/%glosario';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Información de Interés',
      2 => 'Glosario',
      3 => '%glosario:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => 'transparencia/informacion-interes/glosario',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'glosario' => array(
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
            'paths' => 'transparencia/informacion-interes/glosario/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'glosario' => 'glosario',
            ),
          ),
          'context' => 'glosario',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['glosario'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'glosario_home';
  $path_breadcrumb->name = 'Glosario home';
  $path_breadcrumb->path = 'transparencia/informacion-interes/glosario';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Información de Interés',
      2 => 'Glosario',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['glosario_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'informacion_adicional_home';
  $path_breadcrumb->name = 'Información Adicional Home';
  $path_breadcrumb->path = 'transparencia/informacion-interes/informacion-adicional';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Información de Interés',
      2 => 'Información adicional',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -55;
  $export['informacion_adicional_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'informacion_adicional_node';
  $path_breadcrumb->name = 'Información Adicional';
  $path_breadcrumb->path = 'node/%info_add';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Información de Interés',
      2 => 'Información adicional',
      3 => '%info_add:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => 'transparencia/informacion-interes/informacion-adicional',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'info_add' => array(
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'documento' => 'documento',
            ),
          ),
          'context' => 'info_add',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/informacion-interes/publicacion/información-adicional/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['informacion_adicional_node'] = $path_breadcrumb;

  return $export;
}
