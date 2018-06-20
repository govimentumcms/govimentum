<?php
/**
 * @file
 * govi_transparencia.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function govi_transparencia_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-menu-transparencia:transparencia/atencion-ciudadano/sede-principal
  $menu_links['menu-menu-transparencia:transparencia/atencion-ciudadano/sede-principal'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/atencion-ciudadano/sede-principal',
    'router_path' => 'transparencia/atencion-ciudadano/sede-principal',
    'link_title' => 'Atención al Ciudadano',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/atencion-ciudadano/sedes
  $menu_links['menu-menu-transparencia:transparencia/atencion-ciudadano/sedes'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/atencion-ciudadano/sedes',
    'router_path' => 'transparencia/atencion-ciudadano/sedes',
    'link_title' => 'Localización fisica, sucursales o regionales',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/contratacion
  $menu_links['menu-menu-transparencia:transparencia/contratacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/contratacion',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Contratación',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -40,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/contratacion/plan-anual-adquisiciones
  $menu_links['menu-menu-transparencia:transparencia/contratacion/plan-anual-adquisiciones'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/contratacion/plan-anual-adquisiciones',
    'router_path' => 'transparencia/contratacion/plan-anual-adquisiciones',
    'link_title' => 'Plan anual de adquisiciones',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'transparencia/contratacion',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/control
  $menu_links['menu-menu-transparencia:transparencia/control'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/control',
    'router_path' => 'transparencia/control',
    'link_title' => 'Control',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -38,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/control/defensa-judicial
  $menu_links['menu-menu-transparencia:transparencia/control/defensa-judicial'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/control/defensa-judicial',
    'router_path' => 'transparencia/control/defensa-judicial',
    'link_title' => 'Defensa judicial',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_path' => 'transparencia/control',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/control/entes-control-vigilancia-mecanismos-supervicion
  $menu_links['menu-menu-transparencia:transparencia/control/entes-control-vigilancia-mecanismos-supervicion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
    'router_path' => 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion',
    'link_title' => 'Entes de control, vigilancia y mecanismos de supervición',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
    'parent_path' => 'transparencia/control',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/control/informacion-poblacion-vulnerable
  $menu_links['menu-menu-transparencia:transparencia/control/informacion-poblacion-vulnerable'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/control/informacion-poblacion-vulnerable',
    'router_path' => 'transparencia/control/informacion-poblacion-vulnerable',
    'link_title' => 'Información para población vulnerable',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
    'parent_path' => 'transparencia/control',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/control/informes-gestion-evaluacion-auditoria
  $menu_links['menu-menu-transparencia:transparencia/control/informes-gestion-evaluacion-auditoria'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/control/informes-gestion-evaluacion-auditoria',
    'router_path' => 'transparencia/control/informes-gestion-evaluacion-auditoria',
    'link_title' => 'Informes de gestión, evaluación y auditoria',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'transparencia/control',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/control/planes-mejoramiento
  $menu_links['menu-menu-transparencia:transparencia/control/planes-mejoramiento'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/control/planes-mejoramiento',
    'router_path' => 'transparencia/control/planes-mejoramiento',
    'link_title' => 'Planes de mejoramiento',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_path' => 'transparencia/control',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/control/reportes-control-interno
  $menu_links['menu-menu-transparencia:transparencia/control/reportes-control-interno'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/control/reportes-control-interno',
    'router_path' => 'transparencia/control/reportes-control-interno',
    'link_title' => 'Reportes de control interno',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_path' => 'transparencia/control',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/instrumentos-gestion-informacion-publica
  $menu_links['menu-menu-transparencia:transparencia/instrumentos-gestion-informacion-publica'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica',
    'router_path' => 'transparencia/instrumentos-gestion-informacion-publica',
    'link_title' => 'Instrumentos de gestión de información pública',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes
  $menu_links['menu-menu-transparencia:transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
    'router_path' => 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes',
    'link_title' => 'Informe de PQRS y denuncias',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_path' => 'transparencia/instrumentos-gestion-informacion-publica',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/instrumentos-gestion-informacion-publica/gestion-documental
  $menu_links['menu-menu-transparencia:transparencia/instrumentos-gestion-informacion-publica/gestion-documental'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental',
    'router_path' => 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental',
    'link_title' => 'Gestión documental',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_path' => 'transparencia/instrumentos-gestion-informacion-publica',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion
  $menu_links['menu-menu-transparencia:transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion',
    'router_path' => 'transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion',
    'link_title' => 'Relacionados con la información',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'transparencia/instrumentos-gestion-informacion-publica',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/marco-legal
  $menu_links['menu-menu-transparencia:transparencia/marco-legal'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/marco-legal',
    'router_path' => 'transparencia/marco-legal',
    'link_title' => 'Marco Legal',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/marco-legal/lineamientos
  $menu_links['menu-menu-transparencia:transparencia/marco-legal/lineamientos'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/marco-legal/lineamientos',
    'router_path' => 'transparencia/marco-legal/lineamientos',
    'link_title' => 'Lineamientos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'transparencia/marco-legal',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/marco-legal/normatividad
  $menu_links['menu-menu-transparencia:transparencia/marco-legal/normatividad'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/marco-legal/normatividad',
    'router_path' => 'transparencia/marco-legal/normatividad',
    'link_title' => 'Normatividad',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_path' => 'transparencia/marco-legal',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/marco-legal/planes
  $menu_links['menu-menu-transparencia:transparencia/marco-legal/planes'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/marco-legal/planes',
    'router_path' => 'transparencia/marco-legal/planes',
    'link_title' => 'Planes',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_path' => 'transparencia/marco-legal',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/organizacion/directorio-funcionarios
  $menu_links['menu-menu-transparencia:transparencia/organizacion/directorio-funcionarios'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion/directorio-funcionarios',
    'router_path' => 'transparencia/organizacion/directorio-funcionarios',
    'link_title' => 'Directorio de información de servidores públicos, empleados y contratistas',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/planeacion
  $menu_links['menu-menu-transparencia:transparencia/planeacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/planeacion',
    'router_path' => 'transparencia/planeacion',
    'link_title' => 'Planeación',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/planeacion/informes-empalme
  $menu_links['menu-menu-transparencia:transparencia/planeacion/informes-empalme'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/planeacion/informes-empalme',
    'router_path' => 'transparencia/planeacion/informes-empalme',
    'link_title' => 'Informes de empalme',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
    'parent_path' => 'transparencia/planeacion',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/planeacion/metas-objetivos-indicadores
  $menu_links['menu-menu-transparencia:transparencia/planeacion/metas-objetivos-indicadores'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/planeacion/metas-objetivos-indicadores',
    'router_path' => 'transparencia/planeacion/metas-objetivos-indicadores',
    'link_title' => 'Metas, objetivos e indicadores',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_path' => 'transparencia/planeacion',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/planeacion/participacion-ciudadana
  $menu_links['menu-menu-transparencia:transparencia/planeacion/participacion-ciudadana'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/planeacion/participacion-ciudadana',
    'router_path' => 'transparencia/planeacion/participacion-ciudadana',
    'link_title' => 'Participación ciudadana',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
    'parent_path' => 'transparencia/planeacion',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/planeacion/planes
  $menu_links['menu-menu-transparencia:transparencia/planeacion/planes'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/planeacion/planes',
    'router_path' => 'transparencia/planeacion/planes',
    'link_title' => 'Planes',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'transparencia/planeacion',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/planeacion/programas-proyectos
  $menu_links['menu-menu-transparencia:transparencia/planeacion/programas-proyectos'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/planeacion/programas-proyectos',
    'router_path' => 'transparencia/planeacion/programas-proyectos',
    'link_title' => 'Programas y Proyectos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_path' => 'transparencia/planeacion',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/presupuesto
  $menu_links['menu-menu-transparencia:transparencia/presupuesto'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/presupuesto',
    'router_path' => 'transparencia/presupuesto',
    'link_title' => 'Presupuesto',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia:transparencia/presupuesto/ejecucion-presupuestal
  $menu_links['menu-menu-transparencia:transparencia/presupuesto/ejecucion-presupuestal'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/presupuesto/ejecucion-presupuestal',
    'router_path' => 'transparencia/presupuesto/ejecucion-presupuestal',
    'link_title' => 'Informes de ejecución presupuestal',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_path' => 'transparencia/presupuesto',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/presupuesto/estados-financieros
  $menu_links['menu-menu-transparencia:transparencia/presupuesto/estados-financieros'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/presupuesto/estados-financieros',
    'router_path' => 'transparencia/presupuesto/estados-financieros',
    'link_title' => 'Informes de estados financieros',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_path' => 'transparencia/presupuesto',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/presupuesto/general
  $menu_links['menu-menu-transparencia:transparencia/presupuesto/general'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/presupuesto/general',
    'router_path' => 'transparencia/presupuesto/general',
    'link_title' => 'Presupuesto General',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'transparencia/presupuesto',
  );
  // Exported menu link: menu-menu-transparencia:transparencia/tramites-servicios
  $menu_links['menu-menu-transparencia:transparencia/tramites-servicios'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/tramites-servicios',
    'router_path' => 'transparencia/tramites-servicios',
    'link_title' => 'Trámites y Servicios',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_directorio-de-agremiaciones-asociaciones-y-otros-grupos-de-inters:transparencia/organizacion
  $menu_links['menu-menu-transparencia_directorio-de-agremiaciones-asociaciones-y-otros-grupos-de-inters:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Directorio de agremiaciones, asociaciones y otros grupos de interés',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'directorio-agremiaciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_directorio-de-entidades:transparencia/organizacion
  $menu_links['menu-menu-transparencia_directorio-de-entidades:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Directorio de Entidades',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'directorio-entidades',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 0,
    'parent_path' => 'transparencia/organizacion',
  );
  // Exported menu link: menu-menu-transparencia_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos
  $menu_links['menu-menu-transparencia_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/contratacion/ejecucion_contratos',
    'router_path' => 'transparencia/contratacion/ejecucion_contratos',
    'link_title' => 'Ejecución de contratos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
    'parent_path' => 'transparencia/contratacion',
  );
  // Exported menu link: menu-menu-transparencia_estructura-orgnica-y-talento-humano:transparencia/organizacion
  $menu_links['menu-menu-transparencia_estructura-orgnica-y-talento-humano:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Estructura orgánica y talento humano',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_funciones-y-deberes:transparencia/organizacion
  $menu_links['menu-menu-transparencia_funciones-y-deberes:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Funciones y deberes',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'funciones-deberes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_informacin-de-contratacin:transparencia/contratacion/informacion_contractual
  $menu_links['menu-menu-transparencia_informacin-de-contratacin:transparencia/contratacion/informacion_contractual'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/contratacion/informacion_contractual',
    'router_path' => 'transparencia/contratacion/informacion_contractual',
    'link_title' => 'Información de contratación',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_path' => 'transparencia/contratacion',
  );
  // Exported menu link: menu-menu-transparencia_manual-de-contrataciones:transparencia/contratacion/manual_contrataciones
  $menu_links['menu-menu-transparencia_manual-de-contrataciones:transparencia/contratacion/manual_contrataciones'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/contratacion/manual_contrataciones',
    'router_path' => 'transparencia/contratacion/manual_contrataciones',
    'link_title' => 'Manual de Contrataciones',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_path' => 'transparencia/contratacion',
  );
  // Exported menu link: menu-menu-transparencia_mecanismos-de-contacto:<front>
  $menu_links['menu-menu-transparencia_mecanismos-de-contacto:<front>'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Mecanismos de contacto',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_misin:transparencia/organizacion
  $menu_links['menu-menu-transparencia_misin:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Misión',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_notifcaciones-judiciales:<front>
  $menu_links['menu-menu-transparencia_notifcaciones-judiciales:<front>'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Notifcaciones judiciales',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-menu-transparencia_ofertas-de-empleo:transparencia/organizacion
  $menu_links['menu-menu-transparencia_ofertas-de-empleo:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Ofertas de empleo',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'ofertas-empleo',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_organigrama:transparencia/organizacion
  $menu_links['menu-menu-transparencia_organigrama:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Organigrama',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'organigrama',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_polticas-de-seguridad-de-la-informacin-y-proteccin-de-datos-personales:<front>
  $menu_links['menu-menu-transparencia_polticas-de-seguridad-de-la-informacin-y-proteccin-de-datos-personales:<front>'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Políticas de seguridad de la información y protección de datos personales',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_procesos-y-procedimientos:transparencia/organizacion
  $menu_links['menu-menu-transparencia_procesos-y-procedimientos:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Procesos y procedimientos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'procesos-procedimientos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-transparencia_visin:transparencia/organizacion
  $menu_links['menu-menu-transparencia_visin:transparencia/organizacion'] = array(
    'menu_name' => 'menu-menu-transparencia',
    'link_path' => 'transparencia/organizacion',
    'router_path' => 'transparencia/organizacion',
    'link_title' => 'Visión',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Atención al Ciudadano');
  t('Contratación');
  t('Control');
  t('Defensa judicial');
  t('Directorio de Entidades');
  t('Directorio de agremiaciones, asociaciones y otros grupos de interés');
  t('Directorio de información de servidores públicos, empleados y contratistas');
  t('Ejecución de contratos');
  t('Entes de control, vigilancia y mecanismos de supervición');
  t('Estructura orgánica y talento humano');
  t('Funciones y deberes');
  t('Gestión documental');
  t('Información de contratación');
  t('Información para población vulnerable');
  t('Informe de PQRS y denuncias');
  t('Informes de ejecución presupuestal');
  t('Informes de empalme');
  t('Informes de estados financieros');
  t('Informes de gestión, evaluación y auditoria');
  t('Instrumentos de gestión de información pública');
  t('Lineamientos');
  t('Localización fisica, sucursales o regionales');
  t('Manual de Contrataciones');
  t('Marco Legal');
  t('Mecanismos de contacto');
  t('Metas, objetivos e indicadores');
  t('Misión');
  t('Normatividad');
  t('Notifcaciones judiciales');
  t('Ofertas de empleo');
  t('Organigrama');
  t('Participación ciudadana');
  t('Plan anual de adquisiciones');
  t('Planeación');
  t('Planes');
  t('Planes de mejoramiento');
  t('Políticas de seguridad de la información y protección de datos personales');
  t('Presupuesto');
  t('Presupuesto General');
  t('Procesos y procedimientos');
  t('Programas y Proyectos');
  t('Relacionados con la información');
  t('Reportes de control interno');
  t('Trámites y Servicios');
  t('Visión');


  return $menu_links;
}
