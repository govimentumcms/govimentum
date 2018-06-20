<?php
/**
 * @file
 * govi_marco_legal.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_marco_legal_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-marco-legal_lineamientos:transparencia/marco-legal/lineamientos.
  $menu_links['menu-menu-marco-legal_lineamientos:transparencia/marco-legal/lineamientos'] = array(
    'menu_name' => 'menu-menu-marco-legal',
    'link_path' => 'transparencia/marco-legal/lineamientos',
    'router_path' => 'transparencia',
    'link_title' => 'Lineamientos',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/marco-legal/lineamientos
transparencia/marco-legal/lineamientos/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-marco-legal_lineamientos:transparencia/marco-legal/lineamientos',
      'menu_token_link_uuid' => 'menutoken/568ff29656ea8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-marco-legal_normatividad:transparencia/marco-legal/normatividad.
  $menu_links['menu-menu-marco-legal_normatividad:transparencia/marco-legal/normatividad'] = array(
    'menu_name' => 'menu-menu-marco-legal',
    'link_path' => 'transparencia/marco-legal/normatividad',
    'router_path' => 'transparencia',
    'link_title' => 'Normatividad',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/marco-legal/normatividad
transparencia/marco-legal/normatividad/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-marco-legal_normatividad:transparencia/marco-legal/normatividad',
      'menu_token_link_uuid' => 'menutoken/568ff279ef393',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-marco-legal_planes:transparencia/marco-legal/planes.
  $menu_links['menu-menu-marco-legal_planes:transparencia/marco-legal/planes'] = array(
    'menu_name' => 'menu-menu-marco-legal',
    'link_path' => 'transparencia/marco-legal/planes',
    'router_path' => 'transparencia',
    'link_title' => 'Planes',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/marco-legal/planes
transparencia/marco-legal/planes/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-marco-legal_planes:transparencia/marco-legal/planes',
      'menu_token_link_uuid' => 'menutoken/568ff2b36ff87',
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
  t('Lineamientos');
  t('Normatividad');
  t('Planes');

  return $menu_links;
}
