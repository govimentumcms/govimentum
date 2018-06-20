<?php
/**
 * @file
 * govi_presupuesto.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_presupuesto_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'presupuesto';
  $path_breadcrumb->name = 'Presupuesto';
  $path_breadcrumb->path = 'transparencia/presupuesto';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Presupuesto',
    ),
    'paths' => array(
      0 => '/transparencia',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -91;
  $export['presupuesto'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'presupuesto_ejecucion_home';
  $path_breadcrumb->name = 'Presupuesto ejecucion home';
  $path_breadcrumb->path = 'transparencia/presupuesto/ejecucion-presupuestal';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Presupuesto',
      2 => 'Ejecución presupuestal',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/presupuesto',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -100;
  $export['presupuesto_ejecucion_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'presupuesto_ejecucion_node';
  $path_breadcrumb->name = 'Presupuesto ejecucion node';
  $path_breadcrumb->path = 'node/%pejecucion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Presupuesto',
      2 => 'Ejecución presupuestal',
      3 => '%pejecucion:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/presupuesto',
      2 => 'transparencia/presupuesto/ejecucion-presupuestal',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'pejecucion' => array(
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
          'name' => 'entity_field_value:node:presupuesto:field_presupuesto_clasificacion',
          'settings' => array(
            'field_presupuesto_clasificacion' => array(
              'und' => array(
                0 => array(
                  'tid' => '50',
                ),
              ),
            ),
            'field_presupuesto_clasificacion_tid' => array(
              0 => '50',
            ),
          ),
          'context' => 'pejecucion',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -92;
  $export['presupuesto_ejecucion_node'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'presupuesto_estados_home';
  $path_breadcrumb->name = 'Presupuesto estados home';
  $path_breadcrumb->path = 'transparencia/presupuesto/estados-financieros';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Presupuesto',
      2 => 'Estados financieros',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/presupuesto',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -100;
  $export['presupuesto_estados_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'presupuesto_estados_node_clone';
  $path_breadcrumb->name = 'Presupuesto estados node';
  $path_breadcrumb->path = 'node/%pestados';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Presupuesto',
      2 => 'Estados financieros',
      3 => '%pestados:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/presupuesto',
      2 => 'transparencia/presupuesto/estados-financieros',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'pestados' => array(
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
          'name' => 'entity_field_value:node:presupuesto:field_presupuesto_clasificacion',
          'settings' => array(
            'field_presupuesto_clasificacion' => array(
              'und' => array(
                0 => array(
                  'tid' => '51',
                ),
              ),
            ),
            'field_presupuesto_clasificacion_tid' => array(
              0 => '51',
            ),
          ),
          'context' => 'pestados',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -92;
  $export['presupuesto_estados_node_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'presupuesto_general_home';
  $path_breadcrumb->name = 'Presupuesto general home';
  $path_breadcrumb->path = 'transparencia/presupuesto/general';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Presupuesto',
      2 => 'General',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/presupuesto',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -100;
  $export['presupuesto_general_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'presupuesto_general_node';
  $path_breadcrumb->name = 'Presupuesto general node';
  $path_breadcrumb->path = 'node/%pgeneral';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Presupuesto',
      2 => 'General',
      3 => '%pgeneral:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/presupuesto',
      2 => 'transparencia/presupuesto/general',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'pgeneral' => array(
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
          'name' => 'entity_field_value:node:presupuesto:field_presupuesto_clasificacion',
          'settings' => array(
            'field_presupuesto_clasificacion' => array(
              'und' => array(
                0 => array(
                  'tid' => '52',
                ),
              ),
            ),
            'field_presupuesto_clasificacion_tid' => array(
              0 => '52',
            ),
          ),
          'context' => 'pgeneral',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -92;
  $export['presupuesto_general_node'] = $path_breadcrumb;

  return $export;
}
