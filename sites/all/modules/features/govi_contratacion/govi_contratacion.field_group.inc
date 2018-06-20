<?php
/**
 * @file
 * govi_contratacion.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_contratacion_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contratacion_clasificacion|node|contratacion|form';
  $field_group->group_name = 'group_contratacion_clasificacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contratacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Clasificación',
    'weight' => '1',
    'children' => array(
      0 => 'field_contratacion_clasificacion',
      1 => 'field_contratacion_periodicidad',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Clasificación',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contratacion-clasificacion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contratacion_clasificacion|node|contratacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contratacion_info_basica|node|contratacion|form';
  $field_group->group_name = 'group_contratacion_info_basica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contratacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información Básica',
    'weight' => '0',
    'children' => array(
      0 => 'field_contratacion_descripcion',
      1 => 'field_contratacion_fecha_exp',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Información Básica',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contratacion-info-basica field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contratacion_info_basica|node|contratacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contratacion_recurso|node|contratacion|form';
  $field_group->group_name = 'group_contratacion_recurso';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contratacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recurso',
    'weight' => '2',
    'children' => array(
      0 => 'field_contratacion_adjunto',
      1 => 'field_contratacion_enlace',
      2 => 'field_contratacion_tipo_recurso',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recurso',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contratacion-recurso field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contratacion_recurso|node|contratacion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Clasificación');
  t('Información Básica');
  t('Recurso');

  return $field_groups;
}
