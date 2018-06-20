<?php
/**
 * @file
 * govi_presupuesto.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_presupuesto_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-presupuesto_informes-de-ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal.
  $menu_links['menu-menu-presupuesto_informes-de-ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal'] = array(
    'menu_name' => 'menu-menu-presupuesto',
    'link_path' => 'transparencia/presupuesto/ejecucion-presupuestal',
    'router_path' => 'transparencia',
    'link_title' => 'Informes de ejecución presupuestal',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/presupuesto/ejecucion-presupuestal
transparencia/presupuesto/ejecucion-presupuestal/*
transparencia/presupuesto/ejecución-presupuestal
transparencia/presupuesto/ejecución-presupuestal/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-presupuesto_informes-de-ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-presupuesto_informes-de-estados-financieros:transparencia/presupuesto/estados-financieros.
  $menu_links['menu-menu-presupuesto_informes-de-estados-financieros:transparencia/presupuesto/estados-financieros'] = array(
    'menu_name' => 'menu-menu-presupuesto',
    'link_path' => 'transparencia/presupuesto/estados-financieros',
    'router_path' => 'transparencia',
    'link_title' => 'Informes de estados financieros',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/presupuesto/estados-financieros
transparencia/presupuesto/estados-financieros/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-presupuesto_informes-de-estados-financieros:transparencia/presupuesto/estados-financieros',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-presupuesto_presupuesto-general:transparencia/presupuesto/general.
  $menu_links['menu-menu-presupuesto_presupuesto-general:transparencia/presupuesto/general'] = array(
    'menu_name' => 'menu-menu-presupuesto',
    'link_path' => 'transparencia/presupuesto/general',
    'router_path' => 'transparencia',
    'link_title' => 'Presupuesto General',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/presupuesto/general
transparencia/presupuesto/general/*
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
      'identifier' => 'menu-menu-presupuesto_presupuesto-general:transparencia/presupuesto/general',
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
  t('Informes de ejecución presupuestal');
  t('Informes de estados financieros');
  t('Presupuesto General');

  return $menu_links;
}
