<?php
/**
 * @file
 * govi_presupuesto.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_presupuesto_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presupuesto_clasificacion|node|presupuesto|form';
  $field_group->group_name = 'group_presupuesto_clasificacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presupuesto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Clasificación',
    'weight' => '2',
    'children' => array(
      0 => 'field_presupuesto_clasificacion',
      1 => 'field_presupuesto_periodicidad',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-presupuesto-clasificacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_presupuesto_clasificacion|node|presupuesto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presupuesto_info_basica|node|presupuesto|form';
  $field_group->group_name = 'group_presupuesto_info_basica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presupuesto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información Básica',
    'weight' => '1',
    'children' => array(
      0 => 'field_presupuesto_descripcion',
      1 => 'field_presupuesto_fecha_exp',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-presupuesto-info-basica field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_presupuesto_info_basica|node|presupuesto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presupuesto_recurso|node|presupuesto|form';
  $field_group->group_name = 'group_presupuesto_recurso';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presupuesto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recurso',
    'weight' => '3',
    'children' => array(
      0 => 'field_presupuesto_adjunto',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-presupuesto-recurso field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_presupuesto_recurso|node|presupuesto|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Clasificación');
  t('Información Básica');
  t('Recurso');

  return $field_groups;
}
