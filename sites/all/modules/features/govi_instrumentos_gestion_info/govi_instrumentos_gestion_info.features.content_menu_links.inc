<?php
/**
 * @file
 * govi_instrumentos_gestion_info.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function govi_instrumentos_gestion_info_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-menu-instrumentos-gestion_gestin-documental:transparencia/instrumentos-gestion-informacion-publica/gestion-documental
  $menu_links['menu-menu-instrumentos-gestion_gestin-documental:transparencia/instrumentos-gestion-informacion-publica/gestion-documental'] = array(
    'menu_name' => 'menu-menu-instrumentos-gestion',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental',
    'router_path' => 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental',
    'link_title' => 'Gestión documental',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental
transparencia/instrumentos-gestion-informacion-publica/gestion-documental/*
transparencia/instrumentos-gestion-informacion-publica/gestión-documental/*
transparencia/instrumentos-gestion-informacion-publica/gestión-documental',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-instrumentos-gestion_gestin-documental:transparencia/instrumentos-gestion-informacion-publica/gestion-documental',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-instrumentos-gestion_informe-de-pqrs-y-denuncias:transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes
  $menu_links['menu-menu-instrumentos-gestion_informe-de-pqrs-y-denuncias:transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes'] = array(
    'menu_name' => 'menu-menu-instrumentos-gestion',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
    'router_path' => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
    'link_title' => 'Informe de PQRS y denuncias',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes
transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes/*
transparencia/instrumentos-gestion-informacion-publica/informe-peticiones-quejas-reclamos-denuncias-y-solicitudes-acceso-información/*
transparencia/instrumentos-gestion-informacion-publica/informe-peticiones-quejas-reclamos-denuncias-y-solicitudes-acceso-información',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-instrumentos-gestion_informe-de-pqrs-y-denuncias:transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-instrumentos-gestion_relacionados-con-la-informacin:transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion
  $menu_links['menu-menu-instrumentos-gestion_relacionados-con-la-informacin:transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion'] = array(
    'menu_name' => 'menu-menu-instrumentos-gestion',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion',
    'router_path' => 'transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion',
    'link_title' => 'Relacionados con la información',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion
transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion/*
transparencia/instrumentos-gestion-informacion-publica/relacionados-información
transparencia/instrumentos-gestion-informacion-publica/relacionados-información/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-instrumentos-gestion_relacionados-con-la-informacin:transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Gestión documental');
  t('Informe de PQRS y denuncias');
  t('Relacionados con la información');


  return $menu_links;
}
