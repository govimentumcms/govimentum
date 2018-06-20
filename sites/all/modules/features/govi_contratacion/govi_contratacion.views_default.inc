<?php
/**
 * @file
 * govi_contratacion.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_contratacion_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contratacion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '8. Contratación';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '8. Contratación';
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
      'field' => 'field_contratacion_fecha_exp',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.

Donec sed orci tincidunt, dapibus quam vel, ultricies arcu. Phasellus semper, enim non eleifend eleifend, justo mi pretium arcu, vitae tempor mauris velit vitae quam. Mauris nec ultrices urna, sed ullamcorper tellus. Suspendisse tempor suscipit pretium. Nullam laoreet pretium sem, eget scelerisque arcu malesuada eu. Proin mollis tristique sollicitudin. Quisque tempor consequat lacinia. Pellentesque venenatis sapien vel odio convallis, bibendum consectetur lorem faucibus. Pellentesque non nulla sem. Quisque porttitor enim id sollicitudin ultrices. Donec mauris eros, volutpat ornare laoreet a, dictum eu magna. Sed hendrerit, lorem eu bibendum congue, dolor dolor mollis felis, quis fringilla nunc neque a massa.';
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
  /* Field: Content: Descripción Contratación */
  $handler->display->display_options['fields']['field_contratacion_descripcion']['id'] = 'field_contratacion_descripcion';
  $handler->display->display_options['fields']['field_contratacion_descripcion']['table'] = 'field_data_field_contratacion_descripcion';
  $handler->display->display_options['fields']['field_contratacion_descripcion']['field'] = 'field_contratacion_descripcion';
  $handler->display->display_options['fields']['field_contratacion_descripcion']['label'] = 'Descripción';
  $handler->display->display_options['fields']['field_contratacion_descripcion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_descripcion']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_contratacion_descripcion']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_contratacion_periodicidad']['id'] = 'field_contratacion_periodicidad';
  $handler->display->display_options['fields']['field_contratacion_periodicidad']['table'] = 'field_data_field_contratacion_periodicidad';
  $handler->display->display_options['fields']['field_contratacion_periodicidad']['field'] = 'field_contratacion_periodicidad';
  $handler->display->display_options['fields']['field_contratacion_periodicidad']['exclude'] = TRUE;
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_contratacion_enlace']['id'] = 'field_contratacion_enlace';
  $handler->display->display_options['fields']['field_contratacion_enlace']['table'] = 'field_data_field_contratacion_enlace';
  $handler->display->display_options['fields']['field_contratacion_enlace']['field'] = 'field_contratacion_enlace';
  $handler->display->display_options['fields']['field_contratacion_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_enlace']['alter']['text'] = ' Ver más';
  $handler->display->display_options['fields']['field_contratacion_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_enlace']['alter']['path'] = '[field_contratacion_enlace]';
  $handler->display->display_options['fields']['field_contratacion_enlace']['alter']['alt'] = ' Ver más';
  $handler->display->display_options['fields']['field_contratacion_enlace']['alter']['link_class'] = 'icon-view pure-button';
  $handler->display->display_options['fields']['field_contratacion_enlace']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_contratacion_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_contratacion_enlace']['type'] = 'link_plain';
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_contratacion_adjunto']['id'] = 'field_contratacion_adjunto';
  $handler->display->display_options['fields']['field_contratacion_adjunto']['table'] = 'field_data_field_contratacion_adjunto';
  $handler->display->display_options['fields']['field_contratacion_adjunto']['field'] = 'field_contratacion_adjunto';
  $handler->display->display_options['fields']['field_contratacion_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_adjunto']['alter']['text'] = ' Descargar';
  $handler->display->display_options['fields']['field_contratacion_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_adjunto']['alter']['path'] = '[field_contratacion_adjunto]';
  $handler->display->display_options['fields']['field_contratacion_adjunto']['alter']['alt'] = 'Descargar';
  $handler->display->display_options['fields']['field_contratacion_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_contratacion_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_contratacion_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Tipo de recurso */
  $handler->display->display_options['fields']['field_contratacion_tipo_recurso']['id'] = 'field_contratacion_tipo_recurso';
  $handler->display->display_options['fields']['field_contratacion_tipo_recurso']['table'] = 'field_data_field_contratacion_tipo_recurso';
  $handler->display->display_options['fields']['field_contratacion_tipo_recurso']['field'] = 'field_contratacion_tipo_recurso';
  $handler->display->display_options['fields']['field_contratacion_tipo_recurso']['label'] = 'Tipo de Recurso';
  $handler->display->display_options['fields']['field_contratacion_tipo_recurso']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_tipo_recurso']['element_label_colon'] = FALSE;
  /* Field: Content: Clasificación de la Contratación */
  $handler->display->display_options['fields']['field_contratacion_clasificacion']['id'] = 'field_contratacion_clasificacion';
  $handler->display->display_options['fields']['field_contratacion_clasificacion']['table'] = 'field_data_field_contratacion_clasificacion';
  $handler->display->display_options['fields']['field_contratacion_clasificacion']['field'] = 'field_contratacion_clasificacion';
  $handler->display->display_options['fields']['field_contratacion_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_contratacion_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_clasificacion']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha de Expedicion */
  $handler->display->display_options['fields']['field_contratacion_fecha_exp']['id'] = 'field_contratacion_fecha_exp';
  $handler->display->display_options['fields']['field_contratacion_fecha_exp']['table'] = 'field_data_field_contratacion_fecha_exp';
  $handler->display->display_options['fields']['field_contratacion_fecha_exp']['field'] = 'field_contratacion_fecha_exp';
  $handler->display->display_options['fields']['field_contratacion_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_contratacion_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_contratacion_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contratacion_fecha_exp']['settings'] = array(
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
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'pure-g views-fieldset';
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsible'] = 1;
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsed'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_contratacion_descripcion]
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_contratacion_periodicidad]
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_contratacion_enlace]
[field_contratacion_adjunto] 
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'contratacion' => 'contratacion',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '47',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'contratacion_clasificacion';

  /* Display: Contratacion */
  $handler = $view->new_display('page', 'Contratacion', 'page_contratacion');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contratacion';
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
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
    'contratacion' => 'contratacion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'transparencia/contratacion';

  /* Display: Plan anual de adquisiciones */
  $handler = $view->new_display('page', 'Plan anual de adquisiciones', 'page_contratacion_plan_anual_contrataciones');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan anual de adquisiciones';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contratacion_fecha_exp',
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
  $handler->display->display_options['header']['area']['content'] = 'Donec sed orci tincidunt, dapibus quam vel, ultricies arcu. Phasellus semper, enim non eleifend eleifend, justo mi pretium arcu, vitae tempor mauris velit vitae quam. Mauris nec ultrices urna, sed ullamcorper tellus. Suspendisse tempor suscipit pretium. Nullam laoreet pretium sem, eget scelerisque arcu malesuada eu. Proin mollis tristique sollicitudin. Quisque tempor consequat lacinia.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
    'contratacion' => 'contratacion',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '43',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'contratacion_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/contratacion/plan-anual-adquisiciones';

  /* Display: Información contractual */
  $handler = $view->new_display('page', 'Información contractual', 'page_contratacion_informacion_contractual');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Información de contratación';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contratacion_fecha_exp',
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
  $handler->display->display_options['header']['area']['content'] = 'Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha de Expedicion -  start date (field_contratacion_fecha_exp) */
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['id'] = 'field_contratacion_fecha_exp_value';
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['table'] = 'field_data_field_contratacion_fecha_exp';
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['field'] = 'field_contratacion_fecha_exp_value';
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['order'] = 'DESC';
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
    'contratacion' => 'contratacion',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '45',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'contratacion_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/contratacion/informacion_contractual';

  /* Display: Ejecución de Contratos */
  $handler = $view->new_display('page', 'Ejecución de Contratos', 'page_contratacion_ejecucion_contratacion');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ejecución de contratación';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contratacion_fecha_exp',
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
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
    'contratacion' => 'contratacion',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '46',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'contratacion_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/contratacion/ejecucion_contratos';

  /* Display: Manual de Contrataciones */
  $handler = $view->new_display('page', 'Manual de Contrataciones', 'page_contratacion_manual_contrataciones');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manual de contrataciones';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_contratacion_fecha_exp',
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
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Fecha de Expedicion -  start date (field_contratacion_fecha_exp) */
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['id'] = 'field_contratacion_fecha_exp_value';
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['table'] = 'field_data_field_contratacion_fecha_exp';
  $handler->display->display_options['sorts']['field_contratacion_fecha_exp_value']['field'] = 'field_contratacion_fecha_exp_value';
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
    'contratacion' => 'contratacion',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '44',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'contratacion_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/contratacion/manual_contrataciones';
  $translatables['contratacion'] = array(
    t('Master'),
    t('Contratación'),
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
    t('Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.

Donec sed orci tincidunt, dapibus quam vel, ultricies arcu. Phasellus semper, enim non eleifend eleifend, justo mi pretium arcu, vitae tempor mauris velit vitae quam. Mauris nec ultrices urna, sed ullamcorper tellus. Suspendisse tempor suscipit pretium. Nullam laoreet pretium sem, eget scelerisque arcu malesuada eu. Proin mollis tristique sollicitudin. Quisque tempor consequat lacinia. Pellentesque venenatis sapien vel odio convallis, bibendum consectetur lorem faucibus. Pellentesque non nulla sem. Quisque porttitor enim id sollicitudin ultrices. Donec mauris eros, volutpat ornare laoreet a, dictum eu magna. Sed hendrerit, lorem eu bibendum congue, dolor dolor mollis felis, quis fringilla nunc neque a massa.'),
    t('Nombre'),
    t('Descripción'),
    t('Periodicidad'),
    t('Enlace'),
    t(' Ver más'),
    t('Archivo adjunto'),
    t(' Descargar'),
    t('Descargar'),
    t('Tipo de Recurso'),
    t('Fieldset'),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_contratacion_descripcion]
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_contratacion_periodicidad]
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_contratacion_enlace]
[field_contratacion_adjunto] 
</div>
</div>
'),
    t('Has taxonomy term'),
    t('Contratacion'),
    t('Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.'),
    t('Plan anual de adquisiciones'),
    t('Donec sed orci tincidunt, dapibus quam vel, ultricies arcu. Phasellus semper, enim non eleifend eleifend, justo mi pretium arcu, vitae tempor mauris velit vitae quam. Mauris nec ultrices urna, sed ullamcorper tellus. Suspendisse tempor suscipit pretium. Nullam laoreet pretium sem, eget scelerisque arcu malesuada eu. Proin mollis tristique sollicitudin. Quisque tempor consequat lacinia.'),
    t('Información contractual'),
    t('Información de contratación'),
    t('Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.
'),
    t('Ejecución de Contratos'),
    t('Ejecución de contratación'),
    t('Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. '),
    t('Manual de Contrataciones'),
    t('Manual de contrataciones'),
    t('Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.
'),
  );
  $export['contratacion'] = $view;

  return $export;
}
