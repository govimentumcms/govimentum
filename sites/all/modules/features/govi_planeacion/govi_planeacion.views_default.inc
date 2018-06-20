<?php
/**
 * @file
 * govi_planeacion.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_planeacion_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'planeacion';
  $view->description = 'Implementa la visualización de planeación que afecta la Entidad';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '6. Planeación';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '6. Planeación';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_planeacion_fecha_expe',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.';
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
  $handler->display->display_options['fields']['field_planeacion_descripcion']['id'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['table'] = 'field_data_field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['field'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['id'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['table'] = 'field_data_field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['field'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['id'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['table'] = 'field_data_field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['field'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['path'] = '[field_archivo_adjunto_planeacion]';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alt'] = 'Descargar';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['id'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['table'] = 'field_data_field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['field'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['path'] = '[field_enlace_externo_planeacion-url]';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['type'] = 'link_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['id'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['field'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha Expedición */
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['id'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['field'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación de planes */
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['id'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['field'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clasificación Metas e Indicadores */
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['id'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['table'] = 'field_data_field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['field'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['id'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['table'] = 'field_data_field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['field'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[field_planeacion_clasificacion]';
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
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_planeacion_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_planeacion_periodicidad] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Fecha Expedición -  start date (field_planeacion_fecha_expe) */
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['id'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['field'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['order'] = 'DESC';
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
    'planeacion' => 'planeacion',
  );
  /* Filter criterion: Content: Clasificación (field_planeacion_clasificacion) */
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['id'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['field'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['value'] = array(
    0 => '35',
  );
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['vocabulary'] = 'planeacion_clasificacion';

  /* Display: Planeación */
  $handler = $view->new_display('page', '6. Planeación', 'planeacion');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '6. Planeación';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum pharetra risus et laoreet tristique. Morbi consectetur lectus metus, nec tristique sapien posuere sed. Aliquam gravida dui non iaculis dapibus. Integer ultrices, tellus a varius vehicula, nisi lorem varius elit, a molestie libero nisi nec libero. In varius ante lorem, eget varius nunc mollis at. Donec et orci metus. Donec sodales, nisi at suscipit consectetur, dui nulla ultricies tortor, a lacinia quam felis eget leo. Proin nec imperdiet mi. Pellentesque molestie interdum commodo. Fusce sed tellus quis velit maximus pretium sit amet eget turpis. Donec vulputate, odio sed pellentesque egestas, tortor massa aliquam velit, vehicula consectetur tortor ante hendrerit velit. Praesent id metus quis risus imperdiet mattis. Nam nec viverra elit, eu sagittis orci.

';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_planeacion_descripcion']['id'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['table'] = 'field_data_field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['field'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['id'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['table'] = 'field_data_field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['field'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['id'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['table'] = 'field_data_field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['field'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['path'] = '[field_archivo_adjunto_planeacion]';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alt'] = 'Descargar';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['id'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['table'] = 'field_data_field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['field'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['path'] = '[field_enlace_externo_planeacion-url]';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['type'] = 'link_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['id'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['field'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha Expedición */
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['id'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['field'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación de planes */
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['id'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['field'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clasificación Metas e Indicadores */
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['id'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['table'] = 'field_data_field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['field'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['id'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['table'] = 'field_data_field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['field'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[field_planeacion_clasificacion]';
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
    'planeacion' => 'planeacion',
  );
  $handler->display->display_options['path'] = 'transparencia/planeacion';

  /* Display: Planes */
  $handler = $view->new_display('page', 'Planes', 'planes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Planes';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_planeacion_clasi_planes',
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
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_planeacion_descripcion']['id'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['table'] = 'field_data_field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['field'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['id'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['table'] = 'field_data_field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['field'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['id'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['table'] = 'field_data_field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['field'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['path'] = '[field_archivo_adjunto_planeacion]';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alt'] = 'Descargar';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['id'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['table'] = 'field_data_field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['field'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['path'] = '[field_enlace_externo_planeacion-url]';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['type'] = 'link_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['id'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['field'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha Expedición */
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['id'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['field'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación de planes */
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['id'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['field'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clasificación Metas e Indicadores */
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['id'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['table'] = 'field_data_field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['field'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['id'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['table'] = 'field_data_field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['field'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[field_planeacion_clasi_planes]';
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
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_planeacion_descripcion]
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_planeacion_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha Expedición -  start date (field_planeacion_fecha_expe) */
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['id'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['field'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['order'] = 'DESC';
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
    'planeacion' => 'planeacion',
  );
  /* Filter criterion: Content: Clasificación (field_planeacion_clasificacion) */
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['id'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['field'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['value'] = array(
    0 => '33',
  );
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['vocabulary'] = 'planeacion_clasificacion';
  /* Filter criterion: Content: Clasificación de planes (field_planeacion_clasi_planes) */
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['id'] = 'field_planeacion_clasi_planes_tid';
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['field'] = 'field_planeacion_clasi_planes_tid';
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['value'] = array(
    0 => '46',
  );
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['vocabulary'] = 'planeacion_clasificacion_planes';
  $handler->display->display_options['path'] = 'transparencia/planeacion/planes';

  /* Display: Programas y proyectos */
  $handler = $view->new_display('page', 'Programas y proyectos', 'programas_proyectos');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Programas y Proyectos';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_planeacion_fecha_expe',
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
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_planeacion_descripcion']['id'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['table'] = 'field_data_field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['field'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['id'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['table'] = 'field_data_field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['field'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['id'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['table'] = 'field_data_field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['field'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['path'] = '[field_enlace_externo_planeacion-url]';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['type'] = 'link_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['id'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['table'] = 'field_data_field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['field'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['label'] = 'Archivo adjunto';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['path'] = '[field_archivo_adjunto_planeacion]';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alt'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['id'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['field'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha Expedición */
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['id'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['field'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación de planes */
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['id'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['field'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clasificación Metas e Indicadores */
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['id'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['table'] = 'field_data_field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['field'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['id'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['table'] = 'field_data_field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['field'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_planeacion_descripcion]
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_planeacion_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha Expedición -  start date (field_planeacion_fecha_expe) */
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['id'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['field'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['order'] = 'DESC';
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
    'planeacion' => 'planeacion',
  );
  /* Filter criterion: Content: Clasificación (field_planeacion_clasificacion) */
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['id'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['field'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['value'] = array(
    0 => '34',
  );
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['vocabulary'] = 'planeacion_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/planeacion/programas-proyectos';

  /* Display: Metas objetivos e Indicadores */
  $handler = $view->new_display('page', 'Metas objetivos e Indicadores', 'metas_indicadores');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Metas objetivos e Indicadores';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_clasi_metas_indicadores',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_planeacion_fecha_expe',
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
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.';
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
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_planeacion_descripcion']['id'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['table'] = 'field_data_field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['field'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['id'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['table'] = 'field_data_field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['field'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['id'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['table'] = 'field_data_field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['field'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['path'] = '[field_enlace_externo_planeacion-url]';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['type'] = 'link_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['id'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['table'] = 'field_data_field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['field'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['label'] = 'Archivo adjunto';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['path'] = '[field_archivo_adjunto_planeacion]';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alt'] = ' Descargar documento';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['id'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['field'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha Expedición */
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['id'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['field'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación de planes */
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['id'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['field'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clasificación Metas e Indicadores */
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['id'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['table'] = 'field_data_field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['field'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['label'] = '';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['id'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['table'] = 'field_data_field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['field'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[field_clasi_metas_indicadores]';
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
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_planeacion_descripcion]
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_planeacion_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha Expedición -  start date (field_planeacion_fecha_expe) */
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['id'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['field'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['order'] = 'DESC';
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
    'planeacion' => 'planeacion',
  );
  /* Filter criterion: Content: Clasificación (field_planeacion_clasificacion) */
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['id'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['field'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['value'] = array(
    0 => '31',
  );
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['vocabulary'] = 'planeacion_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/planeacion/metas-objetivos-indicadores';

  /* Display: Participación Ciudadana */
  $handler = $view->new_display('page', 'Participación Ciudadana', 'participacion_ciudadana');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Participación Ciudadana';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_planeacion_fecha_expe',
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
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.';
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
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_planeacion_descripcion']['id'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['table'] = 'field_data_field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['field'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['id'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['table'] = 'field_data_field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['field'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['id'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['table'] = 'field_data_field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['field'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['label'] = '';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['path'] = '[field_enlace_externo_planeacion-url]';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['type'] = 'link_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['id'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['table'] = 'field_data_field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['field'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['label'] = 'Archivo adjunto';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['path'] = '[field_archivo_adjunto_planeacion]';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alt'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['id'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['field'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha Expedición */
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['id'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['field'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación de planes */
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['id'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['field'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clasificación Metas e Indicadores */
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['id'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['table'] = 'field_data_field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['field'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['id'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['table'] = 'field_data_field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['field'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_planeacion_descripcion]
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_planeacion_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha Expedición -  start date (field_planeacion_fecha_expe) */
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['id'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['field'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['order'] = 'DESC';
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
    'planeacion' => 'planeacion',
  );
  /* Filter criterion: Content: Clasificación (field_planeacion_clasificacion) */
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['id'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['field'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['value'] = array(
    0 => '32',
  );
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['vocabulary'] = 'planeacion_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/planeacion/participacion-ciudadana';

  /* Display: Informes de Empalme */
  $handler = $view->new_display('page', 'Informes de Empalme', 'informes_empalme');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Informes de Empalme';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_planeacion_fecha_expe',
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
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.';
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
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_planeacion_descripcion']['id'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['table'] = 'field_data_field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['field'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['id'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['table'] = 'field_data_field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['field'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['id'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['table'] = 'field_data_field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['field'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['path'] = '[field_enlace_externo_planeacion-url]';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['type'] = 'link_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['id'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['table'] = 'field_data_field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['field'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['label'] = 'Archivo adjunto';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['path'] = '[field_archivo_adjunto_planeacion]';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alt'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['id'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['field'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha Expedición */
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['id'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['field'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación de planes */
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['id'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['field'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clasificación Metas e Indicadores */
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['id'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['table'] = 'field_data_field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['field'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['id'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['table'] = 'field_data_field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['field'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_planeacion_descripcion]
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_planeacion_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha Expedición -  start date (field_planeacion_fecha_expe) */
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['id'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['field'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['order'] = 'DESC';
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
    'planeacion' => 'planeacion',
  );
  /* Filter criterion: Content: Clasificación (field_planeacion_clasificacion) */
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['id'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['field'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['value'] = array(
    0 => '30',
  );
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['vocabulary'] = 'planeacion_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/planeacion/informes-empalme';

  /* Display: Plan de gasto publico */
  $handler = $view->new_display('page', 'Plan de gasto publico', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Planes';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_planeacion_clasi_planes',
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
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_planeacion_descripcion']['id'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['table'] = 'field_data_field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['field'] = 'field_planeacion_descripcion';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_planeacion_descripcion']['alter']['trim'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['id'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['table'] = 'field_data_field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['field'] = 'field_planeacion_periodicidad';
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo Adjunto */
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['id'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['table'] = 'field_data_field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['field'] = 'field_archivo_adjunto_planeacion';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['path'] = '[field_archivo_adjunto_planeacion]';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['alt'] = 'Descargar';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_archivo_adjunto_planeacion']['type'] = 'file_url_plain';
  /* Field: Content: Enlace externo */
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['id'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['table'] = 'field_data_field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['field'] = 'field_enlace_externo_planeacion';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['label'] = 'Enlace';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['path'] = '[field_enlace_externo_planeacion-url]';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_externo_planeacion']['type'] = 'link_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['id'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['field'] = 'field_planeacion_clasificacion';
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha Expedición */
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['id'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['field'] = 'field_planeacion_fecha_expe';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_fecha_expe']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Clasificación de planes */
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['id'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['field'] = 'field_planeacion_clasi_planes';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['label'] = '';
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planeacion_clasi_planes']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clasificación Metas e Indicadores */
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['id'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['table'] = 'field_data_field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['field'] = 'field_clasi_metas_indicadores';
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clasi_metas_indicadores']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de Recurso */
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['id'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['table'] = 'field_data_field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['field'] = 'field_planeacion_tipo_de_recurso';
  $handler->display->display_options['fields']['field_planeacion_tipo_de_recurso']['exclude'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[field_planeacion_clasi_planes]';
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
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_planeacion_descripcion]
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_planeacion_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha Expedición -  start date (field_planeacion_fecha_expe) */
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['id'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['table'] = 'field_data_field_planeacion_fecha_expe';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['field'] = 'field_planeacion_fecha_expe_value';
  $handler->display->display_options['sorts']['field_planeacion_fecha_expe_value']['order'] = 'DESC';
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
    'planeacion' => 'planeacion',
  );
  /* Filter criterion: Content: Clasificación (field_planeacion_clasificacion) */
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['id'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['table'] = 'field_data_field_planeacion_clasificacion';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['field'] = 'field_planeacion_clasificacion_tid';
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['value'] = array(
    0 => '33',
  );
  $handler->display->display_options['filters']['field_planeacion_clasificacion_tid']['vocabulary'] = 'planeacion_clasificacion';
  /* Filter criterion: Content: Clasificación de planes (field_planeacion_clasi_planes) */
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['id'] = 'field_planeacion_clasi_planes_tid';
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['table'] = 'field_data_field_planeacion_clasi_planes';
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['field'] = 'field_planeacion_clasi_planes_tid';
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['value'] = array(
    0 => '46',
  );
  $handler->display->display_options['filters']['field_planeacion_clasi_planes_tid']['vocabulary'] = 'planeacion_clasificacion_planes';
  $handler->display->display_options['path'] = 'transparencia/planeacion/plan-de-gasto-publico';
  $translatables['planeacion'] = array(
    t('Master'),
    t('Planeación'),
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
    t('Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.'),
    t('Nombre'),
    t('Descripción'),
    t('Periodicidad'),
    t('Archivo Adjunto'),
    t(' Descargar '),
    t('Descargar'),
    t('Enlace'),
    t(' Ver más'),
    t('Ir a la localización del documento'),
    t('Clasificación'),
    t('Clasificación de planes'),
    t('Clasificación Metas e Indicadores'),
    t('Tipo de Recurso'),
    t('Fieldset'),
    t('[field_planeacion_clasificacion]'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_planeacion_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_planeacion_periodicidad] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>'),
    t(' Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum pharetra risus et laoreet tristique. Morbi consectetur lectus metus, nec tristique sapien posuere sed. Aliquam gravida dui non iaculis dapibus. Integer ultrices, tellus a varius vehicula, nisi lorem varius elit, a molestie libero nisi nec libero. In varius ante lorem, eget varius nunc mollis at. Donec et orci metus. Donec sodales, nisi at suscipit consectetur, dui nulla ultricies tortor, a lacinia quam felis eget leo. Proin nec imperdiet mi. Pellentesque molestie interdum commodo. Fusce sed tellus quis velit maximus pretium sit amet eget turpis. Donec vulputate, odio sed pellentesque egestas, tortor massa aliquam velit, vehicula consectetur tortor ante hendrerit velit. Praesent id metus quis risus imperdiet mattis. Nam nec viverra elit, eu sagittis orci.

'),
    t('Planes'),
    t('[field_planeacion_clasi_planes]'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_planeacion_descripcion]
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_planeacion_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_enlace_externo_planeacion] 
[field_archivo_adjunto_planeacion]
</div>
</div>'),
    t('Programas y proyectos'),
    t('Programas y Proyectos'),
    t('Archivo adjunto'),
    t('Descargar documento'),
    t('Metas objetivos e Indicadores'),
    t('Ver más'),
    t(' Descargar documento'),
    t('[field_clasi_metas_indicadores]'),
    t('Participación Ciudadana'),
    t('Informes de Empalme'),
    t('Plan de gasto publico'),
  );
  $export['planeacion'] = $view;

  return $export;
}
