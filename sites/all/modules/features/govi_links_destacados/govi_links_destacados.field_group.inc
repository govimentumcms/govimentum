<?php
/**
 * @file
 * govi_links_destacados.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function govi_links_destacados_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_enlace_config|node|enlace_destacado|form';
  $field_group->group_name = 'group_enlace_config';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'enlace_destacado';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presentación del enlace',
    'weight' => '2',
    'children' => array(
      0 => 'field_enlace_color',
      1 => 'field_enlace_tipo',
      2 => 'field_featured_link_imagen',
      3 => 'field_titulo_parte_1',
      4 => 'field_titulo_parte_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Presentación del enlace',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-enlace-config field-group-fieldset',
        'description' => 'Esta configuración le permitirá seleccionar la presentación del enlace. Hay dos tipos de presentación: 
<br/>
<strong>Enlace destacado primario: </strong>Este tipo de enlace tendrá un estilo gráfico apoyado de una imágen de fondo relacionada con el titulo. El el titulo estará compuesto por dos partes que se ajustarán al contenedor del enlace.
<br/>
<strong>Enlace destacado secundario:</strong> Este tipo de enlace tendrá un estilo gráfico menos relevante y sólamente contendrá el texto del titulo, sin embargo, podrá elegir un color predefinido para decorar el contenedor del enlace.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_enlace_config|node|enlace_destacado|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Presentación del enlace');

  return $field_groups;
}
