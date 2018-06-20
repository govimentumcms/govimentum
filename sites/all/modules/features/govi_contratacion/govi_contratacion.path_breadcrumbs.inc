<?php
/**
 * @file
 * govi_contratacion.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function govi_contratacion_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'contrataci_n_plan_anual_de_contrataciones';
  $path_breadcrumb->name = 'Contratación Plan anual de adquisiciones home';
  $path_breadcrumb->path = 'transparencia/contratacion/plan-anual-adquisiciones';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Contratacion',
      2 => 'Plan Anual de adquisiciones',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/contratacion/',
      2 => 'transparencia/contratacion/plan-anual-adquisiciones/',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -68;
  $export['contrataci_n_plan_anual_de_contrataciones'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'contratacion';
  $path_breadcrumb->name = 'Contratación';
  $path_breadcrumb->path = 'transparencia/contratacion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Contratación',
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
  $path_breadcrumb->weight = -67;
  $export['contratacion'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'contratacion_ejecucion_contratos';
  $path_breadcrumb->name = 'Contratación Ejecucion de Contratos';
  $path_breadcrumb->path = 'transparencia/contratacion/ejecucion_contratos';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Contratación',
      2 => 'Ejecución de Contratos',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/contratacion',
      2 => 'transparencia/contratacion/ejecucion_contratos',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -71;
  $export['contratacion_ejecucion_contratos'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'contratacion_informacion_contractual';
  $path_breadcrumb->name = 'Contratación Información Contractual';
  $path_breadcrumb->path = 'transparencia/contratacion/informacion_contractual';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Contratación',
      2 => 'Información Contractual',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/contratacion',
      2 => 'transparencia/contratacion/informacion_contractual',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -70;
  $export['contratacion_informacion_contractual'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'contratacion_manual_de_contrataciones';
  $path_breadcrumb->name = 'Contratación Manual de Contrataciones';
  $path_breadcrumb->path = 'transparencia/contratacion/manual_contratacion';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Transparencia',
      1 => 'Contratacion',
      2 => 'Manual de Contrataciones',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'transparencia/contratacion',
      2 => 'transparencia/contratacion/manual_contratacion',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -69;
  $export['contratacion_manual_de_contrataciones'] = $path_breadcrumb;

  return $export;
}
