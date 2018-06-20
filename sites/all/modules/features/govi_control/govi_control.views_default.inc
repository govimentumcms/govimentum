<?php
/**
 * @file
 * govi_control.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_control_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'control';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '7. Control';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reportes de control interno';
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
  $handler->display->display_options['header']['area']['content'] = 'Praesent consequat interdum elit, at egestas urna fringilla vitae. Duis luctus finibus purus id iaculis. Nam mattis purus eu sapien efficitur vehicula. Fusce ultrices, nibh nec maximus sodales, lacus ligula viverra felis, sed posuere dui risus vel nisl. Morbi molestie dolor a turpis elementum, ut venenatis erat dapibus. Sed ullamcorper, orci tincidunt faucibus sollicitudin, mauris erat malesuada mauris, vel tincidunt leo enim eu mi. Nunc placerat molestie erat ac aliquam. Sed non justo orci. Ut tempor semper tincidunt. Sed felis leo, finibus eu risus et, porttitor consequat erat. Cras vehicula sem nec orci mattis porta.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Fecha de publicación (field_fecha_de_publicacion) */
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['id'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['field'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['order'] = 'DESC';
  /* Sort criterion: Content: Fecha de Expedicion -  start date (field_contratacion_fecha_exp) */
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['id'] = 'field_contratacion_fecha_exp_value';
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['table'] = 'field_data_field_contratacion_fecha_exp';
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['field'] = 'field_contratacion_fecha_exp_value';
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['order'] = 'DESC';
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
    'control' => 'control',
  );
  /* Filter criterion: Content: Clasificación (field_control_clasificacion) */
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['id'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['field'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['value'] = array(
    0 => '67',
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['vocabulary'] = 'control_clasificacion';

  /* Display: Control */
  $handler = $view->new_display('page', '10. Control', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '10. Control';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = ' Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_control_descripcion']['id'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['table'] = 'field_data_field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['field'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['label'] = '';
  $handler->display->display_options['fields']['field_control_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_descripcion']['element_label_colon'] = FALSE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_control_periodicidad']['id'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['table'] = 'field_data_field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['field'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['label'] = '';
  $handler->display->display_options['fields']['field_control_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_periodicidad']['element_label_colon'] = FALSE;
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['id'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['table'] = 'field_data_field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['field'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['label'] = '';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['click_sort_column'] = 'fid';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_control_enlace_externo']['id'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['table'] = 'field_data_field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['field'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['label'] = '';
  $handler->display->display_options['fields']['field_control_enlace_externo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['click_sort_column'] = 'url';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['id'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['field'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['label'] = '';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_control_clasificacion']['id'] = 'field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['field'] = 'field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_control_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_clasificacion']['element_label_colon'] = FALSE;
  /* Field: Content: Tipo de Informe de Gestión */
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['id'] = 'field_control_tipo_infor_gestion';
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['table'] = 'field_data_field_control_tipo_infor_gestion';
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['field'] = 'field_control_tipo_infor_gestion';
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['label'] = '';
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['element_label_colon'] = FALSE;
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['id'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['table'] = 'field_data_field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['field'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['label'] = '';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
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
    'control' => 'control',
  );
  $handler->display->display_options['path'] = 'transparencia/control';

  /* Display: Informes de gestión, evaluación y auditoria */
  $handler = $view->new_display('page', 'Informes de gestión, evaluación y auditoria', 'informes_gestion_evaluacion_auditoria');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Informes de gestión, evaluación y auditoria';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_control_tipo_infor_gestion',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_contro_fecha_de_expedici_n',
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_control_descripcion']['id'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['table'] = 'field_data_field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['field'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_control_periodicidad']['id'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['table'] = 'field_data_field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['field'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['id'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['table'] = 'field_data_field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['field'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['path'] = '[field_control_archivo_adjunto]';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['alt'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_control_enlace_externo']['id'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['table'] = 'field_data_field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['field'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_control_enlace_externo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['path'] = '[field_control_enlace_externo-url]';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_enlace_externo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_control_enlace_externo']['type'] = 'link_plain';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['id'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['field'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['label'] = '';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_control_clasificacion']['id'] = 'field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['field'] = 'field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_control_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_clasificacion']['element_label_colon'] = FALSE;
  /* Field: Content: Tipo de Informe de Gestión */
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['id'] = 'field_control_tipo_infor_gestion';
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['table'] = 'field_data_field_control_tipo_infor_gestion';
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['field'] = 'field_control_tipo_infor_gestion';
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['label'] = '';
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_tipo_infor_gestion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['id'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['table'] = 'field_data_field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['field'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_control_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_control_periodicidad]  
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_control_archivo_adjunto]
[field_control_enlace_externo]
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha de Expedición -  start date (field_contro_fecha_de_expedici_n) */
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['id'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['field'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['order'] = 'DESC';
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
    'control' => 'control',
  );
  /* Filter criterion: Content: Clasificación (field_control_clasificacion) */
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['id'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['field'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['value'] = array(
    0 => '67',
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['vocabulary'] = 'control_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/control/informes-gestion-evaluacion-auditoria';

  /* Display: Reportes de control interno */
  $handler = $view->new_display('page', 'Reportes de control interno', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reportes de control interno';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contro_fecha_de_expedici_n',
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Proin fringilla elementum blandit. Quisque non rutrum odio. Proin quam nisi, lobortis a sapien ut, pretium euismod lorem. Mauris viverra placerat blandit. Ut eget euismod enim. Vestibulum commodo felis vel porta imperdiet. Etiam lacinia vitae libero sit amet ullamcorper. Ut nunc libero, facilisis eget ultrices vel, semper eget orci. Mauris et hendrerit turpis, sit amet tincidunt enim. Nunc vitae orci justo. Sed sed lorem dictum, ultricies ligula sed, hendrerit nisi. Nullam in mi ac arcu suscipit scelerisque eget vitae dolor. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_control_descripcion']['id'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['table'] = 'field_data_field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['field'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_control_periodicidad']['id'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['table'] = 'field_data_field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['field'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['id'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['table'] = 'field_data_field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['field'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['path'] = '[field_control_archivo_adjunto]';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_control_enlace_externo']['id'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['table'] = 'field_data_field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['field'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['path'] = '[field_control_enlace_externo-url]';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_enlace_externo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_control_enlace_externo']['type'] = 'link_plain';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['id'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['field'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['label'] = '';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['id'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['table'] = 'field_data_field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['field'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_control_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_control_periodicidad]  
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_control_archivo_adjunto]
[field_control_enlace_externo]
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha de Expedición -  start date (field_contro_fecha_de_expedici_n) */
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['id'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['field'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['order'] = 'DESC';
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
    'control' => 'control',
  );
  /* Filter criterion: Content: Clasificación (field_control_clasificacion) */
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['id'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['field'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['value'] = array(
    0 => '68',
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['vocabulary'] = 'control_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/control/reportes-control-interno';

  /* Display: Planes de mejoramiento */
  $handler = $view->new_display('page', 'Planes de mejoramiento', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Planes de mejoramiento';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contro_fecha_de_expedici_n',
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Aliquam erat volutpat. Proin lorem arcu, blandit et lobortis non, feugiat quis tortor. Duis varius, urna ac mollis tempus, tellus ligula scelerisque justo, fermentum interdum felis arcu vel dolor. Quisque interdum lorem suscipit nunc euismod vehicula. Donec placerat lorem et orci gravida tincidunt. Cras et sem eu enim cursus laoreet ac eget nisi. Pellentesque a ante feugiat, cursus magna non, vulputate ex. Cras vitae ligula in velit ornare molestie ac id eros. Cras pellentesque ut sapien fringilla tincidunt. Ut tellus massa, scelerisque id condimentum non, placerat a orci. Praesent tincidunt magna vitae ipsum venenatis iaculis. In luctus dignissim erat et semper. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_control_descripcion']['id'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['table'] = 'field_data_field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['field'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_control_periodicidad']['id'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['table'] = 'field_data_field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['field'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['id'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['table'] = 'field_data_field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['field'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['path'] = '[field_control_archivo_adjunto]';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_control_enlace_externo']['id'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['table'] = 'field_data_field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['field'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['path'] = '[field_control_enlace_externo-url]';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_enlace_externo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_control_enlace_externo']['type'] = 'link_plain';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['id'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['field'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['label'] = '';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['id'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['table'] = 'field_data_field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['field'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_control_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_control_periodicidad]  
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_control_archivo_adjunto]
[field_control_enlace_externo]
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha de publicación (field_fecha_de_publicacion) */
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['id'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['field'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['order'] = 'DESC';
  /* Sort criterion: Content: Fecha de Expedición -  start date (field_contro_fecha_de_expedici_n) */
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['id'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['field'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['order'] = 'DESC';
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
    'control' => 'control',
  );
  /* Filter criterion: Content: Clasificación (field_control_clasificacion) */
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['id'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['field'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['value'] = array(
    0 => '69',
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['vocabulary'] = 'control_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/control/planes-mejoramiento';

  /* Display: Entes de control, vigilancia y mecamismos de supervición */
  $handler = $view->new_display('page', 'Entes de control, vigilancia y mecamismos de supervición', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Entes de control, vigilancia y mecanismos de supervición';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contro_fecha_de_expedici_n',
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Aliquam erat volutpat. Proin lorem arcu, blandit et lobortis non, feugiat quis tortor. Duis varius, urna ac mollis tempus, tellus ligula scelerisque justo, fermentum interdum felis arcu vel dolor. Quisque interdum lorem suscipit nunc euismod vehicula. Donec placerat lorem et orci gravida tincidunt. Cras et sem eu enim cursus laoreet ac eget nisi. Pellentesque a ante feugiat, cursus magna non, vulputate ex. Cras vitae ligula in velit ornare molestie ac id eros. Cras pellentesque ut sapien fringilla tincidunt. Ut tellus massa, scelerisque id condimentum non, placerat a orci. Praesent tincidunt magna vitae ipsum venenatis iaculis. In luctus dignissim erat et semper. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_control_descripcion']['id'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['table'] = 'field_data_field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['field'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_control_periodicidad']['id'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['table'] = 'field_data_field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['field'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['id'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['table'] = 'field_data_field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['field'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['path'] = '[field_control_archivo_adjunto]';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_control_enlace_externo']['id'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['table'] = 'field_data_field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['field'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['path'] = '[field_control_enlace_externo-url]';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_enlace_externo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_control_enlace_externo']['type'] = 'link_plain';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['id'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['field'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['label'] = '';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['id'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['table'] = 'field_data_field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['field'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_control_clasificacion']['id'] = 'field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['field'] = 'field_control_clasificacion';
  $handler->display->display_options['fields']['field_control_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_control_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_clasificacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_clasificacion']['alter']['text'] = 'Lista de documentos';
  $handler->display->display_options['fields']['field_control_clasificacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_control_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_control_periodicidad]  
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_control_archivo_adjunto]
[field_control_enlace_externo]
</div>
</div>
';
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
    'control' => 'control',
  );
  /* Filter criterion: Content: Clasificación (field_control_clasificacion) */
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['id'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['field'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['value'] = array(
    0 => '70',
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['operator_id'] = 'field_control_clasificacion_tid_op';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['label'] = 'Clasificación (field_control_clasificacion)';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['operator'] = 'field_control_clasificacion_tid_op';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['identifier'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['vocabulary'] = 'control_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/control/entes-control-vigilancia-mecanismos-supervicion';

  /* Display: Información para población vulnerable */
  $handler = $view->new_display('page', 'Información para población vulnerable', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Información para población vulnerable';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contro_fecha_de_expedici_n',
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Aliquam erat volutpat. Proin lorem arcu, blandit et lobortis non, feugiat quis tortor. Duis varius, urna ac mollis tempus, tellus ligula scelerisque justo, fermentum interdum felis arcu vel dolor. Quisque interdum lorem suscipit nunc euismod vehicula. Donec placerat lorem et orci gravida tincidunt. Cras et sem eu enim cursus laoreet ac eget nisi. Pellentesque a ante feugiat, cursus magna non, vulputate ex. Cras vitae ligula in velit ornare molestie ac id eros. Cras pellentesque ut sapien fringilla tincidunt. Ut tellus massa, scelerisque id condimentum non, placerat a orci. Praesent tincidunt magna vitae ipsum venenatis iaculis. In luctus dignissim erat et semper. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_control_descripcion']['id'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['table'] = 'field_data_field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['field'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_control_periodicidad']['id'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['table'] = 'field_data_field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['field'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['id'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['table'] = 'field_data_field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['field'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['path'] = '[field_control_archivo_adjunto]';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_control_enlace_externo']['id'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['table'] = 'field_data_field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['field'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['path'] = '[field_control_enlace_externo-url]';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_enlace_externo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_control_enlace_externo']['type'] = 'link_plain';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['id'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['field'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['label'] = '';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['id'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['table'] = 'field_data_field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['field'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_control_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_control_periodicidad]  
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_control_archivo_adjunto]
[field_control_enlace_externo]
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha de Expedición -  start date (field_contro_fecha_de_expedici_n) */
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['id'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['field'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['order'] = 'DESC';
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
    'control' => 'control',
  );
  /* Filter criterion: Content: Clasificación (field_control_clasificacion) */
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['id'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['field'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['value'] = array(
    0 => '71',
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['operator_id'] = 'field_control_clasificacion_tid_op';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['label'] = 'Clasificación (field_control_clasificacion)';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['operator'] = 'field_control_clasificacion_tid_op';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['identifier'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['vocabulary'] = 'control_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/control/informacion-poblacion-vulnerable';

  /* Display: Defensa judicial */
  $handler = $view->new_display('page', 'Defensa judicial', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Defensa judicial';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contro_fecha_de_expedici_n',
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Aliquam erat volutpat. Proin lorem arcu, blandit et lobortis non, feugiat quis tortor. Duis varius, urna ac mollis tempus, tellus ligula scelerisque justo, fermentum interdum felis arcu vel dolor. Quisque interdum lorem suscipit nunc euismod vehicula. Donec placerat lorem et orci gravida tincidunt. Cras et sem eu enim cursus laoreet ac eget nisi. Pellentesque a ante feugiat, cursus magna non, vulputate ex. Cras vitae ligula in velit ornare molestie ac id eros. Cras pellentesque ut sapien fringilla tincidunt. Ut tellus massa, scelerisque id condimentum non, placerat a orci. Praesent tincidunt magna vitae ipsum venenatis iaculis. In luctus dignissim erat et semper. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_control_descripcion']['id'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['table'] = 'field_data_field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['field'] = 'field_control_descripcion';
  $handler->display->display_options['fields']['field_control_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_control_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_control_periodicidad']['id'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['table'] = 'field_data_field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['field'] = 'field_control_periodicidad';
  $handler->display->display_options['fields']['field_control_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['id'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['table'] = 'field_data_field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['field'] = 'field_control_archivo_adjunto';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['path'] = '[field_control_archivo_adjunto]';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_control_archivo_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_control_enlace_externo']['id'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['table'] = 'field_data_field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['field'] = 'field_control_enlace_externo';
  $handler->display->display_options['fields']['field_control_enlace_externo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['path'] = '[field_control_enlace_externo-url]';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_control_enlace_externo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_control_enlace_externo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_control_enlace_externo']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_control_enlace_externo']['type'] = 'link_plain';
  /* Field: Content: Fecha de Expedición */
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['id'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['field'] = 'field_contro_fecha_de_expedici_n';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['label'] = '';
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contro_fecha_de_expedici_n']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['id'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['table'] = 'field_data_field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['field'] = 'field_control_tipo_de_recurso';
  $handler->display->display_options['fields']['field_control_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Content: Estado de Demandas */
  $handler->display->display_options['fields']['field_control_demandas_estado']['id'] = 'field_control_demandas_estado';
  $handler->display->display_options['fields']['field_control_demandas_estado']['table'] = 'field_data_field_control_demandas_estado';
  $handler->display->display_options['fields']['field_control_demandas_estado']['field'] = 'field_control_demandas_estado';
  $handler->display->display_options['fields']['field_control_demandas_estado']['label'] = '';
  $handler->display->display_options['fields']['field_control_demandas_estado']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_demandas_estado']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_demandas_estado']['hide_empty'] = TRUE;
  /* Field: Content: Número de demandas */
  $handler->display->display_options['fields']['field_control_demandas']['id'] = 'field_control_demandas';
  $handler->display->display_options['fields']['field_control_demandas']['table'] = 'field_data_field_control_demandas';
  $handler->display->display_options['fields']['field_control_demandas']['field'] = 'field_control_demandas';
  $handler->display->display_options['fields']['field_control_demandas']['label'] = '';
  $handler->display->display_options['fields']['field_control_demandas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_demandas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_demandas']['hide_empty'] = TRUE;
  /* Field: Content: Pretención o cuantia de la demanda */
  $handler->display->display_options['fields']['field_control_demandas_cuantia']['id'] = 'field_control_demandas_cuantia';
  $handler->display->display_options['fields']['field_control_demandas_cuantia']['table'] = 'field_data_field_control_demandas_cuantia';
  $handler->display->display_options['fields']['field_control_demandas_cuantia']['field'] = 'field_control_demandas_cuantia';
  $handler->display->display_options['fields']['field_control_demandas_cuantia']['label'] = '';
  $handler->display->display_options['fields']['field_control_demandas_cuantia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_demandas_cuantia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_demandas_cuantia']['hide_empty'] = TRUE;
  /* Field: Content: Riesgo de Perdida */
  $handler->display->display_options['fields']['field_control_riesgo']['id'] = 'field_control_riesgo';
  $handler->display->display_options['fields']['field_control_riesgo']['table'] = 'field_data_field_control_riesgo';
  $handler->display->display_options['fields']['field_control_riesgo']['field'] = 'field_control_riesgo';
  $handler->display->display_options['fields']['field_control_riesgo']['label'] = '';
  $handler->display->display_options['fields']['field_control_riesgo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_control_riesgo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_control_riesgo']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_control_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_control_periodicidad]  
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_control_archivo_adjunto]
[field_control_enlace_externo]
</div>
<div class="pure-u-xl-1 demandas">
Número de demandas: [field_control_demandas] <br>
Estado de las Demandas: [field_control_demandas_estado]<br>
Cuantia:[field_control_demandas_cuantia] <br>
Riesgo de perdida:[field_control_riesgo] 
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha de Expedición -  start date (field_contro_fecha_de_expedici_n) */
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['id'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['table'] = 'field_data_field_contro_fecha_de_expedici_n';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['field'] = 'field_contro_fecha_de_expedici_n_value';
  $handler->display->display_options['sorts']['field_contro_fecha_de_expedici_n_value']['order'] = 'DESC';
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
    'control' => 'control',
  );
  /* Filter criterion: Content: Clasificación (field_control_clasificacion) */
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['id'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['table'] = 'field_data_field_control_clasificacion';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['field'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['value'] = array(
    0 => '72',
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['operator_id'] = 'field_control_clasificacion_tid_op';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['label'] = 'Clasificación (field_control_clasificacion)';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['operator'] = 'field_control_clasificacion_tid_op';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['identifier'] = 'field_control_clasificacion_tid';
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_control_clasificacion_tid']['vocabulary'] = 'control_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/control/defensa-judicial';
  $translatables['control'] = array(
    t('Master'),
    t('Reportes de control interno'),
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
    t('Praesent consequat interdum elit, at egestas urna fringilla vitae. Duis luctus finibus purus id iaculis. Nam mattis purus eu sapien efficitur vehicula. Fusce ultrices, nibh nec maximus sodales, lacus ligula viverra felis, sed posuere dui risus vel nisl. Morbi molestie dolor a turpis elementum, ut venenatis erat dapibus. Sed ullamcorper, orci tincidunt faucibus sollicitudin, mauris erat malesuada mauris, vel tincidunt leo enim eu mi. Nunc placerat molestie erat ac aliquam. Sed non justo orci. Ut tempor semper tincidunt. Sed felis leo, finibus eu risus et, porttitor consequat erat. Cras vehicula sem nec orci mattis porta.'),
    t('Control'),
    t(' Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.'),
    t('Informes de gestión, evaluación y auditoria'),
    t('Nombre'),
    t('Descripción'),
    t('Periodicidad'),
    t('Archivo Adjunto'),
    t(' Descargar '),
    t('Descargar documento'),
    t('Enlace'),
    t(' Ver más'),
    t('Ir a la localización del documento'),
    t('Tipo de Recurso'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_control_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_control_periodicidad]  
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_control_archivo_adjunto]
[field_control_enlace_externo]
</div>
</div>
'),
    t('Proin fringilla elementum blandit. Quisque non rutrum odio. Proin quam nisi, lobortis a sapien ut, pretium euismod lorem. Mauris viverra placerat blandit. Ut eget euismod enim. Vestibulum commodo felis vel porta imperdiet. Etiam lacinia vitae libero sit amet ullamcorper. Ut nunc libero, facilisis eget ultrices vel, semper eget orci. Mauris et hendrerit turpis, sit amet tincidunt enim. Nunc vitae orci justo. Sed sed lorem dictum, ultricies ligula sed, hendrerit nisi. Nullam in mi ac arcu suscipit scelerisque eget vitae dolor. '),
    t('Enlace externo'),
    t('Ver más'),
    t('Planes de mejoramiento'),
    t('Aliquam erat volutpat. Proin lorem arcu, blandit et lobortis non, feugiat quis tortor. Duis varius, urna ac mollis tempus, tellus ligula scelerisque justo, fermentum interdum felis arcu vel dolor. Quisque interdum lorem suscipit nunc euismod vehicula. Donec placerat lorem et orci gravida tincidunt. Cras et sem eu enim cursus laoreet ac eget nisi. Pellentesque a ante feugiat, cursus magna non, vulputate ex. Cras vitae ligula in velit ornare molestie ac id eros. Cras pellentesque ut sapien fringilla tincidunt. Ut tellus massa, scelerisque id condimentum non, placerat a orci. Praesent tincidunt magna vitae ipsum venenatis iaculis. In luctus dignissim erat et semper. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. '),
    t('Entes de control, vigilancia y mecamismos de supervición'),
    t('Entes de control, vigilancia y mecanismos de supervición'),
    t('Lista de documentos'),
    t('Clasificación (field_control_clasificacion)'),
    t('Información para población vulnerable'),
    t('Defensa judicial'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_control_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_control_periodicidad]  
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_control_archivo_adjunto]
[field_control_enlace_externo]
</div>
<div class="pure-u-xl-1 demandas">
Número de demandas: [field_control_demandas] <br>
Estado de las Demandas: [field_control_demandas_estado]<br>
Cuantia:[field_control_demandas_cuantia] <br>
Riesgo de perdida:[field_control_riesgo] 
</div>
</div>
'),
  );
  $export['control'] = $view;

  return $export;
}
