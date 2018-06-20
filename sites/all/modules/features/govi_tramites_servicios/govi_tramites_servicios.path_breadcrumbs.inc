<?php
/**
 * @file
 * govi_tramites_servicios.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_tramites_servicios_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'tramites_servicios';
  $path_breadcrumb->name = 'Trámites y Servicios';
  $path_breadcrumb->path = 'node/%tramites';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Trámites y Servicios',
      2 => '%tramites:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/tramites-servicios',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'tramites' => array(
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
            'paths' => 'transparencia/tramites-servicios/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'tramites_servicios' => 'tramites_servicios',
            ),
          ),
          'context' => 'tramites',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -57;
  $export['tramites_servicios'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'tramites_servicios_home';
  $path_breadcrumb->name = 'Trámites y Servicios Home';
  $path_breadcrumb->path = 'transparencia/tramites-servicios';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Trámites y Servicios',
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
  $path_breadcrumb->weight = -58;
  $export['tramites_servicios_home'] = $path_breadcrumb;

  return $export;
}
