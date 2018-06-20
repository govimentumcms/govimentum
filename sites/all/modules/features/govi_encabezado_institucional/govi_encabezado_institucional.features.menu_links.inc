<?php
/**
 * @file
 * govi_encabezado_institucional.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_encabezado_institucional_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_atencin-al-ciudadano:govi-sdqs/crear.
  $menu_links['main-menu_atencin-al-ciudadano:govi-sdqs/crear'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'govi-sdqs/crear',
    'router_path' => 'govi-sdqs/crear',
    'link_title' => 'Atención al Ciudadano',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'atención al Ciudadano',
        'class' => array(
          0 => 'icon-user_circle',
          1 => 'colorbox-load',
          2 => 'colorbox-node',
        ),
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_atencin-al-ciudadano:govi-sdqs/crear',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_calendario-de-actividades:calendario/month.
  $menu_links['main-menu_calendario-de-actividades:calendario/month'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendario/month',
    'router_path' => 'calendario/month',
    'link_title' => 'Calendario de Actividades',
    'options' => array(
      'cami' => array(
        'pages' => 'calendario/month
calendario/month/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_calendario-de-actividades:calendario/month',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_informacin-de-inters:transparencia/informacion-interes',
  );
  // Exported menu link: main-menu_contratacin:<front>.
  $menu_links['main-menu_contratacin:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contratación',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'contratación',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contratacin:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_control:transparencia/control.
  $menu_links['main-menu_control:transparencia/control'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/control',
    'router_path' => 'transparencia/control',
    'link_title' => 'Control',
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
      'identifier' => 'main-menu_control:transparencia/control',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_convocatorias:transparencia/informacion-interes/convocatorias.
  $menu_links['main-menu_convocatorias:transparencia/informacion-interes/convocatorias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/informacion-interes/convocatorias',
    'router_path' => 'transparencia',
    'link_title' => 'Convocatorias',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes/convocatoria/*
transparencia/informacion-interes/convocatoria
transparencia/informacion-interes/convocatorias/*
transparencia/informacion-interes/convocatoria',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_convocatorias:transparencia/informacion-interes/convocatorias',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_informacin-de-inters:transparencia/informacion-interes',
  );
  // Exported menu link: main-menu_defensa-judicial:transparencia/control/defensa-judicial.
  $menu_links['main-menu_defensa-judicial:transparencia/control/defensa-judicial'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/control/defensa-judicial',
    'router_path' => 'transparencia/control/defensa-judicial',
    'link_title' => 'Defensa judicial',
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
      'identifier' => 'main-menu_defensa-judicial:transparencia/control/defensa-judicial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_control:transparencia/control',
  );
  // Exported menu link: main-menu_directorio-de-agremiaciones-asociaciones-y-otros-grupos-de-inters:transparencia/organizacion.
  $menu_links['main-menu_directorio-de-agremiaciones-asociaciones-y-otros-grupos-de-inters:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_directorio-de-agremiaciones-asociaciones-y-otros-grupos-de-inters:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: main-menu_directorio-de-entidades:transparencia/organizacion.
  $menu_links['main-menu_directorio-de-entidades:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_directorio-de-entidades:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: main-menu_directorio-de-informacin-de-servidores-pblicos-empleados-y-contratistas:transparencia/organizacion/directorio-funcionarios.
  $menu_links['main-menu_directorio-de-informacin-de-servidores-pblicos-empleados-y-contratistas:transparencia/organizacion/directorio-funcionarios'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion/directorio-funcionarios',
    'router_path' => 'transparencia',
    'link_title' => 'Directorio de información de servidores públicos, empleados y contratistas',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'directorio de funcionarios',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_directorio-de-informacin-de-servidores-pblicos-empleados-y-contratistas:transparencia/organizacion/directorio-funcionarios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: main-menu_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos.
  $menu_links['main-menu_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion/ejecucion_contratos',
    'router_path' => 'transparencia',
    'link_title' => 'Ejecución de contratos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'ejecución de contratos',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
  );
  // Exported menu link: main-menu_ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal.
  $menu_links['main-menu_ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/presupuesto/ejecucion-presupuestal',
    'router_path' => 'transparencia',
    'link_title' => 'Ejecución presupuestal',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'ejecución presupuestal',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_ejecucin-presupuestal:transparencia/presupuesto/ejecucion-presupuestal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_presupuesto:transparencia/presupuesto',
  );
  // Exported menu link: main-menu_entes-de-control-vigilancia-y-mecamismos-de-supervicin:transparencia/control/entes-control-vigilancia-mecanismos-supervicion.
  $menu_links['main-menu_entes-de-control-vigilancia-y-mecamismos-de-supervicin:transparencia/control/entes-control-vigilancia-mecanismos-supervicion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
    'router_path' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
    'link_title' => 'Entes de control, vigilancia y mecamismos de supervición',
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
      'identifier' => 'main-menu_entes-de-control-vigilancia-y-mecamismos-de-supervicin:transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_control:transparencia/control',
  );
  // Exported menu link: main-menu_estados-financieros:transparencia/presupuesto/estados-financieros.
  $menu_links['main-menu_estados-financieros:transparencia/presupuesto/estados-financieros'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/presupuesto/estados-financieros',
    'router_path' => 'transparencia',
    'link_title' => 'Estados financieros',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'estados financieros',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_estados-financieros:transparencia/presupuesto/estados-financieros',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_presupuesto:transparencia/presupuesto',
  );
  // Exported menu link: main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion.
  $menu_links['main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Estructura orgánica y talento humano',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'organización',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  
    // Exported menu link: main-menu_eventos:calendario.
  $menu_links['main-menu_eventos:calendario'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendario',
    'router_path' => 'calendario',
    'link_title' => 'Eventos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'eventos',
        'class' => array(
          0 => 'icon-calendar',
        ),
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_eventos:calendario',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47, 
    'customized' => 1,
  );
  // Exported menu link: main-menu_funciones-y-deberes:transparencia/organizacion.
  $menu_links['main-menu_funciones-y-deberes:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_funciones-y-deberes:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: main-menu_gestin-documental:transparencia/instrumentos-gestion-informacion-publica/gestion-documental.
  $menu_links['main-menu_gestin-documental:transparencia/instrumentos-gestion-informacion-publica/gestion-documental'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental',
    'router_path' => 'transparencia',
    'link_title' => 'Gestión documental',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental
transparencia/instrumentos-gestion-informacion-publica/gestion-documental/*',
      ),
      'attributes' => array(
        'title' => 'gestión documental',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_gestin-documental:transparencia/instrumentos-gestion-informacion-publica/gestion-documental',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_instrumentos-de-gestin-de-informacin-pblica:transparencia/instrumentos-gestion-informacion-publica',
  );
  // Exported menu link: main-menu_glosario:transparencia/informacion-interes/glosario.
  $menu_links['main-menu_glosario:transparencia/informacion-interes/glosario'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_glosario:transparencia/informacion-interes/glosario',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_informacin-de-inters:transparencia/informacion-interes',
  );
  // Exported menu link: main-menu_informacin-adicional:transparencia/informacion-interes/informacion-adicional.
  $menu_links['main-menu_informacin-adicional:transparencia/informacion-interes/informacion-adicional'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_informacin-adicional:transparencia/informacion-interes/informacion-adicional',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_informacin-de-inters:transparencia/informacion-interes',
  );
  // Exported menu link: main-menu_informacin-contractual:transparencia/contratacion/informacion_contractual.
  $menu_links['main-menu_informacin-contractual:transparencia/contratacion/informacion_contractual'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion/informacion_contractual',
    'router_path' => 'transparencia',
    'link_title' => 'Información contractual',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'información contractual',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_informacin-contractual:transparencia/contratacion/informacion_contractual',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
  );
  // Exported menu link: main-menu_informacin-de-inters:transparencia/informacion-interes.
  $menu_links['main-menu_informacin-de-inters:transparencia/informacion-interes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/informacion-interes',
    'router_path' => 'transparencia',
    'link_title' => 'Información de Interés',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes
transparencia/informacion-interes/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_informacin-de-inters:transparencia/informacion-interes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_informacin-para-poblacin-vulnerable:transparencia/control/informacion-poblacion-vulnerable.
  $menu_links['main-menu_informacin-para-poblacin-vulnerable:transparencia/control/informacion-poblacion-vulnerable'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/control/informacion-poblacion-vulnerable',
    'router_path' => 'transparencia/control/informacion-poblacion-vulnerable',
    'link_title' => 'Información para población vulnerable',
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
      'identifier' => 'main-menu_informacin-para-poblacin-vulnerable:transparencia/control/informacion-poblacion-vulnerable',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_control:transparencia/control',
  );
  // Exported menu link: main-menu_informe-de-pqrs-y-denuncias:transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes.
  $menu_links['main-menu_informe-de-pqrs-y-denuncias:transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
    'router_path' => 'transparencia',
    'link_title' => 'Informe de PQRS y denuncias',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes
transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes/*',
      ),
      'attributes' => array(
        'title' => 'informe de PQRS y denuncias',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_informe-de-pqrs-y-denuncias:transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_instrumentos-de-gestin-de-informacin-pblica:transparencia/instrumentos-gestion-informacion-publica',
  );
  // Exported menu link: main-menu_informes-de-empalme:transparencia/planeacion/informes-empalme.
  $menu_links['main-menu_informes-de-empalme:transparencia/planeacion/informes-empalme'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/informes-empalme',
    'router_path' => 'transparencia',
    'link_title' => 'Informes de empalme',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'informes de empalme',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_informes-de-empalme:transparencia/planeacion/informes-empalme',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
  // Exported menu link: main-menu_informes-de-gestin-evaluacin-y-auditoria:transparencia/control/informes-gestion-evaluacion-auditoria.
  $menu_links['main-menu_informes-de-gestin-evaluacin-y-auditoria:transparencia/control/informes-gestion-evaluacion-auditoria'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/control/informes-gestion-evaluacion-auditoria',
    'router_path' => 'transparencia/control/informes-gestion-evaluacion-auditoria',
    'link_title' => 'Informes de gestión, evaluación y auditoria',
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
      'identifier' => 'main-menu_informes-de-gestin-evaluacin-y-auditoria:transparencia/control/informes-gestion-evaluacion-auditoria',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_control:transparencia/control',
  );
  // Exported menu link: main-menu_inicio:<front>.
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'inicio',
        'class' => array(
          0 => 'icon-home',
        ),
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_instrumentos-de-gestin-de-informacin-pblica:transparencia/instrumentos-gestion-informacion-publica.
  $menu_links['main-menu_instrumentos-de-gestin-de-informacin-pblica:transparencia/instrumentos-gestion-informacion-publica'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica',
    'router_path' => 'transparencia',
    'link_title' => 'Instrumentos de gestión de información pública',
    'options' => array(
      'cami' => array(
        'pages' => '/transparencia/instrumentos-gestion-informacion-publica
/transparencia/instrumentos-gestion-informacion-publica/*',
      ),
      'attributes' => array(
        'title' => 'instrumentos de gestión de información pública',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_instrumentos-de-gestin-de-informacin-pblica:transparencia/instrumentos-gestion-informacion-publica',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_lineamientos:transparencia/marco-legal/lineamientos.
  $menu_links['main-menu_lineamientos:transparencia/marco-legal/lineamientos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/marco-legal/lineamientos',
    'router_path' => 'transparencia',
    'link_title' => 'Lineamientos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'lineamientos',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_lineamientos:transparencia/marco-legal/lineamientos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_marco-legal:transparencia/marco-legal',
  );

  // Exported menu link: main-menu_manual-de-contrataciones:transparencia/contratacion/manual_contrataciones.
  $menu_links['main-menu_manual-de-contrataciones:transparencia/contratacion/manual_contrataciones'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion/manual_contrataciones',
    'router_path' => 'transparencia',
    'link_title' => 'Manual de contrataciones',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'manual de contrataciones',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_manual-de-contrataciones:transparencia/contratacion/manual_contrataciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
  );
  // Exported menu link: main-menu_marco-legal:transparencia/marco-legal.
  $menu_links['main-menu_marco-legal:transparencia/marco-legal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/marco-legal',
    'router_path' => 'transparencia',
    'link_title' => 'Marco Legal',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'marco legal',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_marco-legal:transparencia/marco-legal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_mecanismos-de-contacto:<front>.
  $menu_links['main-menu_mecanismos-de-contacto:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/atencion-ciudadano/sede-principal',
    'router_path' => '',
    'link_title' => 'Mecanismos de contacto',
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
      'identifier' => 'main-menu_mecanismos-de-contacto:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores.
  $menu_links['main-menu_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/metas-objetivos-indicadores',
    'router_path' => 'transparencia',
    'link_title' => 'Metas, objetivos e indicadores',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'mestas, objetivos e indicadores',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_metas-objetivos-e-indicadores:transparencia/planeacion/metas-objetivos-indicadores',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
  // Exported menu link: main-menu_misin:transparencia/organizacion.
  $menu_links['main-menu_misin:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Misión',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'misión',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_misin:transparencia/organizacion',
      'fragment' => 'mision',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: main-menu_normatividad:transparencia/marco-legal/normatividad.
  $menu_links['main-menu_normatividad:transparencia/marco-legal/normatividad'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/marco-legal/normatividad',
    'router_path' => 'transparencia',
    'link_title' => 'Normatividad',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'normatividad',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_normatividad:transparencia/marco-legal/normatividad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_marco-legal:transparencia/marco-legal',
  );
  // Exported menu link: main-menu_noticias:noticias.
  $menu_links['main-menu_noticias:noticias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'noticias',
        'class' => array(
          0 => 'icon-book_1',
        ),
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_noticias:noticias',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
	
  );
 
  // Exported menu link: main-menu_ofertas-de-empleo:transparencia/organizacion.
  $menu_links['main-menu_ofertas-de-empleo:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_ofertas-de-empleo:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: main-menu_organigrama:transparencia/organizacion.
  $menu_links['main-menu_organigrama:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Organigrama',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'organigrama',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_organigrama:transparencia/organizacion',
      'fragment' => 'organigrama',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: main-menu_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana.
  $menu_links['main-menu_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/participacion-ciudadana',
    'router_path' => 'transparencia',
    'link_title' => 'Participación Ciudadana',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'participación ciudadana',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_participacin-ciudadana:transparencia/planeacion/participacion-ciudadana',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
  // Exported menu link: main-menu_plan-anual-de-adquisiciones:transparencia/contratacion/plan-anual-adquisiciones.
  $menu_links['main-menu_plan-anual-de-adquisiciones:transparencia/contratacion/plan-anual-adquisiciones'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/contratacion/plan-anual-adquisiciones',
    'router_path' => 'transparencia',
    'link_title' => 'Plan anual de adquisiciones',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'plan anual de adquisiciones',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_plan-anual-de-adquisiciones:transparencia/contratacion/plan-anual-adquisiciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contratacin:<front>',
  );
  // Exported menu link: main-menu_planeacin:transparencia/planeacion.
  $menu_links['main-menu_planeacin:transparencia/planeacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion',
    'router_path' => 'transparencia',
    'link_title' => 'Planeación',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'planeación',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_planeacin:transparencia/planeacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_planes-de-mejoramiento:transparencia/control/planes-mejoramiento.
  $menu_links['main-menu_planes-de-mejoramiento:transparencia/control/planes-mejoramiento'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/control/planes-mejoramiento',
    'router_path' => 'transparencia/control/planes-mejoramiento',
    'link_title' => 'Planes de mejoramiento',
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
      'identifier' => 'main-menu_planes-de-mejoramiento:transparencia/control/planes-mejoramiento',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_control:transparencia/control',
  );
  // Exported menu link: main-menu_planes:transparencia/planeacion/planes.
  $menu_links['main-menu_planes:transparencia/planeacion/planes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/planes',
    'router_path' => 'transparencia',
    'link_title' => 'Políticas, lineamientos y manuales',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'planes',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_planes:transparencia/planeacion/planes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
  // Exported menu link: main-menu_plan-de-gasto-publico:transparencia/planeacion/plan-de-gasto-publico.
  $menu_links['main-menu_planes:transparencia/planeacion/plan-de-gasto-publico'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/plan-de-gasto-publico',
    'router_path' => 'transparencia',
    'link_title' => 'Plan de Gasto Público',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'Plan de Gasto Público',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_plan-de-gasto-publico:transparencia/planeacion/plan-de-gasto-publico',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
 
  // Exported menu link: main-menu_preguntas-frecuentes:transparencia/informacion-interes/faqs.
  $menu_links['main-menu_preguntas-frecuentes:transparencia/informacion-interes/faqs'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_preguntas-frecuentes:transparencia/informacion-interes/faqs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_informacin-de-inters:transparencia/informacion-interes',
  );
  // Exported menu link: main-menu_presupuesto-general:transparencia/presupuesto/general.
  $menu_links['main-menu_presupuesto-general:transparencia/presupuesto/general'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/presupuesto/general',
    'router_path' => 'transparencia',
    'link_title' => 'Presupuesto general',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'presupuesto general',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_presupuesto-general:transparencia/presupuesto/general',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_presupuesto:transparencia/presupuesto',
  );
  // Exported menu link: main-menu_presupuesto:transparencia/presupuesto.
  $menu_links['main-menu_presupuesto:transparencia/presupuesto'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/presupuesto',
    'router_path' => 'transparencia',
    'link_title' => 'Presupuesto',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'presupuesto',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_presupuesto:transparencia/presupuesto',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_procesos-y-procedimientos:transparencia/organizacion.
  $menu_links['main-menu_procesos-y-procedimientos:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_procesos-y-procedimientos:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: main-menu_programas-y-proyectos:transparencia/planeacion/programas-proyectos.
  $menu_links['main-menu_programas-y-proyectos:transparencia/planeacion/programas-proyectos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/planeacion/programas-proyectos',
    'router_path' => 'transparencia',
    'link_title' => 'Programas y Proyectos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'programas y proyectos',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_programas-y-proyectos:transparencia/planeacion/programas-proyectos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_planeacin:transparencia/planeacion',
  );
  // Exported menu link: main-menu_relacionados-con-la-informacin:transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion.
  $menu_links['main-menu_relacionados-con-la-informacin:transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion',
    'router_path' => 'transparencia',
    'link_title' => 'Relacionados con la Información',
    'options' => array(
      'cami' => array(
        'pages' => '/transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion
/transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion/*',
      ),
      'attributes' => array(
        'title' => 'relacionados con la Información',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_relacionados-con-la-informacin:transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_instrumentos-de-gestin-de-informacin-pblica:transparencia/instrumentos-gestion-informacion-publica',
  );
  // Exported menu link: main-menu_reportes-de-control-interno:transparencia/control/reportes-control-interno.
  $menu_links['main-menu_reportes-de-control-interno:transparencia/control/reportes-control-interno'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/control/reportes-control-interno',
    'router_path' => 'transparencia/control/reportes-control-interno',
    'link_title' => 'Reportes de control interno',
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
      'identifier' => 'main-menu_reportes-de-control-interno:transparencia/control/reportes-control-interno',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_control:transparencia/control',
  );
  // Exported menu link: main-menu_transparencia:<front>.
  $menu_links['main-menu_transparencia:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Entidad',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'transparencia',
        'class' => array(
          0 => 'icon-circle_ok',
        ),
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_transparencia:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_trmites-y-servicios:transparencia/tramites-servicios.
  $menu_links['main-menu_trmites-y-servicios:transparencia/tramites-servicios'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/tramites-servicios',
    'router_path' => 'transparencia',
    'link_title' => 'Trámites y Servicios',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'trámites y Servicios',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_trmites-y-servicios:transparencia/tramites-servicios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transparencia:<front>',
  );
  // Exported menu link: main-menu_visin:transparencia/organizacion.
  $menu_links['main-menu_visin:transparencia/organizacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Visión',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(
        'title' => 'visión',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_visin:transparencia/organizacion',
      'fragment' => 'vision',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_estructura-orgnica-y-talento-humano:transparencia/organizacion',
  );
  // Exported menu link: menu-menu-secundario_contctenos:node/1.
  $menu_links['menu-menu-secundario_contctenos:node/1'] = array(
    'menu_name' => 'menu-menu-secundario',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Contáctenos',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-secundario_contctenos:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-secundario_inicio:<front>.
  $menu_links['menu-menu-secundario_inicio:<front>'] = array(
    'menu_name' => 'menu-menu-secundario',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-secundario_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_contratacin:transparencia/contratacion.
  $menu_links['menu-transparencia-segundo-nivel_contratacin:transparencia/contratacion'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/contratacion',
    'router_path' => 'transparencia',
    'link_title' => 'Contratación',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/contratacion
transparencia/contratacion/*
transparencia/contratación
transparencia/contratación/',
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
      'identifier' => 'menu-transparencia-segundo-nivel_contratacin:transparencia/contratacion',
      'menu_token_link_uuid' => 'menutoken/56c73a5754c38',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_control:transparencia/control.
  $menu_links['menu-transparencia-segundo-nivel_control:transparencia/control'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/control',
    'router_path' => 'transparencia/control',
    'link_title' => 'Control',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/control
transparencia/control/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-transparencia-segundo-nivel_control:transparencia/control',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_estructura-orgnica-y-talento-humano:transparencia/organizacion.
  $menu_links['menu-transparencia-segundo-nivel_estructura-orgnica-y-talento-humano:transparencia/organizacion'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia',
    'link_title' => 'Estructura orgánica y talento humano',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/organizacion
transparencia/organizacion/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-transparencia-segundo-nivel_estructura-orgnica-y-talento-humano:transparencia/organizacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_informacin-de-inters:transparencia/informacion-interes.
  $menu_links['menu-transparencia-segundo-nivel_informacin-de-inters:transparencia/informacion-interes'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/informacion-interes',
    'router_path' => 'transparencia',
    'link_title' => 'Información de Interés',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes
transparencia/informacion-interes/*
transparencia/informacion-interes/convocatoria
transparencia/informacion-interes/convocatoria/*
transparencia/informacion-interes/convocatorias
transparencia/informacion-interes/convocatorias/*
transparencia/informacion-interes/publicaciones
transparencia/informacion-interes/publicaciones/*
transparencia/informacion-interes/publicacion
transparencia/informacion-interes/publicacion/*
noticias/*
noticias
noticia/*
calendario/month
calendario/month/*
transparencia/informacion-interes/faqs
transparencia/informacion-interes/faqs/*
transparencia/informacion-interes/glosario
transparencia/informacion-interes/glosario/*
transparencia/informacion-interes/informacion-ninos-ninas-adolecentes
transparencia/informacion-interes/informacion-ninos-ninas-adolecentes/*
transparencia/informacion-interes/informacion-adicional
transparencia/informacion-interes/informacion-adicional/*
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
      'identifier' => 'menu-transparencia-segundo-nivel_informacin-de-inters:transparencia/informacion-interes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_instrumentos-de-gestin-de-informacin:transparencia/instrumentos-gestion-informacion-publica/.
  $menu_links['menu-transparencia-segundo-nivel_instrumentos-de-gestin-de-informacin:transparencia/instrumentos-gestion-informacion-publica/'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/',
    'router_path' => 'transparencia',
    'link_title' => 'Instrumentos de gestión de información',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/instrumentos-gestion-informacion-publica/*
transparencia/instrumentos-gestion-informacion-publica',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-transparencia-segundo-nivel_instrumentos-de-gestin-de-informacin:transparencia/instrumentos-gestion-informacion-publica/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_marco-legal:transparencia/marco-legal.
  $menu_links['menu-transparencia-segundo-nivel_marco-legal:transparencia/marco-legal'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/marco-legal',
    'router_path' => 'transparencia',
    'link_title' => 'Marco Legal',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/marco-legal
transparencia/marco-legal/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-transparencia-segundo-nivel_marco-legal:transparencia/marco-legal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_mecanismos-de-contacto:<front>.
  $menu_links['menu-transparencia-segundo-nivel_mecanismos-de-contacto:<front>'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Mecanismos de contacto',
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
      'identifier' => 'menu-transparencia-segundo-nivel_mecanismos-de-contacto:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_planeacin:transparencia/planeacion.
  $menu_links['menu-transparencia-segundo-nivel_planeacin:transparencia/planeacion'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/planeacion',
    'router_path' => 'transparencia',
    'link_title' => 'Planeación',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/planeacion
transparencia/planeacion/*',
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
      'identifier' => 'menu-transparencia-segundo-nivel_planeacin:transparencia/planeacion',
      'menu_token_link_uuid' => 'menutoken/56c7354256ad9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_presupuesto:transparencia/presupuesto.
  $menu_links['menu-transparencia-segundo-nivel_presupuesto:transparencia/presupuesto'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/presupuesto',
    'router_path' => 'transparencia',
    'link_title' => 'Presupuesto',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/presupuesto/
transparencia/presupuesto/*',
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
      'identifier' => 'menu-transparencia-segundo-nivel_presupuesto:transparencia/presupuesto',
      'menu_token_link_uuid' => 'menutoken/56c73803dac15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-transparencia-segundo-nivel_trmites-y-servicios:transparencia/tramites-servicios.
  $menu_links['menu-transparencia-segundo-nivel_trmites-y-servicios:transparencia/tramites-servicios'] = array(
    'menu_name' => 'menu-transparencia-segundo-nivel',
    'link_path' => 'transparencia/tramites-servicios',
    'router_path' => 'transparencia',
    'link_title' => 'Trámites y Servicios',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/tramites-servicios
transparencia/tramites-servicios/*',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-transparencia-segundo-nivel_trmites-y-servicios:transparencia/tramites-servicios',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Atención al Ciudadano');
  t('Calendario de Actividades');
  t('Contratación');
  t('Control');
  t('Contáctenos');
  t('Convocatorias');
  t('Defensa judicial');
  t('Directorio de Entidades');
  t('Directorio de agremiaciones, asociaciones y otros grupos de interés');
  t('Directorio de información de servidores públicos, empleados y contratistas');
  t('Ejecución de contratos');
  t('Ejecución presupuestal');
  t('Entes de control, vigilancia y mecamismos de supervición');
  t('Estados financieros');
  t('Estructura orgánica y talento humano');
  t('Eventos');
  t('Funciones y deberes');
  t('Gestión documental');
  t('Glosario');
  t('Información adicional');
  t('Información contractual');
  t('Información de Interés');
  t('Información para población vulnerable');
  t('Informe de PQRS y denuncias');
  t('Informes de empalme');
  t('Informes de gestión, evaluación y auditoria');
  t('Inicio');
  t('Instrumentos de gestión de información');
  t('Instrumentos de gestión de información pública');
  t('Lineamientos');
  t('Localización física, sucursales o regionales');
  t('Manual de contrataciones');
  t('Marco Legal');
  t('Mecanismos de contacto');
  t('Metas, objetivos e indicadores');
  t('Misión');
  t('Normatividad');
  t('Noticias');
  t('Notificaciones Judiciales');
  t('Ofertas de empleo');
  t('Organigrama');
  t('Participación Ciudadana');
  t('Plan anual de adquisiciones');
  t('Planeación');
  t('Planes');
  t('Planes de mejoramiento');
  t('Políticas de seguridad de la información y protección de datos pesonales');
  t('Preguntas frecuentes');
  t('Presupuesto');
  t('Presupuesto general');
  t('Procesos y procedimientos');
  t('Programas y Proyectos');
  t('Relacionados con la Información');
  t('Reportes de control interno');
  t('Transparencia');
  t('Trámites y Servicios');
  t('Visión');

  return $menu_links;
}
