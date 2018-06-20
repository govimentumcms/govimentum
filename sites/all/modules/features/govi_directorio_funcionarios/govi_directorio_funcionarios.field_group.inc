<?php
/**
 * @file
 * govi_directorio_funcionarios.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_directorio_funcionarios_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_basicos|node|directorio_funcionarios|form';
  $field_group->group_name = 'group_datos_basicos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directorio_funcionarios';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Básicos',
    'weight' => '0',
    'children' => array(
      0 => 'field_cargo',
      1 => 'field_correo_dependencia',
      2 => 'field_correo_institucional',
      3 => 'field_foto_jefe_de_area',
      4 => 'field_sede',
      5 => 'field_telefono_extension',
      6 => 'field_tipo_de_funcionario',
      7 => 'field_dependencia_oficina',
      8 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos Básicos',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-datos-basicos field-group-fieldset',
        'description' => '<h5>Los datos básicos del funcionario serán mostrados en la sección directorio del menu transparencia del portal institucional</h5>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_datos_basicos|node|directorio_funcionarios|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_sigep|node|directorio_funcionarios|form';
  $field_group->group_name = 'group_datos_sigep';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directorio_funcionarios';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos SIGEP',
    'weight' => '1',
    'children' => array(
      0 => 'field_enlace_sigep',
      1 => 'field_fecha_nacimiento',
      2 => 'field_genero',
      3 => 'field_numero_documento',
      4 => 'field_primer_apellido',
      5 => 'field_primer_nombre',
      6 => 'field_segundo_apellido',
      7 => 'field_segundo_nombre',
      8 => 'field_tipo_de_viculacion',
      9 => 'field_tipo_documento',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos SIGEP',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-datos-sigep field-group-fieldset',
        'description' => '<h5>Estos datos corresponden al modelo propuesto por el Departamento Administrativo de Función Pública para ejecutar del proceso de carga Alta Masivo al Sistema de Información y Gestión del Empleo Público SIGEP, los cuales deberán ser generados en un archivo de texto plano separado por comas y enviado formalmente por parte del Director o Jefe de Talento Humano de la Entidad.<br/> Las instrucciones para solicitar el Alta Masivo pueden ser consultadas en el siguiente enlace: XXXXX</h5>',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_datos_sigep|node|directorio_funcionarios|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Datos Básicos');
  t('Datos SIGEP');

  return $field_groups;
}
