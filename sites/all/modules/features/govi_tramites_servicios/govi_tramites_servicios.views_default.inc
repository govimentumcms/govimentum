<?php
/**
 * @file
 * govi_tramites_servicios.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_tramites_servicios_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tramites_servicios';
  $view->description = 'Vista funcional que implementa la gestión de trámites y servicios que afecta la Entidad';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Trámites y Servicios';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trámites y Servicios';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_clasificacion_tram_serv',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['class'] = 'accordion-content';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list fondov2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Proin faucibus vitae eros nec dapibus. Cras laoreet tellus a diam facilisis ullamcorper. Integer scelerisque molestie nunc, eu pellentesque risus sollicitudin ac. Morbi semper gravida turpis sit amet consectetur. Sed viverra volutpat augue, vitae fringilla urna egestas eget. Suspendisse condimentum ex nec nibh posuere scelerisque. Etiam blandit mauris ac euismod laoreet. Vestibulum id enim eget nibh faucibus efficitur. Nam vulputate nec urna sit amet interdum. Morbi at vulputate diam, a consequat ante. Phasellus in purus at orci lacinia molestie vitae ut felis. Sed luctus eget sapien sed volutpat. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_descripcion_tram_serv']['id'] = 'field_descripcion_tram_serv';
  $handler->display->display_options['fields']['field_descripcion_tram_serv']['table'] = 'field_data_field_descripcion_tram_serv';
  $handler->display->display_options['fields']['field_descripcion_tram_serv']['field'] = 'field_descripcion_tram_serv';
  $handler->display->display_options['fields']['field_descripcion_tram_serv']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_descripcion_tram_serv']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_descripcion_tram_serv']['alter']['trim'] = TRUE;
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_tipo_de_recurso_tram_serv']['id'] = 'field_tipo_de_recurso_tram_serv';
  $handler->display->display_options['fields']['field_tipo_de_recurso_tram_serv']['table'] = 'field_data_field_tipo_de_recurso_tram_serv';
  $handler->display->display_options['fields']['field_tipo_de_recurso_tram_serv']['field'] = 'field_tipo_de_recurso_tram_serv';
  $handler->display->display_options['fields']['field_tipo_de_recurso_tram_serv']['exclude'] = TRUE;
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['id'] = 'field_enlace_externo_tram_serv';
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['table'] = 'field_data_field_enlace_externo_tram_serv';
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['field'] = 'field_enlace_externo_tram_serv';
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['alter']['path'] = '[field_enlace_externo_tram_serv-url]';
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_tram_serv']['click_sort_column'] = 'url';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['id'] = 'field_archivo_adjunto_tram_serv';
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['table'] = 'field_data_field_archivo_adjunto_tram_serv';
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['field'] = 'field_archivo_adjunto_tram_serv';
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['label'] = '';
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['alter']['path'] = '[field_archivo_adjunto_tram_serv]';
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_tram_serv']['type'] = 'file_url_plain';
  /* Field: Content: Clasificacion Trámites y Servicios */
  $handler->display->display_options['fields']['field_clasificacion_tram_serv']['id'] = 'field_clasificacion_tram_serv';
  $handler->display->display_options['fields']['field_clasificacion_tram_serv']['table'] = 'field_data_field_clasificacion_tram_serv';
  $handler->display->display_options['fields']['field_clasificacion_tram_serv']['field'] = 'field_clasificacion_tram_serv';
  $handler->display->display_options['fields']['field_clasificacion_tram_serv']['label'] = '';
  $handler->display->display_options['fields']['field_clasificacion_tram_serv']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasificacion_tram_serv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clasificacion_tram_serv']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-4-5">
<span>Descripción</span>
<p>
[field_descripcion_tram_serv] 
<p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_tram_serv] 
[field_archivo_adjunto_tram_serv] 
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tramites_servicios' => 'tramites_servicios',
  );

  /* Display: Trámites y Servicios */
  $handler = $view->new_display('page', 'Trámites y Servicios', 'page');
  $handler->display->display_options['display_description'] = 'Descripción Trámites y Servicios';
  $handler->display->display_options['path'] = 'transparencia/tramites-servicios';
  $translatables['tramites_servicios'] = array(
    t('Master'),
    t('Trámites y Servicios'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Proin faucibus vitae eros nec dapibus. Cras laoreet tellus a diam facilisis ullamcorper. Integer scelerisque molestie nunc, eu pellentesque risus sollicitudin ac. Morbi semper gravida turpis sit amet consectetur. Sed viverra volutpat augue, vitae fringilla urna egestas eget. Suspendisse condimentum ex nec nibh posuere scelerisque. Etiam blandit mauris ac euismod laoreet. Vestibulum id enim eget nibh faucibus efficitur. Nam vulputate nec urna sit amet interdum. Morbi at vulputate diam, a consequat ante. Phasellus in purus at orci lacinia molestie vitae ut felis. Sed luctus eget sapien sed volutpat. '),
    t('Nombre'),
    t('Descripción'),
    t('Tipo de Recurso'),
    t('Enlace'),
    t('Ver más'),
    t(' Descargar '),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-4-5">
<span>Descripción</span>
<p>
[field_descripcion_tram_serv] 
<p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_tram_serv] 
[field_archivo_adjunto_tram_serv] 
</div>
</div>'),
    t('Descripción Trámites y Servicios'),
  );
  $export['tramites_servicios'] = $view;

  return $export;
}
