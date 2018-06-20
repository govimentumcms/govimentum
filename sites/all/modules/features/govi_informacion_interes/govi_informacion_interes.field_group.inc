<?php
/**
 * @file
 * govi_informacion_interes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_informacion_interes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documento_categorizacion|node|documento|form';
  $field_group->group_name = 'group_documento_categorizacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documento';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorizacion',
    'weight' => '1',
    'children' => array(
      0 => 'field_documento_clasificacion',
      1 => 'field_docuemento_periodicidad',
      2 => 'field_documento_fecha',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-documento-categorizacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_documento_categorizacion|node|documento|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documento_recurso|node|documento|form';
  $field_group->group_name = 'group_documento_recurso';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documento';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recurso',
    'weight' => '2',
    'children' => array(
      0 => 'field_documento_tipo_recurso',
      1 => 'field_documento_enlace',
      2 => 'field_documento_adjunto',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-documento-recurso field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_documento_recurso|node|documento|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorizacion');
  t('Recurso');

  return $field_groups;
}
