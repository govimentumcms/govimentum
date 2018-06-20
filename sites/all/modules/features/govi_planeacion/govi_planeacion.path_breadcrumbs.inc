<?php
/**
 * @file
 * govi_planeacion.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_planeacion_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeaci_n_informes_de_empalme';
  $path_breadcrumb->name = 'Planeación Informes de Empalme';
  $path_breadcrumb->path = 'node/%informes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Informes de empalme',
      3 => '%informes:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => 'transparencia/planeacion/informes-empalme',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'informes' => array(
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
            'paths' => 'transparencia/planeacion/informes-empalme/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'planeacion' => 'planeacion',
            ),
          ),
          'context' => 'informes',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['planeaci_n_informes_de_empalme'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion';
  $path_breadcrumb->name = 'Planeación';
  $path_breadcrumb->path = 'transparencia/planeacion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
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
  $path_breadcrumb->weight = -86;
  $export['planeacion'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_informes_empalme_home';
  $path_breadcrumb->name = 'Planeación Informes de Empalme Home';
  $path_breadcrumb->path = 'transparencia/planeacion/informes-empalme';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Informes de empalme',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -77;
  $export['planeacion_informes_empalme_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_metas_objetivos_indicadores';
  $path_breadcrumb->name = 'Planeación Metas Objetivos e Indicadores';
  $path_breadcrumb->path = 'node/%metas';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Metas objetivos e indicadores',
      3 => '%metas:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => 'transparencia/planeacion/metas-objetivos-indicadores',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'metas' => array(
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
            'paths' => 'transparencia/planeacion/metas-objetivos-e-indicadores/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'planeacion' => 'planeacion',
            ),
          ),
          'context' => 'metas',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -80;
  $export['planeacion_metas_objetivos_indicadores'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_metas_objetivos_indicadores_home';
  $path_breadcrumb->name = 'Planeación Metas Objetivos e Indicadores Home';
  $path_breadcrumb->path = 'transparencia/planeacion/metas-objetivos-indicadores';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Metas objetivos e indicadores',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -81;
  $export['planeacion_metas_objetivos_indicadores_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_participacion_ciudadana';
  $path_breadcrumb->name = 'Planeación Participación Ciudadana';
  $path_breadcrumb->path = 'node/%participacion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Participación Ciudadana',
      3 => '%participacion:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => 'transparencia/planeacion/participacion-ciudadana',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'participacion' => array(
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
            'paths' => 'transparencia/planeacion/participación-ciudadana/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'planeacion' => 'planeacion',
            ),
          ),
          'context' => 'participacion',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -78;
  $export['planeacion_participacion_ciudadana'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_participacion_ciudadana_home';
  $path_breadcrumb->name = 'Planeación Participación Ciudadana Home';
  $path_breadcrumb->path = 'transparencia/planeacion/participacion-ciudadana';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Participación Ciudadana',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -79;
  $export['planeacion_participacion_ciudadana_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_planes';
  $path_breadcrumb->name = 'Planeación Planes';
  $path_breadcrumb->path = 'node/%plaplanes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Planes',
      3 => '%plaplanes:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => 'transparencia/planeacion/planes',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'plaplanes' => array(
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
            'paths' => 'transparencia/planeacion/planes/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'planeacion' => 'planeacion',
            ),
          ),
          'context' => 'plaplanes',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -84;
  $export['planeacion_planes'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_planes_home';
  $path_breadcrumb->name = 'Planeación Planes Home';
  $path_breadcrumb->path = 'transparencia/planeacion/planes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Planes',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -85;
  $export['planeacion_planes_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_programas_proyectos';
  $path_breadcrumb->name = 'Planeación Programas y Proyectos';
  $path_breadcrumb->path = 'node/%programaspro';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Programas y proyectos',
      3 => '%programaspro:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => 'transparencia/planeacion/programas-proyectos',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'programaspro' => array(
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
            'paths' => 'transparencia/planeacion/programas-y-proyectos/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'planeacion' => 'planeacion',
            ),
          ),
          'context' => 'programaspro',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -82;
  $export['planeacion_programas_proyectos'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'planeacion_programas_proyectos_home';
  $path_breadcrumb->name = 'Planeación Programas y Proyectos Home';
  $path_breadcrumb->path = 'transparencia/planeacion/programas-proyectos';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Planeación',
      2 => 'Programas y Proyectos',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/planeacion',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -83;
  $export['planeacion_programas_proyectos_home'] = $path_breadcrumb;

  return $export;
}
