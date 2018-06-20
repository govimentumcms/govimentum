<?php
/**
 * @file
 * govi_control.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_control_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control';
  $path_breadcrumb->name = 'Control';
  $path_breadcrumb->path = 'transparencia/control';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -55;
  $export['control'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_defensa_judicial';
  $path_breadcrumb->name = 'Control Defensa Judicial';
  $path_breadcrumb->path = 'transparencia/control/defensa-judicial';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Defensa judicial',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/defensa-judicial',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -44;
  $export['control_defensa_judicial'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_defensa_judicial_contenido';
  $path_breadcrumb->name = 'Control Defensa Judicial contenido';
  $path_breadcrumb->path = 'node/%condejudicial';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Defensa judicial',
      3 => '%condejudicial:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => 'transparencia/control/defensa-judicial',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'condejudicial' => array(
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
              'control' => 'control',
            ),
          ),
          'context' => 'condejudicial',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/defensa-judicial/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -43;
  $export['control_defensa_judicial_contenido'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_entes_control_vigilancia_mecanismos_contenido';
  $path_breadcrumb->name = 'Control Entes De Control, Vigilancia Y Mecanismos contenido';
  $path_breadcrumb->path = 'node/%entescontrol';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Entes de control, vigilancia y mecanismos de supervición',
      3 => '%entescontrol:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'entescontrol' => array(
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
              'control' => 'control',
            ),
          ),
          'context' => 'entescontrol',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion/*
transparencia/control/entes-control-vigilancia-y-mecanismos-supervición/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -49;
  $export['control_entes_control_vigilancia_mecanismos_contenido'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_entes_control_vigilancia_mecanismos_de_supervicion';
  $path_breadcrumb->name = 'Control Entes De Control, Vigilancia Y Mecanismos De Supervición';
  $path_breadcrumb->path = 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Entes de control, vigilancia y mecanismos de supervición',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -50;
  $export['control_entes_control_vigilancia_mecanismos_de_supervicion'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_informacion_para_poblacion_vulnerable';
  $path_breadcrumb->name = 'Control información para población vulnerable';
  $path_breadcrumb->path = 'transparencia/control/informacion-poblacion-vulnerable';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Información para población vulnerable',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/informacion-poblacion-vulnerable',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -46;
  $export['control_informacion_para_poblacion_vulnerable'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_informacion_para_poblacion_vulnerable_contenido';
  $path_breadcrumb->name = 'Control información para población vulnerable contenido';
  $path_breadcrumb->path = 'node/%infopoblacion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Información para población vulnerable',
      3 => '%infopoblacion:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => 'transparencia/control/informacion-poblacion-vulnerable',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'infopoblacion' => array(
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
              'control' => 'control',
            ),
          ),
          'context' => 'infopoblacion',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/informacion-poblacion-vulnerable/*
transparencia/control/información-población-vulnerable/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -45;
  $export['control_informacion_para_poblacion_vulnerable_contenido'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_informes_gestion_evaluacion_auditoria';
  $path_breadcrumb->name = 'control informes de gestión, evaluación y auditoria';
  $path_breadcrumb->path = 'transparencia/control/informes-gestion-evaluacion-auditoria';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Informes de gestión, evaluación y auditoria',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/informes-gestion-evaluacion-auditoria',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -54;
  $export['control_informes_gestion_evaluacion_auditoria'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_informes_gestion_evaluacion_auditoria_contenido';
  $path_breadcrumb->name = 'Control informes de gestión, evaluación y auditoria contenido';
  $path_breadcrumb->path = 'node/%informesgestion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Informes de gestión, evaluación y auditoria',
      3 => '%informesgestion:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => 'transparencia/control/informes-gestion-evaluacion-auditoria',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'informesgestion' => array(
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
              'control' => 'control',
            ),
          ),
          'context' => 'informesgestion',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/informes-gestion-evaluacion-auditoria/*
transparencia/control/informes-gestión-evaluación-y-auditoria/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -53;
  $export['control_informes_gestion_evaluacion_auditoria_contenido'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_planes_de_mejoramiento';
  $path_breadcrumb->name = 'Control Planes de mejoramiento';
  $path_breadcrumb->path = 'transparencia/control/planes-mejoramiento';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Planes de mejoramiento',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/planes-mejoramiento',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -48;
  $export['control_planes_de_mejoramiento'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_planes_mejoramiento_contenido';
  $path_breadcrumb->name = 'Control Planes de mejoramiento contenido';
  $path_breadcrumb->path = 'node/%planesmejoramiento';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Planes de mejoramiento',
      3 => '%planesmejoramiento:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => 'transparencia/control/planes-mejoramiento',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'planesmejoramiento' => array(
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
              'control' => 'control',
            ),
          ),
          'context' => 'planesmejoramiento',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/planes-mejoramiento/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -47;
  $export['control_planes_mejoramiento_contenido'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_reportes_de_control_interno';
  $path_breadcrumb->name = 'Control reportes de control interno';
  $path_breadcrumb->path = 'transparencia/control/reportes-control-interno';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Reportes de control interno',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/reportes-control-interno',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -52;
  $export['control_reportes_de_control_interno'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'control_reportes_de_control_interno_contenido';
  $path_breadcrumb->name = 'Control reportes de control interno contenido';
  $path_breadcrumb->path = 'node/%reportescontint';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Control',
      2 => 'Reportes de control interno',
      3 => '%reportescontint:title',
    ),
    'paths' => array(
      0 => 'transparencia',
      1 => 'transparencia/control',
      2 => 'transparencia/control/reportes-control-interno',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'reportescontint' => array(
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
              'control' => 'control',
            ),
          ),
          'context' => 'reportescontint',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/control/reportes-control-interno/*
',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -51;
  $export['control_reportes_de_control_interno_contenido'] = $path_breadcrumb;

  return $export;
}
