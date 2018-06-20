<?php
/**
 * @file
 * govi_marco_legal.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_marco_legal_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal';
  $path_breadcrumb->name = 'Marco legal';
  $path_breadcrumb->path = 'transparencia/marco-legal';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
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
  $path_breadcrumb->weight = -91;
  $export['marco_legal'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_lineamientos';
  $path_breadcrumb->name = 'Marco Legal Lineamientos';
  $path_breadcrumb->path = 'node/%lineamientos';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Lineamientos',
      3 => '%lineamientos:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/marco-legal',
      2 => 'transparencia/marco-legal/lineamientos',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'lineamientos' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        5 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/marco-legal/lineamientos/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        6 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'marco_legal' => 'marco_legal',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -93;
  $export['marco_legal_lineamientos'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_lineamientos_home';
  $path_breadcrumb->name = 'Marco Legal lineamientos home';
  $path_breadcrumb->path = 'transparencia/marco-legal/lineamientos';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Lineamientos',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/marco-legal',
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
            'paths' => 'transparencia/marco-legal/lineamientos',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -99;
  $export['marco_legal_lineamientos_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_lineamientos_terminos';
  $path_breadcrumb->name = 'Marco legal lineamientos terminos';
  $path_breadcrumb->path = 'taxonomy/term/%lineamientos';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Lineamientos',
      3 => '%lineamientos:name',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'trasnparencia/marco-legal',
      2 => 'transparencia/marco-legal/lineamientos',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'lineamientos' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vids' => array(
            9 => '9',
            8 => 0,
            10 => 0,
            11 => 0,
            12 => 0,
            1 => 0,
            4 => 0,
            5 => 0,
            6 => 0,
            3 => 0,
            7 => 0,
            13 => 0,
            2 => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '9',
            8 => array(),
            10 => array(),
            9 => array(
              27 => '27',
              25 => '25',
              26 => '26',
            ),
            11 => array(
              22 => '22',
              20 => '20',
              24 => '24',
              21 => '21',
              19 => '19',
              18 => '18',
              23 => '23',
              17 => '17',
            ),
            12 => array(),
            1 => array(),
            4 => array(),
            5 => array(),
            6 => array(),
            3 => array(),
            7 => array(),
            13 => array(),
            2 => array(),
          ),
          'context' => 'lineamientos',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -96;
  $export['marco_legal_lineamientos_terminos'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_normatividad';
  $path_breadcrumb->name = 'Marco Legal Normatividad';
  $path_breadcrumb->path = 'node/%normatividad';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Normatividad',
      3 => '%normatividad:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/marco-legal',
      2 => 'transparencia/marco-legal/normatividad',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'normatividad' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        5 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/marco-legal/normatividad/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        6 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'marco_legal' => 'marco_legal',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -92;
  $export['marco_legal_normatividad'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_normatividad_home';
  $path_breadcrumb->name = 'Marco Legal normatividad home';
  $path_breadcrumb->path = 'transparencia/marco-legal/normatividad';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Normatividad',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/marco-legal',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -100;
  $export['marco_legal_normatividad_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_normatividad_terminos';
  $path_breadcrumb->name = 'Marco legal normatividad terminos';
  $path_breadcrumb->path = 'taxonomy/term/%normatividad';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Normatividad',
      3 => '%normatividad:name',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/marco-legal',
      2 => 'transparencia/marco-legal/normatividad',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'normatividad' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vids' => array(
            11 => '11',
            8 => 0,
            10 => 0,
            9 => 0,
            12 => 0,
            1 => 0,
            4 => 0,
            5 => 0,
            6 => 0,
            3 => 0,
            7 => 0,
            13 => 0,
            2 => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '11',
            8 => array(),
            10 => array(),
            9 => array(),
            11 => array(
              22 => '22',
              20 => '20',
              24 => '24',
              21 => '21',
              19 => '19',
              18 => '18',
              23 => '23',
              17 => '17',
            ),
            12 => array(),
            1 => array(),
            4 => array(),
            5 => array(),
            6 => array(),
            3 => array(),
            7 => array(),
            13 => array(),
            2 => array(),
          ),
          'context' => 'normatividad',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -97;
  $export['marco_legal_normatividad_terminos'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_planes';
  $path_breadcrumb->name = 'Marco Legal Planes';
  $path_breadcrumb->path = 'node/%planes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Planes',
      3 => '%planes:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/marco-legal',
      2 => 'transparencia/marco-legal/planes',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'planes' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        5 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'transparencia/marco-legal/planes/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        6 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'marco_legal' => 'marco_legal',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -94;
  $export['marco_legal_planes'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_planes_home';
  $path_breadcrumb->name = 'Marco Legal planes home';
  $path_breadcrumb->path = 'transparencia/marco-legal/planes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Planes',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/marco-legal',
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
            'paths' => 'transparencia/marco-legal/planes',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -98;
  $export['marco_legal_planes_home'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'marco_legal_planes_terminos';
  $path_breadcrumb->name = 'Marco legal planes terminos';
  $path_breadcrumb->path = 'taxonomy/term/%planes';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Marco Legal',
      2 => 'Planes',
      3 => '%planes:name',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/marco-legal',
      2 => 'transparencia/marco-legal/planes',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'planes' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vids' => array(
            12 => '12',
            8 => 0,
            10 => 0,
            9 => 0,
            11 => 0,
            1 => 0,
            4 => 0,
            5 => 0,
            6 => 0,
            3 => 0,
            7 => 0,
            13 => 0,
            2 => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '12',
            8 => array(),
            10 => array(),
            9 => array(
              27 => '27',
              25 => '25',
              26 => '26',
            ),
            11 => array(
              22 => '22',
              20 => '20',
              24 => '24',
              21 => '21',
              19 => '19',
              18 => '18',
              23 => '23',
              17 => '17',
            ),
            12 => array(
              28 => '28',
              29 => '29',
            ),
            1 => array(),
            4 => array(),
            5 => array(),
            6 => array(),
            3 => array(),
            7 => array(),
            13 => array(),
            2 => array(),
          ),
          'context' => 'planes',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -95;
  $export['marco_legal_planes_terminos'] = $path_breadcrumb;

  return $export;
}
