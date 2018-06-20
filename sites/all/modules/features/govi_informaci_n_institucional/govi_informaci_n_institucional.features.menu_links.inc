<?php
/**
 * @file
 * govi_informaci_n_institucional.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_informaci_n_institucional_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-organizacion_directorio-de-agremiaciones-asociaciones-y-otros-grupos-de-inters:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_directorio-de-agremiaciones-asociaciones-y-otros-grupos-de-inters:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Directorio de agremiaciones, asociaciones y otros grupos de interés',
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
      'fragment' => 'directorio-agremiaciones',
      'identifier' => 'menu-menu-organizacion_directorio-de-agremiaciones-asociaciones-y-otros-grupos-de-inters:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_directorio-de-entidades:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_directorio-de-entidades:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Directorio de Entidades',
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
      'fragment' => 'directorio-entidades',
      'identifier' => 'menu-menu-organizacion_directorio-de-entidades:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_directorio-de-informacin-de-servidores-pblicos-empleados-y-contratistas:transparencia/organizacion/directorio-funcionarios.
  $menu_links['menu-menu-organizacion_directorio-de-informacin-de-servidores-pblicos-empleados-y-contratistas:transparencia/organizacion/directorio-funcionarios'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion/directorio-funcionarios',
    'router_path' => 'transparencia',
    'link_title' => 'Directorio de información de servidores públicos, empleados y contratistas',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/organizacion/directorio-funcionarios
transparencia/organizacion/directorio-funcionarios/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_directorio-de-informacin-de-servidores-pblicos-empleados-y-contratistas:transparencia/organizacion/directorio-funcionarios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_funciones-y-deberes:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_funciones-y-deberes:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Funciones y deberes',
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
      'fragment' => 'funciones-deberes',
      'identifier' => 'menu-menu-organizacion_funciones-y-deberes:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_misin:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_misin:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Misión',
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
      'identifier' => 'menu-menu-organizacion_misin:transparencia/organizacion',
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5670a22b9c1d4',
      'fragment' => 'mision',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_ofertas-de-empleo:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_ofertas-de-empleo:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Ofertas de empleo',
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
      'fragment' => 'ofertas-empleo',
      'identifier' => 'menu-menu-organizacion_ofertas-de-empleo:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_organigrama:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_organigrama:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Organigrama',
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
      'identifier' => 'menu-menu-organizacion_organigrama:transparencia/organizacion',
      'fragment' => 'organigrama',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_procesos-y-procedimientos:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_procesos-y-procedimientos:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Procesos y procedimientos',
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
      'fragment' => 'procesos-procedimientos',
      'identifier' => 'menu-menu-organizacion_procesos-y-procedimientos:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_visin:transparencia/organizacion.
  $menu_links['menu-menu-organizacion_visin:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Visión',
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
      'identifier' => 'menu-menu-organizacion_visin:transparencia/organizacion',
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5670a2132fc92',
      'fragment' => 'vision',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Directorio de Entidades');
  t('Directorio de agremiaciones, asociaciones y otros grupos de interés');
  t('Directorio de información de servidores públicos, empleados y contratistas');
  t('Funciones y deberes');
  t('Misión');
  t('Ofertas de empleo');
  t('Organigrama');
  t('Procesos y procedimientos');
  t('Visión');

  return $menu_links;
}
