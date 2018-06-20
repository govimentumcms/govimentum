<?php
/**
 * @file
 * govi_planeacion.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_planeacion_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-planeacion_informes-de-empalme:transparencia/planeacion/informes-empalme.
  $menu_links['menu-menu-planeacion_informes-de-empalme:transparencia/planeacion/informes-empalme'] = array(
    'menu_name' => 'menu-menu-planeacion',
    'link_path' => 'transparencia/planeacion/informes-empalme',
    'router_path' => 'transparencia',
    'link_title' => 'Informes de empalme',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/planeacion/informes-empalme
transparencia/planeacion/informes-empalme/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-planeacion_informes-de-empalme:transparencia/planeacion/informes-empalme',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-planeacion_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores.
  $menu_links['menu-menu-planeacion_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores'] = array(
    'menu_name' => 'menu-menu-planeacion',
    'link_path' => 'transparencia/planeacion/metas-objetivos-indicadores',
    'router_path' => 'transparencia',
    'link_title' => 'Metas, objetivos e indicadores',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/planeacion/metas-objetivos-indicadores
transparencia/planeacion/metas-objetivos-indicadores/*
transparencia/planeacion/metas-objetivos-e-indicadores
transparencia/planeacion/metas-objetivos-e-indicadores/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-planeacion_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-planeacion_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana.
  $menu_links['menu-menu-planeacion_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana'] = array(
    'menu_name' => 'menu-menu-planeacion',
    'link_path' => 'transparencia/planeacion/participacion-ciudadana',
    'router_path' => 'transparencia',
    'link_title' => 'Participación ciudadana',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/planeacion/participacion-ciudadana
transparencia/planeacion/participacion-ciudadana/*
transparencia/planeacion/participación-ciudadana
transparencia/planeacion/participación-ciudadana/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-planeacion_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-planeacion_plan-de-gasto-pblico:transparencia/planeacion/plan-de-gasto-publico.
  $menu_links['menu-menu-planeacion_plan-de-gasto-pblico:transparencia/planeacion/plan-de-gasto-publico'] = array(
    'menu_name' => 'menu-menu-planeacion',
    'link_path' => 'transparencia/planeacion/plan-de-gasto-publico',
    'router_path' => 'transparencia/planeacion/plan-de-gasto-publico',
    'link_title' => 'Plan de gasto público',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-planeacion_plan-de-gasto-pblico:transparencia/planeacion/plan-de-gasto-publico',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-planeacion_polticas-lineamientos-y-manuales:transparencia/planeacion/planes.
  $menu_links['menu-menu-planeacion_polticas-lineamientos-y-manuales:transparencia/planeacion/planes'] = array(
    'menu_name' => 'menu-menu-planeacion',
    'link_path' => 'transparencia/planeacion/planes',
    'router_path' => 'transparencia/planeacion/planes',
    'link_title' => 'Políticas, lineamientos y manuales',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/planeacion/planes
transparencia/planeacion/planes/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-planeacion_polticas-lineamientos-y-manuales:transparencia/planeacion/planes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-planeacion_programas-y-proyectos:transparencia/planeacion/programas-proyectos.
  $menu_links['menu-menu-planeacion_programas-y-proyectos:transparencia/planeacion/programas-proyectos'] = array(
    'menu_name' => 'menu-menu-planeacion',
    'link_path' => 'transparencia/planeacion/programas-proyectos',
    'router_path' => 'transparencia',
    'link_title' => 'Programas y Proyectos',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/planeacion/programas-proyectos
transparencia/planeacion/programas-proyectos/*
transparencia/planeacion/programas-y-proyectos
transparencia/planeacion/programas-y-proyectos/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-planeacion_programas-y-proyectos:transparencia/planeacion/programas-proyectos',
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
  t('Informes de empalme');
  t('Metas, objetivos e indicadores');
  t('Participación ciudadana');
  t('Plan de gasto público');
  t('Políticas, lineamientos y manuales');
  t('Programas y Proyectos');

  return $menu_links;
}
