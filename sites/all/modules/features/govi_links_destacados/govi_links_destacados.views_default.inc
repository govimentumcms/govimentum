<?php
/**
 * @file
 * govi_links_destacados.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_links_destacados_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'enlaces_destacados';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces destacados';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enlaces destacados';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_enlace_destacado']['id'] = 'field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['table'] = 'field_data_field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['field'] = 'field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['label'] = '';
  $handler->display->display_options['fields']['field_enlace_destacado']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_destacado']['alter']['text'] = '[field_enlace_destacado-url]';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_destacado']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['click_sort_column'] = 'url';
  /* Field: Content: Título parte 1 */
  $handler->display->display_options['fields']['field_titulo_parte_1']['id'] = 'field_titulo_parte_1';
  $handler->display->display_options['fields']['field_titulo_parte_1']['table'] = 'field_data_field_titulo_parte_1';
  $handler->display->display_options['fields']['field_titulo_parte_1']['field'] = 'field_titulo_parte_1';
  $handler->display->display_options['fields']['field_titulo_parte_1']['label'] = '';
  $handler->display->display_options['fields']['field_titulo_parte_1']['element_label_colon'] = FALSE;
  /* Field: Content: Título parte 2 */
  $handler->display->display_options['fields']['field_titulo_parte_2']['id'] = 'field_titulo_parte_2';
  $handler->display->display_options['fields']['field_titulo_parte_2']['table'] = 'field_data_field_titulo_parte_2';
  $handler->display->display_options['fields']['field_titulo_parte_2']['field'] = 'field_titulo_parte_2';
  $handler->display->display_options['fields']['field_titulo_parte_2']['label'] = '';
  $handler->display->display_options['fields']['field_titulo_parte_2']['element_label_colon'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['fid']['label'] = '';
  $handler->display->display_options['fields']['fid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'enlace_destacado' => 'enlace_destacado',
  );

  /* Display: Primario */
  $handler = $view->new_display('block', 'Primario', 'block');
  $handler->display->display_options['display_description'] = 'Presentación de los enlaces destacados primarios';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_enlace_destacado']['id'] = 'field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['table'] = 'field_data_field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['field'] = 'field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['label'] = '';
  $handler->display->display_options['fields']['field_enlace_destacado']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_destacado']['alter']['text'] = '[field_enlace_destacado-url]';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_destacado']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['click_sort_column'] = 'url';
  /* Field: Content: Título parte 1 */
  $handler->display->display_options['fields']['field_titulo_parte_1']['id'] = 'field_titulo_parte_1';
  $handler->display->display_options['fields']['field_titulo_parte_1']['table'] = 'field_data_field_titulo_parte_1';
  $handler->display->display_options['fields']['field_titulo_parte_1']['field'] = 'field_titulo_parte_1';
  $handler->display->display_options['fields']['field_titulo_parte_1']['label'] = '';
  $handler->display->display_options['fields']['field_titulo_parte_1']['element_label_colon'] = FALSE;
  /* Field: Content: Título parte 2 */
  $handler->display->display_options['fields']['field_titulo_parte_2']['id'] = 'field_titulo_parte_2';
  $handler->display->display_options['fields']['field_titulo_parte_2']['table'] = 'field_data_field_titulo_parte_2';
  $handler->display->display_options['fields']['field_titulo_parte_2']['field'] = 'field_titulo_parte_2';
  $handler->display->display_options['fields']['field_titulo_parte_2']['label'] = '';
  $handler->display->display_options['fields']['field_titulo_parte_2']['element_label_colon'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['fid']['label'] = '';
  $handler->display->display_options['fields']['fid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tipo de enlace */
  $handler->display->display_options['fields']['field_enlace_tipo']['id'] = 'field_enlace_tipo';
  $handler->display->display_options['fields']['field_enlace_tipo']['table'] = 'field_data_field_enlace_tipo';
  $handler->display->display_options['fields']['field_enlace_tipo']['field'] = 'field_enlace_tipo';
  $handler->display->display_options['fields']['field_enlace_tipo']['label'] = '';
  $handler->display->display_options['fields']['field_enlace_tipo']['element_label_colon'] = FALSE;
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
    'enlace_destacado' => 'enlace_destacado',
  );
  /* Filter criterion: Content: Tipo de enlace (field_enlace_tipo) */
  $handler->display->display_options['filters']['field_enlace_tipo_value']['id'] = 'field_enlace_tipo_value';
  $handler->display->display_options['filters']['field_enlace_tipo_value']['table'] = 'field_data_field_enlace_tipo';
  $handler->display->display_options['filters']['field_enlace_tipo_value']['field'] = 'field_enlace_tipo_value';
  $handler->display->display_options['filters']['field_enlace_tipo_value']['value'] = array(
    'enlace_primario' => 'enlace_primario',
  );
  $handler->display->display_options['block_description'] = 'Enlaces destacados primarios';

  /* Display: Secundario */
  $handler = $view->new_display('block', 'Secundario', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Enlaces institucionales';
  $handler->display->display_options['display_description'] = 'Presentación de los enlaces destacados segundarios';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_enlace_destacado']['id'] = 'field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['table'] = 'field_data_field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['field'] = 'field_enlace_destacado';
  $handler->display->display_options['fields']['field_enlace_destacado']['label'] = '';
  $handler->display->display_options['fields']['field_enlace_destacado']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_destacado']['alter']['text'] = '[field_enlace_destacado-url]';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_destacado']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_destacado']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Color del enlace */
  $handler->display->display_options['fields']['field_enlace_color']['id'] = 'field_enlace_color';
  $handler->display->display_options['fields']['field_enlace_color']['table'] = 'field_data_field_enlace_color';
  $handler->display->display_options['fields']['field_enlace_color']['field'] = 'field_enlace_color';
  $handler->display->display_options['fields']['field_enlace_color']['label'] = '';
  $handler->display->display_options['fields']['field_enlace_color']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_color']['element_type'] = '0';
  $handler->display->display_options['fields']['field_enlace_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_color']['settings'] = array(
    'selector' => 'body',
    'property' => 'background-color',
    'important' => 1,
  );
  /* Field: Content: Tipo de enlace */
  $handler->display->display_options['fields']['field_enlace_tipo']['id'] = 'field_enlace_tipo';
  $handler->display->display_options['fields']['field_enlace_tipo']['table'] = 'field_data_field_enlace_tipo';
  $handler->display->display_options['fields']['field_enlace_tipo']['field'] = 'field_enlace_tipo';
  $handler->display->display_options['fields']['field_enlace_tipo']['label'] = '';
  $handler->display->display_options['fields']['field_enlace_tipo']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
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
    'enlace_destacado' => 'enlace_destacado',
  );
  /* Filter criterion: Content: Tipo de enlace (field_enlace_tipo) */
  $handler->display->display_options['filters']['field_enlace_tipo_value']['id'] = 'field_enlace_tipo_value';
  $handler->display->display_options['filters']['field_enlace_tipo_value']['table'] = 'field_data_field_enlace_tipo';
  $handler->display->display_options['filters']['field_enlace_tipo_value']['field'] = 'field_enlace_tipo_value';
  $handler->display->display_options['filters']['field_enlace_tipo_value']['value'] = array(
    'enlace_secundario' => 'enlace_secundario',
  );
  $handler->display->display_options['block_description'] = 'Enlaces destacados secundarios';
  $translatables['enlaces_destacados'] = array(
    t('Master'),
    t('Enlaces destacados'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('File'),
    t('[field_enlace_destacado-url]'),
    t('Primario'),
    t('Presentación de los enlaces destacados primarios'),
    t('Enlaces destacados primarios'),
    t('Secundario'),
    t('Enlaces institucionales'),
    t('Presentación de los enlaces destacados segundarios'),
    t('Enlaces destacados secundarios'),
  );
  $export['enlaces_destacados'] = $view;

  return $export;
}
