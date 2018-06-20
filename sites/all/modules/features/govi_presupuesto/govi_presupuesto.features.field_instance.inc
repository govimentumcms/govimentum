<?php
/**
 * @file
 * govi_presupuesto.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function govi_presupuesto_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-presupuesto-field_presupuesto_adjunto'.
  $field_instances['node-presupuesto-field_presupuesto_adjunto'] = array(
    'bundle' => 'presupuesto',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_adjunto',
    'label' => 'Archivo adjunto',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'presupuesto',
      'file_extensions' => 'pdf',
      'max_filesize' => '50 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-presupuesto-field_presupuesto_clasificacion'.
  $field_instances['node-presupuesto-field_presupuesto_clasificacion'] = array(
    'bundle' => 'presupuesto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique la que tipo de documento va a gestionar',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_clasificacion',
    'label' => 'Clasificación',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-presupuesto-field_presupuesto_descripcion'.
  $field_instances['node-presupuesto-field_presupuesto_descripcion'] = array(
    'bundle' => 'presupuesto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Breve resumen o descripción del documento que será publicado',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_descripcion',
    'label' => 'Descripción',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-presupuesto-field_presupuesto_fecha_exp'.
  $field_instances['node-presupuesto-field_presupuesto_fecha_exp'] = array(
    'bundle' => 'presupuesto',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_fecha_exp',
    'label' => 'Fecha de expedición',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1900:+10',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-presupuesto-field_presupuesto_periodicidad'.
  $field_instances['node-presupuesto-field_presupuesto_periodicidad'] = array(
    'bundle' => 'presupuesto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_presupuesto_periodicidad',
    'label' => 'Periodicidad',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivo adjunto');
  t('Breve resumen o descripción del documento que será publicado');
  t('Clasificación');
  t('Descripción');
  t('Fecha de expedición');
  t('Indique la que tipo de documento va a gestionar');
  t('Periodicidad');

  return $field_instances;
}
