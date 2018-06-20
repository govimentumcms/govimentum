<?php
/**
 * @file
 * govi_directorio_funcionarios.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_directorio_funcionarios_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'directorio_funcionarios';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '3.5 Directorio de Información de servidores públicos y contratistas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directorio Funcionarios';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Último »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_dependencia_oficina',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_tipo_de_funcionario',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_correo_institucional' => 'field_correo_institucional',
    'field_telefono_extension' => 'field_telefono_extension',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombres y apellidos';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Cargo */
  $handler->display->display_options['fields']['field_cargo']['id'] = 'field_cargo';
  $handler->display->display_options['fields']['field_cargo']['table'] = 'field_data_field_cargo';
  $handler->display->display_options['fields']['field_cargo']['field'] = 'field_cargo';
  $handler->display->display_options['fields']['field_cargo']['element_label_colon'] = FALSE;
  /* Field: Content: Correo institucional */
  $handler->display->display_options['fields']['field_correo_institucional']['id'] = 'field_correo_institucional';
  $handler->display->display_options['fields']['field_correo_institucional']['table'] = 'field_data_field_correo_institucional';
  $handler->display->display_options['fields']['field_correo_institucional']['field'] = 'field_correo_institucional';
  $handler->display->display_options['fields']['field_correo_institucional']['label'] = 'Correo Institucional';
  $handler->display->display_options['fields']['field_correo_institucional']['element_label_colon'] = FALSE;
  /* Field: Content: Dependencia / oficina */
  $handler->display->display_options['fields']['field_dependencia_oficina']['id'] = 'field_dependencia_oficina';
  $handler->display->display_options['fields']['field_dependencia_oficina']['table'] = 'field_data_field_dependencia_oficina';
  $handler->display->display_options['fields']['field_dependencia_oficina']['field'] = 'field_dependencia_oficina';
  $handler->display->display_options['fields']['field_dependencia_oficina']['label'] = '';
  $handler->display->display_options['fields']['field_dependencia_oficina']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dependencia_oficina']['element_label_colon'] = FALSE;
  /* Field: Content: Sede */
  $handler->display->display_options['fields']['field_sede']['id'] = 'field_sede';
  $handler->display->display_options['fields']['field_sede']['table'] = 'field_data_field_sede';
  $handler->display->display_options['fields']['field_sede']['field'] = 'field_sede';
  $handler->display->display_options['fields']['field_sede']['element_label_colon'] = FALSE;
  /* Field: Content: Teléfono / Extensión */
  $handler->display->display_options['fields']['field_telefono_extension']['id'] = 'field_telefono_extension';
  $handler->display->display_options['fields']['field_telefono_extension']['table'] = 'field_data_field_telefono_extension';
  $handler->display->display_options['fields']['field_telefono_extension']['field'] = 'field_telefono_extension';
  $handler->display->display_options['fields']['field_telefono_extension']['element_label_colon'] = FALSE;
  /* Field: Content: Foto jefe de área */
  $handler->display->display_options['fields']['field_foto_jefe_de_area']['id'] = 'field_foto_jefe_de_area';
  $handler->display->display_options['fields']['field_foto_jefe_de_area']['table'] = 'field_data_field_foto_jefe_de_area';
  $handler->display->display_options['fields']['field_foto_jefe_de_area']['field'] = 'field_foto_jefe_de_area';
  $handler->display->display_options['fields']['field_foto_jefe_de_area']['label'] = '';
  $handler->display->display_options['fields']['field_foto_jefe_de_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_foto_jefe_de_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foto_jefe_de_area']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_foto_jefe_de_area']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tipo de funcionario */
  $handler->display->display_options['fields']['field_tipo_de_funcionario']['id'] = 'field_tipo_de_funcionario';
  $handler->display->display_options['fields']['field_tipo_de_funcionario']['table'] = 'field_data_field_tipo_de_funcionario';
  $handler->display->display_options['fields']['field_tipo_de_funcionario']['field'] = 'field_tipo_de_funcionario';
  $handler->display->display_options['fields']['field_tipo_de_funcionario']['label'] = '';
  $handler->display->display_options['fields']['field_tipo_de_funcionario']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tipo_de_funcionario']['element_label_colon'] = FALSE;
  /* Field: Content: Enlace SIGEP */
  $handler->display->display_options['fields']['field_enlace_sigep']['id'] = 'field_enlace_sigep';
  $handler->display->display_options['fields']['field_enlace_sigep']['table'] = 'field_data_field_enlace_sigep';
  $handler->display->display_options['fields']['field_enlace_sigep']['field'] = 'field_enlace_sigep';
  $handler->display->display_options['fields']['field_enlace_sigep']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_sigep']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace_sigep']['type'] = 'link_url';
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
    'directorio_funcionarios' => 'directorio_funcionarios',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'transparencia/organizacion/directorio-funcionarios';
  $translatables['directorio_funcionarios'] = array(
    t('Master'),
    t('Directorio Funcionarios'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« Primero'),
    t('‹ Anterior'),
    t('Siguiente ›'),
    t('Último »'),
    t('Nombres y apellidos'),
    t('Cargo'),
    t('Correo Institucional'),
    t('Sede'),
    t('Teléfono / Extensión'),
    t('Enlace SIGEP'),
    t('Page'),
  );
  $export['directorio_funcionarios'] = $view;

  return $export;
}
