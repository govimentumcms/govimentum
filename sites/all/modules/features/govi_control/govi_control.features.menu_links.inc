<?php
/**
 * @file
 * govi_control.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_control_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-control_defensa-judicial:transparencia/control/defensa-judicial.
  $menu_links['menu-control_defensa-judicial:transparencia/control/defensa-judicial'] = array(
    'menu_name' => 'menu-control',
    'link_path' => 'transparencia/control/defensa-judicial',
    'router_path' => 'transparencia/control/defensa-judicial',
    'link_title' => 'Defensa judicial',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/control/defensa-judicial
transparencia/control/defensa-judicial/*
',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-control_defensa-judicial:transparencia/control/defensa-judicial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-control_entes-de-control-vigilancia-y-mecanismos-de-supervicin:transparencia/control/entes-control-vigilancia-mecanismos-supervicion.
  $menu_links['menu-control_entes-de-control-vigilancia-y-mecanismos-de-supervicin:transparencia/control/entes-control-vigilancia-mecanismos-supervicion'] = array(
    'menu_name' => 'menu-control',
    'link_path' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
    'router_path' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
    'link_title' => 'Entes de control, vigilancia y mecanismos de supervición',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion
transparencia/control/entes-control-vigilancia-mecanismos-supervicion/*
transparencia/control/entes-control-vigilancia-y-mecanismos-supervición
transparencia/control/entes-control-vigilancia-y-mecanismos-supervición/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-control_entes-de-control-vigilancia-y-mecanismos-de-supervicin:transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-control_informacin-para-poblacin-vulnerable:transparencia/control/informacion-poblacion-vulnerable.
  $menu_links['menu-control_informacin-para-poblacin-vulnerable:transparencia/control/informacion-poblacion-vulnerable'] = array(
    'menu_name' => 'menu-control',
    'link_path' => 'transparencia/control/informacion-poblacion-vulnerable',
    'router_path' => 'transparencia/control/informacion-poblacion-vulnerable',
    'link_title' => 'Información para población vulnerable',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/control/informacion-poblacion-vulnerable
transparencia/control/informacion-poblacion-vulnerable/*
transparencia/control/información-población-vulnerable
transparencia/control/información-población-vulnerable/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-control_informacin-para-poblacin-vulnerable:transparencia/control/informacion-poblacion-vulnerable',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-control_informes-de-gestin-evaluacin-y-auditoria:transparencia/control/informes-gestion-evaluacion-auditoria.
  $menu_links['menu-control_informes-de-gestin-evaluacin-y-auditoria:transparencia/control/informes-gestion-evaluacion-auditoria'] = array(
    'menu_name' => 'menu-control',
    'link_path' => 'transparencia/control/informes-gestion-evaluacion-auditoria',
    'router_path' => 'transparencia/control/informes-gestion-evaluacion-auditoria',
    'link_title' => 'Informes de gestión, evaluación y auditoria',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/control/informes-gestion-evaluacion-auditoria
transparencia/control/informes-gestion-evaluacion-auditoria/*
transparencia/control/informes-gestión-evaluación-y-auditoria
transparencia/control/informes-gestión-evaluación-y-auditoria/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-control_informes-de-gestin-evaluacin-y-auditoria:transparencia/control/informes-gestion-evaluacion-auditoria',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-control_planes-de-mejoramiento:transparencia/control/planes-mejoramiento.
  $menu_links['menu-control_planes-de-mejoramiento:transparencia/control/planes-mejoramiento'] = array(
    'menu_name' => 'menu-control',
    'link_path' => 'transparencia/control/planes-mejoramiento',
    'router_path' => 'transparencia/control/planes-mejoramiento',
    'link_title' => 'Planes de mejoramiento',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/control/planes-mejoramiento
transparencia/control/planes-mejoramiento/*
',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-control_planes-de-mejoramiento:transparencia/control/planes-mejoramiento',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-control_reportes-de-control-interno:transparencia/control/reportes-control-interno.
  $menu_links['menu-control_reportes-de-control-interno:transparencia/control/reportes-control-interno'] = array(
    'menu_name' => 'menu-control',
    'link_path' => 'transparencia/control/reportes-control-interno',
    'router_path' => 'transparencia/control/reportes-control-interno',
    'link_title' => 'Reportes de control interno',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/control/reportes-control-interno
transparencia/control/reportes-control-interno/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-control_reportes-de-control-interno:transparencia/control/reportes-control-interno',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Defensa judicial');
  t('Entes de control, vigilancia y mecanismos de supervición');
  t('Información para población vulnerable');
  t('Informes de gestión, evaluación y auditoria');
  t('Planes de mejoramiento');
  t('Reportes de control interno');

  return $menu_links;
}
