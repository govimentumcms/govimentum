<?php
/**
 * @file
 * govi_contratacion.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function govi_contratacion_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-menu-contratacion_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos
  $menu_links['menu-menu-contratacion_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'link_path' => 'transparencia/contratacion/ejecucion_contratos',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Ejecución de contratos',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion/ejecución-contratos/*
transparencia/contratacion/ejecucion-contratos/',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-contratacion_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-contratacion_informacin-contractual:transparencia/contratacion/informacion_contractual
  $menu_links['menu-menu-contratacion_informacin-contractual:transparencia/contratacion/informacion_contractual'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'link_path' => 'transparencia/contratacion/informacion_contractual',
    'router_path' => 'transparencia/contratacion/informacion_contractual',
    'link_title' => 'Información contractual',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion/informacion_contractual
transparencia/contratacion/informacion-contractual
transparencia/contratacion/informacion_contractual/*
transparencia/contratacion/informacion-contractual/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-contratacion_informacin-contractual:transparencia/contratacion/informacion_contractual',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-contratacion_manual-de-contratacin:transparencia/contratacion/manual_contratacion
  $menu_links['menu-menu-contratacion_manual-de-contratacin:transparencia/contratacion/manual_contratacion'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'link_path' => 'transparencia/contratacion/manual_contrataciones',
    'router_path' => 'transparencia/contratacion/manual_contrataciones',
    'link_title' => 'Manual de contrataciones',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion/manual_contrataciones
transparencia/contratacion/manual_contrataciones/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-contratacion_manual-de-contratacin:transparencia/contratacion/manual_contratacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-menu-contratacion_plan-anual-de-adquisiciones:transparencia/contratacion/plan_anual_contrataciones
  $menu_links['menu-menu-contratacion_plan-anual-de-adquisiciones:transparencia/contratacion/plan_anual_contrataciones'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'link_path' => 'transparencia/contratacion/plan-anual-adquisiciones',
    'router_path' => 'transparencia/contratacion/plan-anual-adquisiciones',
    'link_title' => 'Plan anual de adquisiciones',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion/plan-anual-adquisiciones
transparencia/contratacion/plan-anual-adquisiciones/*
transparencia/contratacion/plan_anual_adquisiciones
transparencia/contratacion/plan_anual_adquisiciones/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-contratacion_plan-anual-de-adquisiciones:transparencia/contratacion/plan_anual_contrataciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ejecución de contratos');
  t('Información contractual');
  t('Manual de contrataciones');
  t('Plan anual de adquisiciones');


  return $menu_links;
}
