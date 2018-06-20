<?php
/**
 * @file
 * govi_presupuesto.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_presupuesto_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'presupuesto';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '5. Presupuesto';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Presupuesto General';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_presupuesto_fecha_exp',
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['id'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['table'] = 'field_data_field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['field'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['click_sort_column'] = 'fid';
  /* Field: Content: Clasificación */
  $handler->display->display_options['fields']['field_presupuesto_clasificacion']['id'] = 'field_presupuesto_clasificacion';
  $handler->display->display_options['fields']['field_presupuesto_clasificacion']['table'] = 'field_data_field_presupuesto_clasificacion';
  $handler->display->display_options['fields']['field_presupuesto_clasificacion']['field'] = 'field_presupuesto_clasificacion';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['id'] = 'field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['table'] = 'field_data_field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['field'] = 'field_presupuesto_descripcion';
  /* Field: Content: Fecha de expedición */
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['id'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['table'] = 'field_data_field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['field'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['id'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['table'] = 'field_data_field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['field'] = 'field_presupuesto_periodicidad';
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
    'presupuesto' => 'presupuesto',
  );

  /* Display: Presupuesto */
  $handler = $view->new_display('page', '5. Presupuesto', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '5. Presupuesto';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_presupuesto_fecha_exp',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
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
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam quis tortor vel eros semper varius. Morbi vulputate, lacus a tristique mollis, sem dolor ullamcorper massa, nec aliquet est dolor sed justo. Aliquam interdum sapien a malesuada pellentesque. Cras in dui viverra, tempus erat ac, maximus enim. Sed pretium at odio id mattis. Nullam consectetur elit eget dui iaculis porttitor eu id ante. Maecenas bibendum augue enim, id sollicitudin augue interdum id. Nam nisl risus, placerat vel lacus vulputate, congue fringilla turpis. Ut sed feugiat dolor. Sed sit amet nisl a eros volutpat egestas. Morbi in semper velit. Ut ultrices pharetra massa sit amet sagittis. Aliquam sit amet pretium tellus. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'presupuesto' => 'presupuesto',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'transparencia/presupuesto';

  /* Display: Presupuesto General */
  $handler = $view->new_display('page', 'Presupuesto General', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Cras commodo, orci sit amet laoreet molestie, libero leo volutpat arcu, ut efficitur risus massa vel turpis. Suspendisse ac tortor vitae nunc tempor vestibulum. Morbi blandit interdum finibus. Praesent viverra et turpis ac venenatis. Proin ultricies lobortis magna nec lobortis. Phasellus odio dolor, condimentum eget neque sit amet, ultrices dignissim dolor. Mauris in neque orci. Aliquam eget odio varius, vulputate dui sit amet, viverra ligula. Nam vulputate, mauris sed porttitor tincidunt, lacus tortor blandit purus, sed commodo odio urna nec risus. Duis ultrices diam nec gravida ullamcorper. Cras sem quam, pharetra eget dapibus nec, bibendum eu enim. Donec viverra pulvinar justo a luctus. ';
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
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['id'] = 'field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['table'] = 'field_data_field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['field'] = 'field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['exclude'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['id'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['table'] = 'field_data_field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['field'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['exclude'] = TRUE;
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['id'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['table'] = 'field_data_field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['field'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['path'] = '[field_presupuesto_adjunto]';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Fecha de expedición */
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['id'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['table'] = 'field_data_field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['field'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_presupuesto_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_presupuesto_periodicidad] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_presupuesto_adjunto]
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
    'presupuesto' => 'presupuesto',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    55 => '55',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'presupuesto_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/presupuesto/general';

  /* Display: Ejecución Presupuestal */
  $handler = $view->new_display('page', 'Ejecución Presupuestal', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ejecución Presupuestal';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_presupuesto_fecha_exp',
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
  $handler->display->display_options['header']['area']['content'] = 'Cras vestibulum tellus massa, ac dignissim sem lobortis ut. Donec sit amet nisi ac lectus pulvinar tempus at eu enim. Curabitur varius eget nunc in pellentesque. In cursus lectus imperdiet, ultricies nunc in, pretium eros. Ut dignissim feugiat libero. Sed sit amet magna ut tortor tincidunt rhoncus in ut ipsum. Curabitur vel ex sed odio posuere sollicitudin et sed quam. Pellentesque vel convallis velit. Curabitur risus urna, aliquet eu ipsum vitae, vestibulum varius nibh. Nunc eleifend urna quam, et ultricies nisl gravida non. Vestibulum ipsum sapien, pulvinar eu porttitor a, cursus suscipit ex. Pellentesque varius est ut justo interdum, eu semper metus dictum. Nulla quam tortor, elementum non dignissim eu, vehicula quis nibh. ';
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
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['id'] = 'field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['table'] = 'field_data_field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['field'] = 'field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['exclude'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['id'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['table'] = 'field_data_field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['field'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['exclude'] = TRUE;
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['id'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['table'] = 'field_data_field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['field'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['path'] = '[field_presupuesto_adjunto]';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Fecha de expedición */
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['id'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['table'] = 'field_data_field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['field'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_presupuesto_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_presupuesto_periodicidad] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_presupuesto_adjunto]
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
    'presupuesto' => 'presupuesto',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    53 => '53',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'presupuesto_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/presupuesto/ejecucion-presupuestal';

  /* Display: Estados Financieros */
  $handler = $view->new_display('page', 'Estados Financieros', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Estados Financieros';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_presupuesto_fecha_exp',
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
  $handler->display->display_options['header']['area']['content'] = 'Ut consequat lorem magna, a dapibus neque sodales sed. Sed faucibus arcu quis sem faucibus, ut efficitur orci aliquet. Sed a viverra justo, nec lacinia purus. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Vivamus molestie lorem et mauris convallis blandit. Vestibulum mi ipsum, commodo a est commodo, convallis gravida quam. Sed ut iaculis lorem. Duis tortor leo, aliquet sit amet arcu vitae, varius sodales nulla. Maecenas molestie lectus mattis tempor posuere. Phasellus sit amet nibh purus. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Suspendisse euismod tempor semper. Sed at urna pharetra, pellentesque nisl vel, bibendum nisl. Aliquam vel nisi et dui condimentum hendrerit. Praesent a justo enim. Nunc molestie purus at rhoncus dignissim. ';
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
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['id'] = 'field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['table'] = 'field_data_field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['field'] = 'field_presupuesto_descripcion';
  $handler->display->display_options['fields']['field_presupuesto_descripcion']['exclude'] = TRUE;
  /* Field: Content: Periodicidad */
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['id'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['table'] = 'field_data_field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['field'] = 'field_presupuesto_periodicidad';
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['id'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['table'] = 'field_data_field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['field'] = 'field_presupuesto_adjunto';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['text'] = ' Descargar ';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['path'] = '[field_presupuesto_adjunto]';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['link_class'] = 'icon-download pure-button';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presupuesto_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Fecha de expedición */
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['id'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['table'] = 'field_data_field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['field'] = 'field_presupuesto_fecha_exp';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto_fecha_exp']['settings'] = array(
    'format_type' => 'anho',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_presupuesto_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_presupuesto_periodicidad] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_presupuesto_adjunto]
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
    'presupuesto' => 'presupuesto',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'presupuesto_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/presupuesto/estados-financieros';
  $translatables['presupuesto'] = array(
    t('Master'),
    t('Presupuesto General'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Archivo adjunto'),
    t('Clasificación'),
    t('Descripción'),
    t('Periodicidad'),
    t('Presupuesto'),
    t('Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam quis tortor vel eros semper varius. Morbi vulputate, lacus a tristique mollis, sem dolor ullamcorper massa, nec aliquet est dolor sed justo. Aliquam interdum sapien a malesuada pellentesque. Cras in dui viverra, tempus erat ac, maximus enim. Sed pretium at odio id mattis. Nullam consectetur elit eget dui iaculis porttitor eu id ante. Maecenas bibendum augue enim, id sollicitudin augue interdum id. Nam nisl risus, placerat vel lacus vulputate, congue fringilla turpis. Ut sed feugiat dolor. Sed sit amet nisl a eros volutpat egestas. Morbi in semper velit. Ut ultrices pharetra massa sit amet sagittis. Aliquam sit amet pretium tellus. '),
    t('Cras commodo, orci sit amet laoreet molestie, libero leo volutpat arcu, ut efficitur risus massa vel turpis. Suspendisse ac tortor vitae nunc tempor vestibulum. Morbi blandit interdum finibus. Praesent viverra et turpis ac venenatis. Proin ultricies lobortis magna nec lobortis. Phasellus odio dolor, condimentum eget neque sit amet, ultrices dignissim dolor. Mauris in neque orci. Aliquam eget odio varius, vulputate dui sit amet, viverra ligula. Nam vulputate, mauris sed porttitor tincidunt, lacus tortor blandit purus, sed commodo odio urna nec risus. Duis ultrices diam nec gravida ullamcorper. Cras sem quam, pharetra eget dapibus nec, bibendum eu enim. Donec viverra pulvinar justo a luctus. '),
    t('Nombre'),
    t(' Descargar '),
    t('<div class="acordionv2">
<div class="pure-u-xl-1"><h2>[title]</h2></div>
<div class="pure-u-xl-15-24">
<p>Descripción</p>
[field_presupuesto_descripcion] 
</div>
<div class="pure-u-xl-4-24">
<p>Periodicidad</p>
[field_presupuesto_periodicidad] 
</div>
<div class="pure-u-xl-4-24 btnv2">
[field_presupuesto_adjunto]
</div>
</div>
'),
    t('Ejecución Presupuestal'),
    t('Cras vestibulum tellus massa, ac dignissim sem lobortis ut. Donec sit amet nisi ac lectus pulvinar tempus at eu enim. Curabitur varius eget nunc in pellentesque. In cursus lectus imperdiet, ultricies nunc in, pretium eros. Ut dignissim feugiat libero. Sed sit amet magna ut tortor tincidunt rhoncus in ut ipsum. Curabitur vel ex sed odio posuere sollicitudin et sed quam. Pellentesque vel convallis velit. Curabitur risus urna, aliquet eu ipsum vitae, vestibulum varius nibh. Nunc eleifend urna quam, et ultricies nisl gravida non. Vestibulum ipsum sapien, pulvinar eu porttitor a, cursus suscipit ex. Pellentesque varius est ut justo interdum, eu semper metus dictum. Nulla quam tortor, elementum non dignissim eu, vehicula quis nibh. '),
    t('Estados Financieros'),
    t('Ut consequat lorem magna, a dapibus neque sodales sed. Sed faucibus arcu quis sem faucibus, ut efficitur orci aliquet. Sed a viverra justo, nec lacinia purus. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Vivamus molestie lorem et mauris convallis blandit. Vestibulum mi ipsum, commodo a est commodo, convallis gravida quam. Sed ut iaculis lorem. Duis tortor leo, aliquet sit amet arcu vitae, varius sodales nulla. Maecenas molestie lectus mattis tempor posuere. Phasellus sit amet nibh purus. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Suspendisse euismod tempor semper. Sed at urna pharetra, pellentesque nisl vel, bibendum nisl. Aliquam vel nisi et dui condimentum hendrerit. Praesent a justo enim. Nunc molestie purus at rhoncus dignissim. '),
  );
  $export['presupuesto'] = $view;

  return $export;
}
