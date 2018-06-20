<?php
/**
 * @file
 * govi_informaci_n_institucional.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_informaci_n_institucional_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'organizaci_n';
  $view->description = 'Vista con la información institucional de la entidad como misión, visión, objetivos, funciones, y organigrama.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '3. Estructura orgánica y talento humano';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organización';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Ancla */
  $handler->display->display_options['fields']['field_field_organizacion_ancla']['id'] = 'field_field_organizacion_ancla';
  $handler->display->display_options['fields']['field_field_organizacion_ancla']['table'] = 'field_data_field_field_organizacion_ancla';
  $handler->display->display_options['fields']['field_field_organizacion_ancla']['field'] = 'field_field_organizacion_ancla';
  $handler->display->display_options['fields']['field_field_organizacion_ancla']['label'] = '';
  $handler->display->display_options['fields']['field_field_organizacion_ancla']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_field_organizacion_ancla']['alter']['text'] = '[field_field_organizacion_ancla-value]';
  $handler->display->display_options['fields']['field_field_organizacion_ancla']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[field_field_organizacion_ancla]';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'field_organizacion_archivo',
    2 => 'body',
    3 => 'field_organizacion_imagen',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['id'] = '[field_field_organizacion_ancla]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = '[field_field_organizacion_ancla-value]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Archivo */
  $handler->display->display_options['fields']['field_organizacion_archivo']['id'] = 'field_organizacion_archivo';
  $handler->display->display_options['fields']['field_organizacion_archivo']['table'] = 'field_data_field_organizacion_archivo';
  $handler->display->display_options['fields']['field_organizacion_archivo']['field'] = 'field_organizacion_archivo';
  $handler->display->display_options['fields']['field_organizacion_archivo']['label'] = '';
  $handler->display->display_options['fields']['field_organizacion_archivo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organizacion_archivo']['click_sort_column'] = 'fid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_organizacion_imagen']['id'] = 'field_organizacion_imagen';
  $handler->display->display_options['fields']['field_organizacion_imagen']['table'] = 'field_data_field_organizacion_imagen';
  $handler->display->display_options['fields']['field_organizacion_imagen']['field'] = 'field_organizacion_imagen';
  $handler->display->display_options['fields']['field_organizacion_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_organizacion_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organizacion_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_organizacion_imagen']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_organizacion_imagen']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
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
    'organizacion' => 'organizacion',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'transparencia/organizacion';
  $translatables['organizaci_n'] = array(
    t('Master'),
    t('Organización'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_field_organizacion_ancla-value]'),
    t('Fieldset'),
    t('[field_field_organizacion_ancla]'),
    t('Page'),
  );
  $export['organizaci_n'] = $view;

  return $export;
}
