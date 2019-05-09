<?php

/**
 * @file
 * govi_informacion_interes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_informacion_interes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'convocatorias';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Convocatorias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Convocatorias';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_convocatoria_clasificacion',
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
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Phasellus facilisis odio sed mi.
Curabitur suscipit. Nullam vel nisi. Etiam semper ipsum ut lectus. Proin aliquam, erat eget
pharetra commodo, eros mi condimentum quam, sed commodo justo quam ut velit.
Integer a erat.';
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
  /* Field: Content: Descripcion */
  $handler->display->display_options['fields']['field_convocatoria_descripcion']['id'] = 'field_convocatoria_descripcion';
  $handler->display->display_options['fields']['field_convocatoria_descripcion']['table'] = 'field_data_field_convocatoria_descripcion';
  $handler->display->display_options['fields']['field_convocatoria_descripcion']['field'] = 'field_convocatoria_descripcion';
  $handler->display->display_options['fields']['field_convocatoria_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_descripcion']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_convocatoria_descripcion']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Fechas */
  $handler->display->display_options['fields']['field_convocatoria_fechas']['id'] = 'field_convocatoria_fechas';
  $handler->display->display_options['fields']['field_convocatoria_fechas']['table'] = 'field_data_field_convocatoria_fechas';
  $handler->display->display_options['fields']['field_convocatoria_fechas']['field'] = 'field_convocatoria_fechas';
  $handler->display->display_options['fields']['field_convocatoria_fechas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_fechas']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_convocatoria_periodicidad']['id'] = 'field_convocatoria_periodicidad';
  $handler->display->display_options['fields']['field_convocatoria_periodicidad']['table'] = 'field_data_field_convocatoria_periodicidad';
  $handler->display->display_options['fields']['field_convocatoria_periodicidad']['field'] = 'field_convocatoria_periodicidad';
  $handler->display->display_options['fields']['field_convocatoria_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de recurso */
  $handler->display->display_options['fields']['field_convocatoria_recurso']['id'] = 'field_convocatoria_recurso';
  $handler->display->display_options['fields']['field_convocatoria_recurso']['table'] = 'field_data_field_convocatoria_recurso';
  $handler->display->display_options['fields']['field_convocatoria_recurso']['field'] = 'field_convocatoria_recurso';
  $handler->display->display_options['fields']['field_convocatoria_recurso']['exclude'] = TRUE;
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_convocatoria_enlace']['id'] = 'field_convocatoria_enlace';
  $handler->display->display_options['fields']['field_convocatoria_enlace']['table'] = 'field_data_field_convocatoria_enlace';
  $handler->display->display_options['fields']['field_convocatoria_enlace']['field'] = 'field_convocatoria_enlace';
  $handler->display->display_options['fields']['field_convocatoria_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_enlace']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_convocatoria_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_enlace']['alter']['path'] = '[field_convocatoria_enlace]';
  $handler->display->display_options['fields']['field_convocatoria_enlace']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_convocatoria_enlace']['alter']['link_class'] = 'colorbox-load pure-button ';
  $handler->display->display_options['fields']['field_convocatoria_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_convocatoria_enlace']['type'] = 'link_plain';
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['id'] = 'field_convocatoria_adjunto';
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['table'] = 'field_data_field_convocatoria_adjunto';
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['field'] = 'field_convocatoria_adjunto';
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['alter']['text'] = ' Descargar';
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['alter']['path'] = '[field_convocatoria_adjunto]?width=800&height=800&iframe=true';
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['alter']['link_class'] = 'colorbox-load pure-button ';
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_convocatoria_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_convocatoria_clasificacion']['id'] = 'field_convocatoria_clasificacion';
  $handler->display->display_options['fields']['field_convocatoria_clasificacion']['table'] = 'field_data_field_convocatoria_clasificacion';
  $handler->display->display_options['fields']['field_convocatoria_clasificacion']['field'] = 'field_convocatoria_clasificacion';
  $handler->display->display_options['fields']['field_convocatoria_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_convocatoria_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convocatoria_clasificacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_convocatoria_clasificacion']['type'] = 'taxonomy_term_reference_plain';
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
[field_convocatoria_descripcion] 
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_convocatoria_periodicidad]</p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_convocatoria_adjunto]
[field_convocatoria_enlace] 
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'convocatoria' => 'convocatoria',
  );

  /* Display: Convocatorias */
  $handler = $view->new_display('page', 'Convocatorias', 'page');
  $handler->display->display_options['path'] = 'transparencia/informacion-interes/convocatorias';
  $translatables['convocatorias'] = array(
    t('Master'),
    t('Convocatorias'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Phasellus facilisis odio sed mi.
Curabitur suscipit. Nullam vel nisi. Etiam semper ipsum ut lectus. Proin aliquam, erat eget
pharetra commodo, eros mi condimentum quam, sed commodo justo quam ut velit.
Integer a erat.'),
    t('Nombre'),
    t('Descripcion'),
    t('Fechas'),
    t('Periodicidad'),
    t('Tipo de recurso'),
    t('Enlace'),
    t('Ver más'),
    t('Ir al documento'),
    t('Archivo adjunto'),
    t(' Descargar'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_convocatoria_descripcion] 
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_convocatoria_periodicidad]</p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_convocatoria_adjunto]
[field_convocatoria_enlace] 
</div>
</div>'),
  );
  $export['convocatorias'] = $view;

  $view = new view();
  $view->name = 'documentos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '2. Información de interés';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Estudios, investigaciones y otras publicaciones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_documento_clasificacion_1',
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetuer adipiscing elit Goodman (1943). Donec ut massa. Nam quis tortor at leo congue accumsan. In nisl justo, consequat ac, dictum nec, hendrerit nec, nisl.1 Nulla ac erat et ligula pharetra nonummy. Cras consectetuer lorem et est. Suspendisse commodo euismod orci. Vestibulum mollis nulla non dolor. Suspendisse consectetuer dictum ligula. Nam viverra lacinia lorem. Proin arcu eros, convallis ut, sagittis eu, viverra vel, lacus. Pellentesque diam enim, tempus sed, rhoncus a, cursus in, metus. Morbi nibh purus, blandit sit amet, porttitor eu, pellentesque porttitor, felis. Quisque vitae magna a dolor euismod scelerisque.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titulo';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripcion */
  $handler->display->display_options['fields']['field_documento_descripcion']['id'] = 'field_documento_descripcion';
  $handler->display->display_options['fields']['field_documento_descripcion']['table'] = 'field_data_field_documento_descripcion';
  $handler->display->display_options['fields']['field_documento_descripcion']['field'] = 'field_documento_descripcion';
  $handler->display->display_options['fields']['field_documento_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_descripcion']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_documento_descripcion']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Clasificación del documento */
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['id'] = 'field_documento_clasificacion_1';
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['table'] = 'field_data_field_documento_clasificacion';
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['field'] = 'field_documento_clasificacion';
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['label'] = '';
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_documento_fecha']['id'] = 'field_documento_fecha';
  $handler->display->display_options['fields']['field_documento_fecha']['table'] = 'field_data_field_documento_fecha';
  $handler->display->display_options['fields']['field_documento_fecha']['field'] = 'field_documento_fecha';
  $handler->display->display_options['fields']['field_documento_fecha']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_fecha']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['id'] = 'field_docuemento_periodicidad';
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['table'] = 'field_data_field_docuemento_periodicidad';
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['field'] = 'field_docuemento_periodicidad';
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de recurso */
  $handler->display->display_options['fields']['field_documento_tipo_recurso']['id'] = 'field_documento_tipo_recurso';
  $handler->display->display_options['fields']['field_documento_tipo_recurso']['table'] = 'field_data_field_documento_tipo_recurso';
  $handler->display->display_options['fields']['field_documento_tipo_recurso']['field'] = 'field_documento_tipo_recurso';
  $handler->display->display_options['fields']['field_documento_tipo_recurso']['exclude'] = TRUE;
  /* Field: Content: Adjunto */
  $handler->display->display_options['fields']['field_documento_adjunto']['id'] = 'field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['table'] = 'field_data_field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['field'] = 'field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['label'] = 'Archivo Adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['text'] = ' Descargar';
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['path'] = '[field_documento_adjunto]?width=800&height=800&iframe=true';
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['link_class'] = 'colorbox-load pure-button';
  $handler->display->display_options['fields']['field_documento_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documento_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documento_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_documento_enlace']['id'] = 'field_documento_enlace';
  $handler->display->display_options['fields']['field_documento_enlace']['table'] = 'field_data_field_documento_enlace';
  $handler->display->display_options['fields']['field_documento_enlace']['field'] = 'field_documento_enlace';
  $handler->display->display_options['fields']['field_documento_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['path'] = '[field_documento_enlace]?width=800&height=800&iframe=true';
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['link_class'] = 'colorbox-load pure-button ';
  $handler->display->display_options['fields']['field_documento_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documento_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_documento_enlace']['type'] = 'link_plain';
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
[field_documento_descripcion] 
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_docuemento_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_documento_adjunto] 
[field_documento_enlace] 
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'documento' => 'documento',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'clasificacion_documentos';

  /* Display: Información de Interés */
  $handler = $view->new_display('page', 'Información de Interés', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Información de Interés';
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
  $handler->display->display_options['fields']['title']['label'] = 'Titulo';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Descripcion */
  $handler->display->display_options['fields']['field_documento_descripcion']['id'] = 'field_documento_descripcion';
  $handler->display->display_options['fields']['field_documento_descripcion']['table'] = 'field_data_field_documento_descripcion';
  $handler->display->display_options['fields']['field_documento_descripcion']['field'] = 'field_documento_descripcion';
  $handler->display->display_options['fields']['field_documento_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_descripcion']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_documento_descripcion']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Clasificación del documento */
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['id'] = 'field_documento_clasificacion_1';
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['table'] = 'field_data_field_documento_clasificacion';
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['field'] = 'field_documento_clasificacion';
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['label'] = '';
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documento_clasificacion_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_documento_fecha']['id'] = 'field_documento_fecha';
  $handler->display->display_options['fields']['field_documento_fecha']['table'] = 'field_data_field_documento_fecha';
  $handler->display->display_options['fields']['field_documento_fecha']['field'] = 'field_documento_fecha';
  $handler->display->display_options['fields']['field_documento_fecha']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_fecha']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['id'] = 'field_docuemento_periodicidad';
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['table'] = 'field_data_field_docuemento_periodicidad';
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['field'] = 'field_docuemento_periodicidad';
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_docuemento_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tipo de recurso */
  $handler->display->display_options['fields']['field_documento_tipo_recurso']['id'] = 'field_documento_tipo_recurso';
  $handler->display->display_options['fields']['field_documento_tipo_recurso']['table'] = 'field_data_field_documento_tipo_recurso';
  $handler->display->display_options['fields']['field_documento_tipo_recurso']['field'] = 'field_documento_tipo_recurso';
  $handler->display->display_options['fields']['field_documento_tipo_recurso']['exclude'] = TRUE;
  /* Field: Content: Adjunto */
  $handler->display->display_options['fields']['field_documento_adjunto']['id'] = 'field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['table'] = 'field_data_field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['field'] = 'field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['label'] = 'Archivo Adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['text'] = ' Descargar';
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['path'] = '[field_documento_adjunto]?width=800&height=800&iframe=true';
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['link_class'] = 'colorbox-load pure-button';
  $handler->display->display_options['fields']['field_documento_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documento_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_documento_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documento_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_documento_enlace']['id'] = 'field_documento_enlace';
  $handler->display->display_options['fields']['field_documento_enlace']['table'] = 'field_data_field_documento_enlace';
  $handler->display->display_options['fields']['field_documento_enlace']['field'] = 'field_documento_enlace';
  $handler->display->display_options['fields']['field_documento_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['text'] = 'Ver más';
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['path'] = '[field_documento_enlace]?width=800&height=800&iframe=true';
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_documento_enlace']['alter']['link_class'] = 'colorbox-load pure-button ';
  $handler->display->display_options['fields']['field_documento_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documento_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_documento_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_documento_enlace']['type'] = 'link_plain';
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
    'convocatoria' => 'convocatoria',
    'documento' => 'documento',
    'glosario' => 'glosario',
    'preguntas_frecuentes' => 'preguntas_frecuentes',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'transparencia/informacion-interes';

  /* Display: Estudios, investigaciones y otras publicaciones */
  $handler = $view->new_display('page', 'Estudios, investigaciones y otras publicaciones', 'page');
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
    'documento' => 'documento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    77 => '77',
    78 => '78',
    79 => '79',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'clasificacion_documentos';
  $handler->display->display_options['path'] = 'transparencia/informacion-interes/publicaciones';

  /* Display: Información Adicional */
  $handler = $view->new_display('page', 'Información Adicional', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'fondov2';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'documento' => 'documento',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    80 => '80',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'clasificacion_documentos';
  $handler->display->display_options['path'] = 'transparencia/informacion-interes/informacion-adicional';
  $translatables['documentos'] = array(
    t('Master'),
    t('Estudios, investigaciones y otras publicaciones'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Lorem ipsum dolor sit amet, consectetuer adipiscing elit Goodman (1943). Donec ut massa. Nam quis tortor at leo congue accumsan. In nisl justo, consequat ac, dictum nec, hendrerit nec, nisl.1 Nulla ac erat et ligula pharetra nonummy. Cras consectetuer lorem et est. Suspendisse commodo euismod orci. Vestibulum mollis nulla non dolor. Suspendisse consectetuer dictum ligula. Nam viverra lacinia lorem. Proin arcu eros, convallis ut, sagittis eu, viverra vel, lacus. Pellentesque diam enim, tempus sed, rhoncus a, cursus in, metus. Morbi nibh purus, blandit sit amet, porttitor eu, pellentesque porttitor, felis. Quisque vitae magna a dolor euismod scelerisque.'),
    t('Titulo'),
    t('Descripcion'),
    t('Fecha'),
    t('Periodicidad'),
    t('Tipo de recurso'),
    t('Archivo Adjunto'),
    t(' Descargar'),
    t('Ir al documento'),
    t('Enlace'),
    t('Ver más'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<span>Descripción</span>
<p>
[field_documento_descripcion] 
<p>
</div>
<div class="pure-u-xl-4-24">
<span>Periodicidad</span>
<p>[field_docuemento_periodicidad] </p>
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_documento_adjunto] 
[field_documento_enlace] 
</div>
</div>'),
    t('Has taxonomy term'),
    t('Información de Interés'),
    t('Información Adicional'),
  );
  $export['documentos'] = $view;

  $view = new view();
  $view->name = 'faqs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '2.4 Preguntas y respuestas frecuentes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '2.4 Preguntas y respuestas frecuentes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faq_clasificacion',
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'In mauris. Pellentesque dui nisi, iaculis eu, rhoncus in, venenatis ac, ante. Ut odio justo, scelerisque vel, facilisis non, commodo a, pede. Cras nec massa sit amet tortor volutpat varius. Donec lacinia, neque a luctus aliquet, pede massa imperdiet ante, at varius lorem pede sed sapien. Fusce erat nibh, aliquet in, eleifend eget, commodo eget, erat.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  /* Field: Content: Clasificacion */
  $handler->display->display_options['fields']['field_faq_clasificacion']['id'] = 'field_faq_clasificacion';
  $handler->display->display_options['fields']['field_faq_clasificacion']['table'] = 'field_data_field_faq_clasificacion';
  $handler->display->display_options['fields']['field_faq_clasificacion']['field'] = 'field_faq_clasificacion';
  $handler->display->display_options['fields']['field_faq_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_faq_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_clasificacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Respuesta */
  $handler->display->display_options['fields']['field_faq_respuesta']['id'] = 'field_faq_respuesta';
  $handler->display->display_options['fields']['field_faq_respuesta']['table'] = 'field_data_field_faq_respuesta';
  $handler->display->display_options['fields']['field_faq_respuesta']['field'] = 'field_faq_respuesta';
  $handler->display->display_options['fields']['field_faq_respuesta']['label'] = '';
  $handler->display->display_options['fields']['field_faq_respuesta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_respuesta']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_faq_respuesta']['alter']['text'] = '<i class="ref">[field_faq_respuesta]</i>';
  $handler->display->display_options['fields']['field_faq_respuesta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_respuesta']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-1">
<p>[field_faq_respuesta] <p>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'preguntas_frecuentes' => 'preguntas_frecuentes',
  );

  /* Display: 2.4 Preguntas y respuestas frecuentes */
  $handler = $view->new_display('page', '2.4 Preguntas y respuestas frecuentes', 'page');
  $handler->display->display_options['path'] = 'transparencia/informacion-interes/faqs';
  $translatables['faqs'] = array(
    t('Master'),
    t('2.4 Preguntas y respuestas frecuentes'),
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
    t('In mauris. Pellentesque dui nisi, iaculis eu, rhoncus in, venenatis ac, ante. Ut odio justo, scelerisque vel, facilisis non, commodo a, pede. Cras nec massa sit amet tortor volutpat varius. Donec lacinia, neque a luctus aliquet, pede massa imperdiet ante, at varius lorem pede sed sapien. Fusce erat nibh, aliquet in, eleifend eget, commodo eget, erat.'),
    t('<i class="ref">[field_faq_respuesta]</i>'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-1">
<p>[field_faq_respuesta] <p>
</div>
</div>'),
  );
  $export['faqs'] = $view;

  $view = new view();
  $view->name = 'glosario';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '2.5 Glosario';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '2.5 Glosario';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'fondov2';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Definicion */
  $handler->display->display_options['fields']['field_glosario_definicion']['id'] = 'field_glosario_definicion';
  $handler->display->display_options['fields']['field_glosario_definicion']['table'] = 'field_data_field_glosario_definicion';
  $handler->display->display_options['fields']['field_glosario_definicion']['field'] = 'field_glosario_definicion';
  $handler->display->display_options['fields']['field_glosario_definicion']['label'] = '';
  $handler->display->display_options['fields']['field_glosario_definicion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_glosario_definicion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_glosario_definicion']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_glosario_definicion']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link de referencia */
  $handler->display->display_options['fields']['field_glosario_referencia_link']['id'] = 'field_glosario_referencia_link';
  $handler->display->display_options['fields']['field_glosario_referencia_link']['table'] = 'field_data_field_glosario_referencia_link';
  $handler->display->display_options['fields']['field_glosario_referencia_link']['field'] = 'field_glosario_referencia_link';
  $handler->display->display_options['fields']['field_glosario_referencia_link']['label'] = '';
  $handler->display->display_options['fields']['field_glosario_referencia_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_glosario_referencia_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_glosario_referencia_link']['alter']['text'] = '<i class="ref">Tomado de: [field_glosario_referencia_link]</i>';
  $handler->display->display_options['fields']['field_glosario_referencia_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_glosario_referencia_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_glosario_referencia_link']['click_sort_column'] = 'url';
  /* Field: Content: Texto de referencia */
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['id'] = 'field_glosario_referencia_texto';
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['table'] = 'field_data_field_glosario_referencia_texto';
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['field'] = 'field_glosario_referencia_texto';
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['label'] = '';
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['alter']['text'] = '<i class="ref">Tomado de: [field_glosario_referencia_texto] </i>';
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_glosario_referencia_texto']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-1">
<p>[field_glosario_definicion] <p>
</div>
<div class="pure-u-xl-1 btnv2">
[field_glosario_referencia_link] 
[field_glosario_referencia_texto] 
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'glosario' => 'glosario',
  );

  /* Display: 2.5 Glosario */
  $handler = $view->new_display('page', '2.5 Glosario', 'page');
  $handler->display->display_options['path'] = 'transparencia/informacion-interes/glosario';
  $translatables['glosario'] = array(
    t('Master'),
    t('2.5 Glosario'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<i class="ref">Tomado de: [field_glosario_referencia_link]</i>'),
    t('<i class="ref">Tomado de: [field_glosario_referencia_texto] </i>'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-1">
<p>[field_glosario_definicion] <p>
</div>
<div class="pure-u-xl-1 btnv2">
[field_glosario_referencia_link] 
[field_glosario_referencia_texto] 
</div>
</div>'),
  );
  $export['glosario'] = $view;

  return $export;
}
