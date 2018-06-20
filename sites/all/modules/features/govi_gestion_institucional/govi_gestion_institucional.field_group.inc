<?php
/**
 * @file
 * govi_gestion_institucional.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_gestion_institucional_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gestion_clasificacion|node|gestion_institucional|form';
  $field_group->group_name = 'group_gestion_clasificacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gestion_institucional';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Clasificación',
    'weight' => '2',
    'children' => array(
      0 => 'field_gestion_periodicidad',
      1 => 'field_gestion_clasificacion',
      2 => 'field_gestion_tipos_informe',
      3 => 'field_gestion_tipos_planes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gestion-clasificacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gestion_clasificacion|node|gestion_institucional|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gestion_info_basica|node|gestion_institucional|form';
  $field_group->group_name = 'group_gestion_info_basica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gestion_institucional';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información Básica',
    'weight' => '1',
    'children' => array(
      0 => 'field_gestion_descripcion',
      1 => 'field_gestion_adjunto',
      2 => 'field_gestion_fecha_pub',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Información Básica',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-gestion-info-basica field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gestion_info_basica|node|gestion_institucional|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Clasificación');
  t('Información Básica');

  return $field_groups;
}
