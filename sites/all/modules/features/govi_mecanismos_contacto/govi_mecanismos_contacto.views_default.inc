<?php

/**
 * @file
 * govi_mecanismos_contacto.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_mecanismos_contacto_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'enlaces_institucionales_pie_1';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces institucionales pie de pagina 1';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ALCALDÍA MAYOR DE BOGOTÁ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_pie_enlace']['id'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['field'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_pie_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pie_enlace']['click_sort_column'] = 'url';
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'ALCALDÍA MAYOR DE BOGOTÁ';
  $translatables['enlaces_institucionales_pie_1'] = array(
    t('Master'),
    t('ALCALDÍA MAYOR DE BOGOTÁ'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['enlaces_institucionales_pie_1'] = $view;

  $view = new view();
  $view->name = 'enlaces_institucionales_pie_de_pagina_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces institucionales pie de pagina 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ENTIDADES DE CONTROL ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_pie_enlace']['id'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['field'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_pie_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pie_enlace']['empty'] = 'Proximamente';
  $handler->display->display_options['fields']['field_pie_enlace']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'ENTIDADES DE CONTROL';
  $translatables['enlaces_institucionales_pie_de_pagina_2'] = array(
    t('Master'),
    t('ENTIDADES DE CONTROL '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Proximamente'),
    t('Block'),
    t('ENTIDADES DE CONTROL'),
  );
  $export['enlaces_institucionales_pie_de_pagina_2'] = $view;

  $view = new view();
  $view->name = 'enlaces_institucionales_pie_de_pagina_3';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces institucionales pie de pagina 3';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enlaces obligatorios';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_pie_enlace']['id'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['field'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_pie_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pie_enlace']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title']['id'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title']['field'] = 'field_pie_enlace_title';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'VÍNCULOS DE INTERÉS';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title']['id'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title']['field'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['operator'] = 'not';
  $handler->display->display_options['filters']['field_pie_enlace_title']['value'] = 'Términos';
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['id'] = 'field_pie_enlace_title_1';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['field'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['value'] = 'Políticas';
  $handler->display->display_options['block_description'] = 'VÍNCULOS DE INTERÉS';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title']['id'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title']['field'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_pie_enlace_title']['value'] = 'Términos';
  $handler->display->display_options['filters']['field_pie_enlace_title']['group'] = 1;
  /* Filter criterion: Content: Enlace (field_pie_enlace:title) */
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['id'] = 'field_pie_enlace_title_1';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['field'] = 'field_pie_enlace_title';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['value'] = 'Políticas';
  $handler->display->display_options['filters']['field_pie_enlace_title_1']['group'] = 1;
  $translatables['enlaces_institucionales_pie_de_pagina_3'] = array(
    t('Master'),
    t('Enlaces obligatorios'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('VÍNCULOS DE INTERÉS'),
  );
  $export['enlaces_institucionales_pie_de_pagina_3'] = $view;

  $view = new view();
  $view->name = 'enlaces_institucionales_pie_de_pagina_4';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces institucionales pie de pagina 4';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'GOBIERNO EN LÍNEA ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_pie_enlace']['id'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['table'] = 'field_data_field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['field'] = 'field_pie_enlace';
  $handler->display->display_options['fields']['field_pie_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_pie_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pie_enlace']['click_sort_column'] = 'url';
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'pie_de_pagina_institucional';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'GOBIERNO EN LÍNEA';
  $translatables['enlaces_institucionales_pie_de_pagina_4'] = array(
    t('Master'),
    t('GOBIERNO EN LÍNEA '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('GOBIERNO EN LÍNEA'),
  );
  $export['enlaces_institucionales_pie_de_pagina_4'] = $view;

  $view = new view();
  $view->name = 'informacion_entidad';
  $view->description = 'Presenta la información de contacto, enlaces relacionados y ubicacion y horarios en el pie de pagina';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '1. Mecanismos de contacto';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sede principal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_atencion_direccion']['id'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['table'] = 'field_data_field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['field'] = 'field_atencion_direccion';
  /* Field: Content: Teléfonos */
  $handler->display->display_options['fields']['field_atencion_telefono']['id'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['table'] = 'field_data_field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['field'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['label'] = 'Teléfono';
  $handler->display->display_options['fields']['field_atencion_telefono']['delta_offset'] = '0';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_atencion_fax']['id'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['table'] = 'field_data_field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['field'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['delta_offset'] = '0';
  /* Field: Content: Linea Gratuita */
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['id'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['table'] = 'field_data_field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['field'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['delta_offset'] = '0';
  /* Field: Content: Correo electrónico institucional */
  $handler->display->display_options['fields']['field_atencion_correo']['id'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['table'] = 'field_data_field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['field'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['click_sort_column'] = 'url';
  /* Field: Content: Correo electrónico notificaciones judiciales */
  $handler->display->display_options['fields']['field_correo_judicial']['id'] = 'field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['table'] = 'field_data_field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['field'] = 'field_correo_judicial';
  /* Field: Content: Horario de Atención */
  $handler->display->display_options['fields']['field_atencion_horario']['id'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['table'] = 'field_data_field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['field'] = 'field_atencion_horario';
  /* Field: Content: Ciudad */
  $handler->display->display_options['fields']['field_atencion_ciudad']['id'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['table'] = 'field_data_field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['field'] = 'field_atencion_ciudad';
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
    'mecanismos_atencion_ciudadano' => 'mecanismos_atencion_ciudadano',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';

  /* Display: Pie de página */
  $handler = $view->new_display('block', 'Pie de página', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_atencion_direccion']['id'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['table'] = 'field_data_field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['field'] = 'field_atencion_direccion';
  /* Field: Content: Teléfonos */
  $handler->display->display_options['fields']['field_atencion_telefono']['id'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['table'] = 'field_data_field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['field'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['label'] = 'Teléfono';
  $handler->display->display_options['fields']['field_atencion_telefono']['delta_offset'] = '0';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_atencion_fax']['id'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['table'] = 'field_data_field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['field'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['delta_offset'] = '0';
  /* Field: Content: Linea Gratuita */
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['id'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['table'] = 'field_data_field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['field'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['delta_offset'] = '0';
  /* Field: Content: Correo electrónico institucional */
  $handler->display->display_options['fields']['field_atencion_correo']['id'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['table'] = 'field_data_field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['field'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['click_sort_column'] = 'url';
  /* Field: Content: Correo electrónico notificaciones judiciales */
  $handler->display->display_options['fields']['field_correo_judicial']['id'] = 'field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['table'] = 'field_data_field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['field'] = 'field_correo_judicial';
  /* Field: Content: Horario de Atención */
  $handler->display->display_options['fields']['field_atencion_horario']['id'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['table'] = 'field_data_field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['field'] = 'field_atencion_horario';
  /* Field: Content: Departamento */
  $handler->display->display_options['fields']['field_atencion_departamento']['id'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['table'] = 'field_data_field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['field'] = 'field_atencion_departamento';
  /* Field: Content: Ciudad */
  $handler->display->display_options['fields']['field_atencion_ciudad']['id'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['table'] = 'field_data_field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['field'] = 'field_atencion_ciudad';
  /* Field: Content: Código postal */
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['id'] = 'field_atencion_codigo_postal';
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['table'] = 'field_data_field_atencion_codigo_postal';
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['field'] = 'field_atencion_codigo_postal';
  $handler->display->display_options['block_description'] = 'Pie Información de la Entidad';

  /* Display: Localización fisíca, sucursales o regionales */
  $handler = $view->new_display('page', 'Localización fisíca, sucursales o regionales', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Localización fisíca, sucursales o regionales';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_atencion_direccion']['id'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['table'] = 'field_data_field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['field'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['element_label_colon'] = FALSE;
  /* Field: Content: Ciudad */
  $handler->display->display_options['fields']['field_atencion_ciudad']['id'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['table'] = 'field_data_field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['field'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['element_label_colon'] = FALSE;
  /* Field: Content: Departamento */
  $handler->display->display_options['fields']['field_atencion_departamento']['id'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['table'] = 'field_data_field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['field'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['element_label_colon'] = FALSE;
  /* Field: Content: Horario de Atención */
  $handler->display->display_options['fields']['field_atencion_horario']['id'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['table'] = 'field_data_field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['field'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['label'] = 'Horario de atención';
  $handler->display->display_options['fields']['field_atencion_horario']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Datos de contacto';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_atencion_telefono',
    1 => 'field_atencion_fax',
    2 => 'field_atencion_linea_gratuita',
    3 => 'field_atencion_correo',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Teléfonos */
  $handler->display->display_options['fields']['field_atencion_telefono']['id'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['table'] = 'field_data_field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['field'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['delta_offset'] = '0';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_atencion_fax']['id'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['table'] = 'field_data_field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['field'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['delta_offset'] = '0';
  /* Field: Content: Linea Gratuita */
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['id'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['table'] = 'field_data_field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['field'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['label'] = 'Linea gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['delta_offset'] = '0';
  /* Field: Content: Correo electrónico institucional */
  $handler->display->display_options['fields']['field_atencion_correo']['id'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['table'] = 'field_data_field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['field'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'mecanismos_atencion_ciudadano' => 'mecanismos_atencion_ciudadano',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'transparencia/mecanismos-de-contacto/sucursales';

  /* Display: Sede principal */
  $handler = $view->new_display('page', 'Sede principal', 'page_2');
  $handler->display->display_options['display_description'] = 'Este display muestra la información de contacto de la sede principal de la Entidad';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'A continuación se presentan los canales para la atención al ciudadano para recibir peticiones, quejas, reclamos, denuncias y solicitudes de información';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_atencion_direccion']['id'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['table'] = 'field_data_field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['field'] = 'field_atencion_direccion';
  $handler->display->display_options['fields']['field_atencion_direccion']['element_label_type'] = 'strong';
  /* Field: Content: Teléfonos */
  $handler->display->display_options['fields']['field_atencion_telefono']['id'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['table'] = 'field_data_field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['field'] = 'field_atencion_telefono';
  $handler->display->display_options['fields']['field_atencion_telefono']['label'] = 'Teléfono';
  $handler->display->display_options['fields']['field_atencion_telefono']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_atencion_telefono']['delta_offset'] = '0';
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_atencion_fax']['id'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['table'] = 'field_data_field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['field'] = 'field_atencion_fax';
  $handler->display->display_options['fields']['field_atencion_fax']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_atencion_fax']['delta_offset'] = '0';
  /* Field: Content: Linea Gratuita */
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['id'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['table'] = 'field_data_field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['field'] = 'field_atencion_linea_gratuita';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_atencion_linea_gratuita']['delta_offset'] = '0';
  /* Field: Content: Correo electrónico institucional */
  $handler->display->display_options['fields']['field_atencion_correo']['id'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['table'] = 'field_data_field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['field'] = 'field_atencion_correo';
  $handler->display->display_options['fields']['field_atencion_correo']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_atencion_correo']['click_sort_column'] = 'url';
  /* Field: Content: Correo electrónico notificaciones judiciales */
  $handler->display->display_options['fields']['field_correo_judicial']['id'] = 'field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['table'] = 'field_data_field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['field'] = 'field_correo_judicial';
  $handler->display->display_options['fields']['field_correo_judicial']['element_label_type'] = 'strong';
  /* Field: Content: Horario de Atención */
  $handler->display->display_options['fields']['field_atencion_horario']['id'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['table'] = 'field_data_field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['field'] = 'field_atencion_horario';
  $handler->display->display_options['fields']['field_atencion_horario']['element_label_type'] = 'strong';
  /* Field: Content: Departamento */
  $handler->display->display_options['fields']['field_atencion_departamento']['id'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['table'] = 'field_data_field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['field'] = 'field_atencion_departamento';
  $handler->display->display_options['fields']['field_atencion_departamento']['element_label_type'] = 'strong';
  /* Field: Content: Ciudad */
  $handler->display->display_options['fields']['field_atencion_ciudad']['id'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['table'] = 'field_data_field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['field'] = 'field_atencion_ciudad';
  $handler->display->display_options['fields']['field_atencion_ciudad']['element_label_type'] = 'strong';
  /* Field: Content: Código postal */
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['id'] = 'field_atencion_codigo_postal';
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['table'] = 'field_data_field_atencion_codigo_postal';
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['field'] = 'field_atencion_codigo_postal';
  $handler->display->display_options['fields']['field_atencion_codigo_postal']['element_label_type'] = 'strong';
  /* Field: Content: Enlace a mapa */
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['id'] = 'field_atencion_enlace_mapa';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['table'] = 'field_data_field_atencion_enlace_mapa';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['field'] = 'field_atencion_enlace_mapa';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['label'] = '';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['text'] = 'Ver Mapa';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['path'] = '[field_atencion_enlace_mapa-url]&width=800&height=800&iframe=true';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['alt'] = 'Ubicación geográfica de la Entidad en un mapa del servicio del código postal nacional';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['alter']['link_class'] = 'colorbox-load pure-button pure-button-primary';
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atencion_enlace_mapa']['click_sort_column'] = 'url';
  $handler->display->display_options['path'] = 'transparencia/mecanismos-de-contacto/sede-principal';
  $translatables['informacion_entidad'] = array(
    t('Master'),
    t('Sede principal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Dirección'),
    t('Teléfono'),
    t('Fax'),
    t('Linea Gratuita'),
    t('Correo electrónico institucional'),
    t('Correo electrónico notificaciones judiciales'),
    t('Horario de Atención'),
    t('Ciudad'),
    t('Pie de página'),
    t('Departamento'),
    t('Código postal'),
    t('Pie Información de la Entidad'),
    t('Localización fisíca, sucursales o regionales'),
    t('Nombre'),
    t('Horario de atención'),
    t('Datos de contacto'),
    t('Teléfonos'),
    t('Linea gratuita'),
    t('Este display muestra la información de contacto de la sede principal de la Entidad'),
    t('A continuación se presentan los canales para la atención al ciudadano para recibir peticiones, quejas, reclamos, denuncias y solicitudes de información'),
    t('Ver Mapa'),
    t('Ubicación geográfica de la Entidad en un mapa del servicio del código postal nacional'),
  );
  $export['informacion_entidad'] = $view;

  $view = new view();
  $view->name = 'logo_escudo_colombia_pie';
  $view->description = 'Presenta el logo de la República de Colombia gestionado desde el tipo de contenido imagen simple';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Logo Escudo Colombia Pie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Logo República de Colombia Default';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_imagen']['id'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['table'] = 'field_data_field_imagen';
  $handler->display->display_options['fields']['field_imagen']['field'] = 'field_imagen';
  $handler->display->display_options['fields']['field_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen']['settings'] = array(
    'image_style' => 'logo_header_escudo',
    'image_link' => '',
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
    'imagen_simple' => 'imagen_simple',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Logo República de Colombia';
  $handler->display->display_options['filters']['title']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['logo_escudo_colombia_pie'] = array(
    t('Master'),
    t('Logo República de Colombia Default'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['logo_escudo_colombia_pie'] = $view;

  return $export;
}
