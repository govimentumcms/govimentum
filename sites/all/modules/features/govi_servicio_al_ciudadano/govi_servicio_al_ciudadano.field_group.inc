<?php
/**
 * @file
 * govi_servicio_al_ciudadano.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_servicio_al_ciudadano_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sdqs_respuesta|node|sdqs_logs|form';
  $field_group->group_name = 'group_sdqs_respuesta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdqs_logs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Respuesta',
    'weight' => '3',
    'children' => array(
      0 => 'field_sdqs_numero',
      1 => 'field_sdqs_codigo_respuesta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sdqs-respuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sdqs_respuesta|node|sdqs_logs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sdqs_solicitud|node|sdqs_logs|form';
  $field_group->group_name = 'group_sdqs_solicitud';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdqs_logs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Solicitud',
    'weight' => '2',
    'children' => array(
      0 => 'field_sdqs_fecha_radicacion',
      1 => 'field_sdqs_correo_peticionario',
      2 => 'field_sdqs_id_peticionario',
      3 => 'field_sdqs_tipo_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sdqs-solicitud field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sdqs_solicitud|node|sdqs_logs|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Respuesta');
  t('Solicitud');

  return $field_groups;
}
