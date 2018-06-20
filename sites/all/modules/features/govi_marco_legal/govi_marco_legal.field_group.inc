<?php
/**
 * @file
 * govi_marco_legal.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_marco_legal_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legal_clasificacion|node|marco_legal|form';
  $field_group->group_name = 'group_legal_clasificacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'marco_legal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Clasificación',
    'weight' => '6',
    'children' => array(
      0 => 'field_legal_clasificacion',
      1 => 'field_legal_lineamientos',
      2 => 'field_legal_normatividad',
      3 => 'field_legal_planes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Clasificación',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-legal-clasificacion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_legal_clasificacion|node|marco_legal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legal_info_basica|node|marco_legal|form';
  $field_group->group_name = 'group_legal_info_basica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'marco_legal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información Básica',
    'weight' => '0',
    'children' => array(
      0 => 'field_legal_descripcion',
      1 => 'field_legal_expedicion',
      2 => 'field_legal_lugar_expedicion',
      3 => 'field_legal_numero',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Información Básica',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-legal-info-basica field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_legal_info_basica|node|marco_legal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legal_recurso|node|marco_legal|form';
  $field_group->group_name = 'group_legal_recurso';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'marco_legal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recurso',
    'weight' => '7',
    'children' => array(
      0 => 'field_legal_adjunto',
      1 => 'field_legal_enlace',
      2 => 'field_legal_recurso',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recurso',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-legal-recurso field-group-fieldset',
        'description' => 'Este campo le permite referenciar el documento en el Sistema de Información del Régimen Legal -Sisjur- a través de un enlace. En caso de no existir referencia en el Sisjur puede habilitar la opción para subir un archivo adjunto. Recuerde que si ingresa información en ambas opciones la Distribución dará prioridad al enlace en la presentación de la sección del marco legal asociada al documento.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_legal_recurso|node|marco_legal|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Clasificación');
  t('Información Básica');
  t('Recurso');

  return $field_groups;
}
