<?php
/**
 * @file
 * govi_noticias.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_noticias_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'noticias';
  $view->description = 'Vista que presenta el contenido de una o varias noticias';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Noticias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Noticias';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Multimedia */
  $handler->display->display_options['fields']['field_multimedia_noticia']['id'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['table'] = 'field_data_field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['field'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['label'] = '';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_class'] = 'pure-img';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_multimedia_noticia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_multimedia_noticia']['settings'] = array(
    'image_style' => 'imagen_noticia_destacada',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha de publicación */
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['id'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['field'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 1,
  );
  /* Field: Content: Copete */
  $handler->display->display_options['fields']['field_copete']['id'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['table'] = 'field_data_field_copete';
  $handler->display->display_options['fields']['field_copete']['field'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['label'] = '';
  $handler->display->display_options['fields']['field_copete']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_copete']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_copete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copete']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Leer Noticia';
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
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block_1');
  $handler->display->display_options['block_description'] = 'Últimas noticias principal';
  $translatables['noticias'] = array(
    t('Master'),
    t('Noticias'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Leer Noticia'),
    t('Type'),
    t('block'),
    t('Últimas noticias principal'),
  );
  $export['noticias'] = $view;

  $view = new view();
  $view->name = 'noticias_relacionadas';
  $view->description = 'noticias relacionadas';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Noticias Relacionadas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NOTICIAS RELACIONADAS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Tags (field_noticia_tags) */
  $handler->display->display_options['relationships']['field_noticia_tags_tid']['id'] = 'field_noticia_tags_tid';
  $handler->display->display_options['relationships']['field_noticia_tags_tid']['table'] = 'field_data_field_noticia_tags';
  $handler->display->display_options['relationships']['field_noticia_tags_tid']['field'] = 'field_noticia_tags_tid';
  $handler->display->display_options['relationships']['field_noticia_tags_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_noticia_tags_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'noticias' => 'noticias',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['noticias_relacionadas'] = array(
    t('Master'),
    t('NOTICIAS RELACIONADAS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_noticia_tags'),
    t('All'),
    t('Block'),
  );
  $export['noticias_relacionadas'] = $view;

  $view = new view();
  $view->name = 'otras_noticias';
  $view->description = 'Vista que presenta el contenido de una o varias noticias';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Otras noticias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '         ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/?q=noticias">Ver más noticias</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Multimedia */
  $handler->display->display_options['fields']['field_multimedia_noticia']['id'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['table'] = 'field_data_field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['field'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['label'] = '';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_class'] = 'pure-img';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_multimedia_noticia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_multimedia_noticia']['settings'] = array(
    'image_style' => 'imagen_otras_noticias',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha de publicación */
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['id'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['field'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Copete */
  $handler->display->display_options['fields']['field_copete']['id'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['table'] = 'field_data_field_copete';
  $handler->display->display_options['fields']['field_copete']['field'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['label'] = '';
  $handler->display->display_options['fields']['field_copete']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_copete']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_copete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copete']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_copete']['settings'] = array(
    'trim_length' => '60',
  );
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
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block_1');
  $handler->display->display_options['block_description'] = 'Otras noticias';
  $translatables['otras_noticias'] = array(
    t('Master'),
    t('         '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/?q=noticias">Ver más noticias</a>'),
    t('Type'),
    t('block'),
    t('Otras noticias'),
  );
  $export['otras_noticias'] = $view;

  $view = new view();
  $view->name = 'pagina_noticias';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'pagina noticias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'pagina noticias';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar Noticia';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Limpiar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Noticias';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="noticias">Noticias</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="messages error">
<h2 class="element-invisible">Error message</h2>
No se encontró ningún resultado.</div>';
  /* Field: Content: Multimedia */
  $handler->display->display_options['fields']['field_multimedia_noticia']['id'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['table'] = 'field_data_field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['field'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['label'] = '';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_multimedia_noticia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_multimedia_noticia']['settings'] = array(
    'image_style' => 'imagen_otras_noticias',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Fecha de publicación */
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['id'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['field'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Copete */
  $handler->display->display_options['fields']['field_copete']['id'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['table'] = 'field_data_field_copete';
  $handler->display->display_options['fields']['field_copete']['field'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['label'] = '';
  $handler->display->display_options['fields']['field_copete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copete']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_copete']['settings'] = array(
    'trim_length' => '200',
  );
  /* Sort criterion: Content: Fecha de publicación (field_fecha_de_publicacion) */
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['id'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['sorts']['field_fecha_de_publicacion_value']['field'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Fecha de publicación (field_fecha_de_publicacion) */
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['id'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['field'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['group'] = 1;
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['expose']['operator_id'] = 'field_fecha_de_publicacion_value_op';
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['expose']['operator'] = 'field_fecha_de_publicacion_value_op';
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['expose']['identifier'] = 'field_fecha_de_publicacion_value';
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_fecha_de_publicacion_value']['granularity'] = 'month';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'noticias';
  $translatables['pagina_noticias'] = array(
    t('Master'),
    t('pagina noticias'),
    t('more'),
    t('Filtrar Noticia'),
    t('Limpiar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Noticias'),
    t('<h2 class="noticias">Noticias</h2>'),
    t('<div class="messages error">
<h2 class="element-invisible">Error message</h2>
No se encontró ningún resultado.</div>'),
    t('Type'),
    t('Page'),
  );
  $export['pagina_noticias'] = $view;

  return $export;
}
