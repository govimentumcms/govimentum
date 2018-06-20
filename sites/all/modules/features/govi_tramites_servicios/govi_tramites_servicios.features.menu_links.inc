<?php
/**
 * @file
 * govi_tramites_servicios.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_tramites_servicios_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-tramites-servicios_trmites-y-servicios:transparencia/tramites-servicios.
  $menu_links['menu-menu-tramites-servicios_trmites-y-servicios:transparencia/tramites-servicios'] = array(
    'menu_name' => 'menu-menu-tramites-servicios',
    'link_path' => 'transparencia/tramites-servicios',
    'router_path' => 'transparencia',
    'link_title' => 'Trámites y Servicios',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/tramites-servicios/*
transparencia/tramites-servicios',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-tramites-servicios_trmites-y-servicios:transparencia/tramites-servicios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Trámites y Servicios');

  return $menu_links;
}
