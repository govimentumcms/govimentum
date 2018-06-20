<?php
/**
 * @file
 * govi_planeacion.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_planeacion_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_planeacion_clasificacion|node|planeacion|form';
  $field_group->group_name = 'group_planeacion_clasificacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'planeacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Clasificación',
    'weight' => '5',
    'children' => array(
      0 => 'field_planeacion_clasificacion',
      1 => 'field_planeacion_clasi_planes',
      2 => 'field_clasi_metas_indicadores',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-planeacion-clasificacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_planeacion_clasificacion|node|planeacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_planeacion_tipo_recurso|node|planeacion|form';
  $field_group->group_name = 'group_planeacion_tipo_recurso';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'planeacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recurso',
    'weight' => '1',
    'children' => array(
      0 => 'field_enlace_externo_planeacion',
      1 => 'field_archivo_adjunto_planeacion',
      2 => 'field_planeacion_tipo_de_recurso',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recurso',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-planeacion-tipo-recurso field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_planeacion_tipo_recurso|node|planeacion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Clasificación');
  t('Recurso');

  return $field_groups;
}
