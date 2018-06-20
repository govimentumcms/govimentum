<?php
/**
 * @file
 * govi_instrumentos_gestion_info.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_instrumentos_gestion_info_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instrumentos_clasificacion|node|instrumentos_gestion_informacion|form';
  $field_group->group_name = 'group_instrumentos_clasificacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'instrumentos_gestion_informacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Clasificacion',
    'weight' => '3',
    'children' => array(
      0 => 'field_instrumentos_clasificacion',
      1 => 'field_instrumentos_fecha_exp',
      2 => 'field_instrumentos_periodicidad',
      3 => 'field_instrumentos_tipo_document',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Clasificacion',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-instrumentos-clasificacion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_instrumentos_clasificacion|node|instrumentos_gestion_informacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instrumentos_info_basica|node|instrumentos_gestion_informacion|form';
  $field_group->group_name = 'group_instrumentos_info_basica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'instrumentos_gestion_informacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información Basica',
    'weight' => '0',
    'children' => array(
      0 => 'field_instrumentos_descripcion',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Información Basica',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-instrumentos-info-basica field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_instrumentos_info_basica|node|instrumentos_gestion_informacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instrumentos_recurso|node|instrumentos_gestion_informacion|form';
  $field_group->group_name = 'group_instrumentos_recurso';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'instrumentos_gestion_informacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recurso',
    'weight' => '4',
    'children' => array(
      0 => 'field_instrumentos_adjunto',
      1 => 'field_instrumentos_enlace',
      2 => 'field_instrumentos_tipo_recurso',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recurso',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-instrumentos-recurso field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_instrumentos_recurso|node|instrumentos_gestion_informacion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Clasificacion');
  t('Información Basica');
  t('Recurso');

  return $field_groups;
}
