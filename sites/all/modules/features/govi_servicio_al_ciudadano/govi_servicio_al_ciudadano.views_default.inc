<?php
/**
 * @file
 * govi_servicio_al_ciudadano.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_servicio_al_ciudadano_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'enlaces_servicio_ciudadania';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces servicio a la ciudadanía';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enlaces servicio a la ciudadanía';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Banner */
  $handler->display->display_options['fields']['field_servicio_banner']['id'] = 'field_servicio_banner';
  $handler->display->display_options['fields']['field_servicio_banner']['table'] = 'field_data_field_servicio_banner';
  $handler->display->display_options['fields']['field_servicio_banner']['field'] = 'field_servicio_banner';
  $handler->display->display_options['fields']['field_servicio_banner']['label'] = '';
  $handler->display->display_options['fields']['field_servicio_banner']['element_type'] = '0';
  $handler->display->display_options['fields']['field_servicio_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servicio_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_servicio_banner']['settings'] = array(
    'image_style' => 'banner_servicio_ciudadano',
    'image_link' => '',
  );
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_servicio_enlace']['id'] = 'field_servicio_enlace';
  $handler->display->display_options['fields']['field_servicio_enlace']['table'] = 'field_data_field_servicio_enlace';
  $handler->display->display_options['fields']['field_servicio_enlace']['field'] = 'field_servicio_enlace';
  $handler->display->display_options['fields']['field_servicio_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_servicio_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servicio_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_servicio_enlace']['type'] = 'link_plain';
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
    'enlaces_servicio_ciudadano' => 'enlaces_servicio_ciudadano',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['enlaces_servicio_ciudadania'] = array(
    t('Master'),
    t('Enlaces servicio a la ciudadanía'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['enlaces_servicio_ciudadania'] = $view;

  return $export;
}
