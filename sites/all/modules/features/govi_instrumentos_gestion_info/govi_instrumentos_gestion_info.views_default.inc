<?php
/**
 * @file
 * govi_instrumentos_gestion_info.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_instrumentos_gestion_info_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'instrumentos_gestion_informacion_publica';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '10. Instrumentos de gestión de información pública';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Informe de PQR denuncias y solicitudes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Integer a erat. Cras laoreet ligula cursus enim. Aenean scelerisque velit et tellus. Vestibulum dictum aliquet sem. Nulla facilisi. Vestibulum accumsan ante vitae elit. Nulla erat dolor, blandit in, rutrum quis, semper pulvinar, enim. Nullam varius congue risus. Vivamus sollicitudin, metus ut interdum eleifend, nisi tellus pellentesque elit, tristique accumsan eros quam et risus. Suspendisse libero odio, mattis sit amet, aliquet eget, hendrerit vel, nulla. Sed vitae augue. Aliquam erat volutpat. Aliquam feugiat vulputate nisl. Suspendisse quis nulla pretium ante pretium mollis. Proin velit ligula, sagittis at, egestas a, pulvinar quis, nisl.';
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
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['id'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['table'] = 'field_data_field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['field'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['text'] = ' Descargar';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['path'] = '[field_instrumentos_adjunto]';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['id'] = 'field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['table'] = 'field_data_field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['field'] = 'field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Descripcion */
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['id'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['table'] = 'field_data_field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['field'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['element_label_colon'] = FALSE;
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_instrumentos_enlace']['id'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['table'] = 'field_data_field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['field'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['click_sort_column'] = 'url';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['id'] = 'field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['table'] = 'field_data_field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['field'] = 'field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['id'] = 'field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['table'] = 'field_data_field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['field'] = 'field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['element_label_colon'] = FALSE;
  /* Field: Content: Tipo de documento */
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['id'] = 'field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['table'] = 'field_data_field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['field'] = 'field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['element_label_colon'] = FALSE;
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['id'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['table'] = 'field_data_field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['field'] = 'field_instrumentos_tipo_recurso';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-19-24">
[field_instrumentos_descripcion] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_instrumentos_adjunto] 
[field_instrumentos_enlace]
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
    'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
  );

  /* Display: Instrumentos de gestión de información pública  */
  $handler = $view->new_display('page', '10. Instrumentos de gestión de información pública ', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '10. Instrumentos de gestión de información pública';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['id'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['table'] = 'field_data_field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['field'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['text'] = ' Descargar';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['path'] = '[field_instrumentos_adjunto]';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['id'] = 'field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['table'] = 'field_data_field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['field'] = 'field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Descripcion */
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['id'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['table'] = 'field_data_field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['field'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['element_label_colon'] = FALSE;
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_instrumentos_enlace']['id'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['table'] = 'field_data_field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['field'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['click_sort_column'] = 'url';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['id'] = 'field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['table'] = 'field_data_field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['field'] = 'field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['id'] = 'field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['table'] = 'field_data_field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['field'] = 'field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['element_label_colon'] = FALSE;
  /* Field: Content: Tipo de documento */
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['id'] = 'field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['table'] = 'field_data_field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['field'] = 'field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['element_label_colon'] = FALSE;
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['id'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['table'] = 'field_data_field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['field'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'transparencia/instrumentos-gestion-informacion-publica';

  /* Display: Relacionados con la información */
  $handler = $view->new_display('page', 'Relacionados con la información', 'relacionados_con_informacion');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Relacionados con la Información';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'fondov2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Descripcion */
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['id'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['table'] = 'field_data_field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['field'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['label'] = 'Descripción';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['exclude'] = TRUE;
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['id'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['table'] = 'field_data_field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['field'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['exclude'] = TRUE;
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['id'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['table'] = 'field_data_field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['field'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['path'] = '[field_instrumentos_adjunto]';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['alt'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_instrumentos_enlace']['id'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['table'] = 'field_data_field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['field'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['path'] = '[field_instrumentos_enlace]';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-19-24">
[field_instrumentos_descripcion] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_instrumentos_adjunto] 
[field_instrumentos_enlace]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
  );
  /* Filter criterion: Content: Clasificación (field_instrumentos_clasificacion) */
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['id'] = 'field_instrumentos_clasificacion_tid';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['table'] = 'field_data_field_instrumentos_clasificacion';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['field'] = 'field_instrumentos_clasificacion_tid';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['value'] = array(
    0 => '47',
  );
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['vocabulary'] = 'instrumentos_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/instrumentos-gestion-informacion-publica/relacionados-informacion';

  /* Display: Gestión documental */
  $handler = $view->new_display('page', 'Gestión documental', 'gestion_documental');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gestión documental';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_instrumentos_fecha_exp',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['class'] = 'accordion-content';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list fondov2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['id'] = 'field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['table'] = 'field_data_field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['field'] = 'field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Descripcion */
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['id'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['table'] = 'field_data_field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['field'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['label'] = 'Descripción';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['exclude'] = TRUE;
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['id'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['table'] = 'field_data_field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['field'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['exclude'] = TRUE;
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['id'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['table'] = 'field_data_field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['field'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['label'] = 'Adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['path'] = '[field_instrumentos_adjunto]';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['alt'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_instrumentos_enlace']['id'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['table'] = 'field_data_field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['field'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['path'] = '[field_instrumentos_enlace]';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-19-24">
[field_instrumentos_descripcion] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_instrumentos_adjunto] 
[field_instrumentos_enlace]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha de Expedición -  start date (field_instrumentos_fecha_exp) */
  $handler->display->display_options['sorts']['field_instrumentos_fecha_exp_value']['id'] = 'field_instrumentos_fecha_exp_value';
  $handler->display->display_options['sorts']['field_instrumentos_fecha_exp_value']['table'] = 'field_data_field_instrumentos_fecha_exp';
  $handler->display->display_options['sorts']['field_instrumentos_fecha_exp_value']['field'] = 'field_instrumentos_fecha_exp_value';
  $handler->display->display_options['sorts']['field_instrumentos_fecha_exp_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
  );
  /* Filter criterion: Content: Clasificación (field_instrumentos_clasificacion) */
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['id'] = 'field_instrumentos_clasificacion_tid';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['table'] = 'field_data_field_instrumentos_clasificacion';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['field'] = 'field_instrumentos_clasificacion_tid';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['value'] = array(
    0 => '48',
  );
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['vocabulary'] = 'instrumentos_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/instrumentos-gestion-informacion-publica/gestion-documental';

  /* Display: Informe de PQR denuncias y solicitudes */
  $handler = $view->new_display('page', 'Informe de PQR denuncias y solicitudes', 'informe_pqr_denuncias_solicitudes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Informe de PQR denuncias y solicitudes';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_instrumentos_tipo_document',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_instrumentos_fecha_exp',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'fondov2';
  $handler->display->display_options['style_options']['class'] = 'accordion-content';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list fondov2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripcion */
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['id'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['table'] = 'field_data_field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['field'] = 'field_instrumentos_descripcion';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['label'] = 'Descripción';
  $handler->display->display_options['fields']['field_instrumentos_descripcion']['exclude'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['id'] = 'field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['table'] = 'field_data_field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['field'] = 'field_instrumentos_periodicidad';
  $handler->display->display_options['fields']['field_instrumentos_periodicidad']['exclude'] = TRUE;
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['id'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['table'] = 'field_data_field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['field'] = 'field_instrumentos_tipo_recurso';
  $handler->display->display_options['fields']['field_instrumentos_tipo_recurso']['exclude'] = TRUE;
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_instrumentos_enlace']['id'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['table'] = 'field_data_field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['field'] = 'field_instrumentos_enlace';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['path'] = '[field_instrumentos_enlace]';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instrumentos_enlace']['type'] = 'link_plain';
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['id'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['table'] = 'field_data_field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['field'] = 'field_instrumentos_adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['label'] = 'Adjunto';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['path'] = '[field_instrumentos_adjunto]';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['alt'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instrumentos_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['id'] = 'field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['table'] = 'field_data_field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['field'] = 'field_instrumentos_clasificacion';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de documento */
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['id'] = 'field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['table'] = 'field_data_field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['field'] = 'field_instrumentos_tipo_document';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_tipo_document']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['id'] = 'field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['table'] = 'field_data_field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['field'] = 'field_instrumentos_fecha_exp';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrumentos_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[field_instrumentos_tipo_document] ';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'pure-g views-fieldset';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-19-24">
[field_instrumentos_descripcion] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_instrumentos_adjunto] 
[field_instrumentos_enlace]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Tipo de documento (field_instrumentos_tipo_document) */
  $handler->display->display_options['sorts']['field_instrumentos_tipo_document_tid']['id'] = 'field_instrumentos_tipo_document_tid';
  $handler->display->display_options['sorts']['field_instrumentos_tipo_document_tid']['table'] = 'field_data_field_instrumentos_tipo_document';
  $handler->display->display_options['sorts']['field_instrumentos_tipo_document_tid']['field'] = 'field_instrumentos_tipo_document_tid';
  /* Sort criterion: Content: Fecha de Expedición -  start date (field_instrumentos_fecha_exp) */
  $handler->display->display_options['sorts']['field_instrumentos_fecha_exp_value']['id'] = 'field_instrumentos_fecha_exp_value';
  $handler->display->display_options['sorts']['field_instrumentos_fecha_exp_value']['table'] = 'field_data_field_instrumentos_fecha_exp';
  $handler->display->display_options['sorts']['field_instrumentos_fecha_exp_value']['field'] = 'field_instrumentos_fecha_exp_value';
  $handler->display->display_options['sorts']['field_instrumentos_fecha_exp_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'instrumentos_gestion_informacion' => 'instrumentos_gestion_informacion',
  );
  /* Filter criterion: Content: Clasificación (field_instrumentos_clasificacion) */
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['id'] = 'field_instrumentos_clasificacion_tid';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['table'] = 'field_data_field_instrumentos_clasificacion';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['field'] = 'field_instrumentos_clasificacion_tid';
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['value'] = array(
    0 => '49',
  );
  $handler->display->display_options['filters']['field_instrumentos_clasificacion_tid']['vocabulary'] = 'instrumentos_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/instrumentos-gestion-informacion-publica/Informe-pqr-denuncias-solicitudes';
  $translatables['instrumentos_gestion_informacion_publica'] = array(
    t('Master'),
    t('Informe de PQR denuncias y solicitudes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Integer a erat. Cras laoreet ligula cursus enim. Aenean scelerisque velit et tellus. Vestibulum dictum aliquet sem. Nulla facilisi. Vestibulum accumsan ante vitae elit. Nulla erat dolor, blandit in, rutrum quis, semper pulvinar, enim. Nullam varius congue risus. Vivamus sollicitudin, metus ut interdum eleifend, nisi tellus pellentesque elit, tristique accumsan eros quam et risus. Suspendisse libero odio, mattis sit amet, aliquet eget, hendrerit vel, nulla. Sed vitae augue. Aliquam erat volutpat. Aliquam feugiat vulputate nisl. Suspendisse quis nulla pretium ante pretium mollis. Proin velit ligula, sagittis at, egestas a, pulvinar quis, nisl.'),
    t('Nombre'),
    t(' Descargar'),
    t('Tipo de Recurso'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-19-24">
[field_instrumentos_descripcion] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_instrumentos_adjunto] 
[field_instrumentos_enlace]
</div>
</div>'),
    t('Instrumentos de gestión de información pública '),
    t('Instrumentos de gestión de información pública'),
    t('Relacionados con la información'),
    t('Relacionados con la Información'),
    t('Descripción'),
    t(' Descargar '),
    t('Descargar documento'),
    t('Enlace'),
    t(' Ver más'),
    t('Ir al documento'),
    t('Gestión documental'),
    t('Adjunto'),
    t('Periodicidad'),
    t('Ver más'),
    t('Fieldset'),
    t('[field_instrumentos_tipo_document] '),
  );
  $export['instrumentos_gestion_informacion_publica'] = $view;

  return $export;
}
