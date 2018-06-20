<?php
/**
 * @file
 * govi_informacion_interes.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_informacion_interes_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-informacion-interes_calendario-de-actividades:calendario/month.
  $menu_links['menu-menu-informacion-interes_calendario-de-actividades:calendario/month'] = array(
    'menu_name' => 'menu-menu-informacion-interes',
    'link_path' => 'calendario/month',
    'router_path' => 'calendario/month',
    'link_title' => 'Calendario de Actividades',
    'options' => array(
      'cami' => array(
        'pages' => 'calendario/month
calendario/month/*
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
      'identifier' => 'menu-menu-informacion-interes_calendario-de-actividades:calendario/month',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-informacion-interes_convocatorias:transparencia/informacion-interes/convocatorias.
  $menu_links['menu-menu-informacion-interes_convocatorias:transparencia/informacion-interes/convocatorias'] = array(
    'menu_name' => 'menu-menu-informacion-interes',
    'link_path' => 'transparencia/informacion-interes/convocatorias',
    'router_path' => 'transparencia',
    'link_title' => 'Convocatorias',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes/convocatoria/*
transparencia/informacion-interes/convocatoria
transparencia/informacion-interes/convocatorias/*
transparencia/informacion-interes/convocatoria
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
      'identifier' => 'menu-menu-informacion-interes_convocatorias:transparencia/informacion-interes/convocatorias',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-informacion-interes_estudios-investigaciones-y-oras-publicaciones:transparencia/informacion-interes/publicaciones.
  $menu_links['menu-menu-informacion-interes_estudios-investigaciones-y-oras-publicaciones:transparencia/informacion-interes/publicaciones'] = array(
    'menu_name' => 'menu-menu-informacion-interes',
    'link_path' => 'transparencia/informacion-interes/publicaciones',
    'router_path' => 'transparencia',
    'link_title' => 'Estudios, investigaciones y oras publicaciones',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes/publicaciones
transparencia/informacion-interes/publicaciones/*
transparencia/informacion-interes/publicacion/estudios/*
transparencia/informacion-interes/publicacion/investigaciones/*
transparencia/informacion-interes/publicacion/otras-publicaciones/*
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
      'identifier' => 'menu-menu-informacion-interes_estudios-investigaciones-y-oras-publicaciones:transparencia/informacion-interes/publicaciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-informacion-interes_glosario:transparencia/informacion-interes/glosario.
  $menu_links['menu-menu-informacion-interes_glosario:transparencia/informacion-interes/glosario'] = array(
    'menu_name' => 'menu-menu-informacion-interes',
    'link_path' => 'transparencia/informacion-interes/glosario',
    'router_path' => 'transparencia',
    'link_title' => 'Glosario',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes/glosario
transparencia/informacion-interes/glosario/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-informacion-interes_glosario:transparencia/informacion-interes/glosario',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-informacion-interes_informacin-adicional:transparencia/informacion-interes/informacion-adicional.
  $menu_links['menu-menu-informacion-interes_informacin-adicional:transparencia/informacion-interes/informacion-adicional'] = array(
    'menu_name' => 'menu-menu-informacion-interes',
    'link_path' => 'transparencia/informacion-interes/informacion-adicional',
    'router_path' => 'transparencia',
    'link_title' => 'Información adicional',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes/informacion-adicional
transparencia/informacion-interes/informacion-adicional/*
transparencia/informacion-interes/publicacion/información-adicional
transparencia/informacion-interes/publicacion/información-adicional/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-informacion-interes_informacin-adicional:transparencia/informacion-interes/informacion-adicional',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-informacion-interes_noticias:noticias.
  $menu_links['menu-menu-informacion-interes_noticias:noticias'] = array(
    'menu_name' => 'menu-menu-informacion-interes',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
    'options' => array(
      'cami' => array(
        'pages' => 'noticias
noticias/*
noticia
noticias/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-informacion-interes_noticias:noticias',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-informacion-interes_preguntas-frecuentes:transparencia/informacion-interes/faqs.
  $menu_links['menu-menu-informacion-interes_preguntas-frecuentes:transparencia/informacion-interes/faqs'] = array(
    'menu_name' => 'menu-menu-informacion-interes',
    'link_path' => 'transparencia/informacion-interes/faqs',
    'router_path' => 'transparencia',
    'link_title' => 'Preguntas frecuentes',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes/faqs
transparencia/informacion-interes/faqs/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-informacion-interes_preguntas-frecuentes:transparencia/informacion-interes/faqs',
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
  t('Calendario de Actividades');
  t('Convocatorias');
  t('Estudios, investigaciones y oras publicaciones');
  t('Glosario');
  t('Información adicional');
  t('Noticias');
  t('Preguntas frecuentes');

  return $menu_links;
}
