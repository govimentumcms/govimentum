<?php
/**
 * @file
 * govi_mecanismos_contacto.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_mecanismos_contacto_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_atencion_ubicacion|node|mecanismos_atencion_ciudadano|form';
  $field_group->group_name = 'group_atencion_ubicacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mecanismos_atencion_ciudadano';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Código postal y ubicación geográfica',
    'weight' => '12',
    'children' => array(
      0 => 'field_atencion_codigo_postal',
      1 => 'field_atencion_enlace_mapa',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Código postal y ubicación geográfica',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-atencion-ubicacion field-group-fieldset',
        'description' => 'Para obtener el código postal y mapa de ubicación de la Entidad, utilice el servicio nacional del Código Postal en <a href="http://codigopostal.gov.co" target="_blank">codigopostal.gov.co</a>. En ese portal ingrese la ciudad y la dirección de la Entidad siguiendo el Estandar de Direcciones que puede ser consultado en <a href=http://codigopostal.gov.co/sites/default/files/EstandardeDiligenciamientoDirecciones.pdf">este enlace</a>.
Una vez el servicio retorne la información, ingrese el código postal en el campo "Código Postal", luego haga click derecho en el enlace "¿Quiéres ver tu código postal en el mapa?" en el portal del Código Postal y seleccione Copiar locación del link, luego pegue la URL en el campo "Enlace a mapa" de este formulario.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_atencion_ubicacion|node|mecanismos_atencion_ciudadano|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Código postal y ubicación geográfica');

  return $field_groups;
}
