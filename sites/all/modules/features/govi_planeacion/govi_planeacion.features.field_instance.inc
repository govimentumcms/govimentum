<?php
/**
 * @file
 * govi_planeacion.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function govi_planeacion_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-planeacion-field_archivo_adjunto_planeacion'.
  $field_instances['node-planeacion-field_archivo_adjunto_planeacion'] = array(
    'bundle' => 'planeacion',
    'deleted' => 0,
    'description' => 'Adjunte el archivo del recurso.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
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
    'field_name' => 'field_archivo_adjunto_planeacion',
    'label' => 'Archivo Adjunto',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'planeacion',
      'file_extensions' => 'pdf',
      'max_filesize' => '20 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-planeacion-field_clasi_metas_indicadores'.
  $field_instances['node-planeacion-field_clasi_metas_indicadores'] = array(
    'bundle' => 'planeacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Selecione una opción.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_clasi_metas_indicadores',
    'label' => 'Clasificación Metas e Indicadores',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-planeacion-field_enlace_externo_planeacion'.
  $field_instances['node-planeacion-field_enlace_externo_planeacion'] = array(
    'bundle' => 'planeacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite el enlace del recurso.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_enlace_externo_planeacion',
    'label' => 'Enlace externo',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-planeacion-field_planeacion_clasi_planes'.
  $field_instances['node-planeacion-field_planeacion_clasi_planes'] = array(
    'bundle' => 'planeacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione una opción.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_planeacion_clasi_planes',
    'label' => 'Clasificación de planes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-planeacion-field_planeacion_clasificacion'.
  $field_instances['node-planeacion-field_planeacion_clasificacion'] = array(
    'bundle' => 'planeacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione una opción.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_planeacion_clasificacion',
    'label' => 'Clasificación',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-planeacion-field_planeacion_descripcion'.
  $field_instances['node-planeacion-field_planeacion_descripcion'] = array(
    'bundle' => 'planeacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite la descripción.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_planeacion_descripcion',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 200,
        'maxlength_js_enforce' => 1,
        'maxlength_js_label' => 'Contenido limitado a @limit caracteres, restan: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 1,
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-planeacion-field_planeacion_fecha_expe'.
  $field_instances['node-planeacion-field_planeacion_fecha_expe'] = array(
    'bundle' => 'planeacion',
    'deleted' => 0,
    'description' => 'Seleccione la fecha de expedición.',
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
    'field_name' => 'field_planeacion_fecha_expe',
    'label' => 'Fecha Expedición',
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
        'year_range' => '-20:+0',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-planeacion-field_planeacion_periodicidad'.
  $field_instances['node-planeacion-field_planeacion_periodicidad'] = array(
    'bundle' => 'planeacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione la periodicidad.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_planeacion_periodicidad',
    'label' => 'Periodicidad',
    'required' => 0,
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

  // Exported field_instance:
  // 'node-planeacion-field_planeacion_tipo_de_recurso'.
  $field_instances['node-planeacion-field_planeacion_tipo_de_recurso'] = array(
    'bundle' => 'planeacion',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Seleccione el tipo de recurso.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_planeacion_tipo_de_recurso',
    'label' => 'Tipo de Recurso',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adjunte el archivo del recurso.');
  t('Archivo Adjunto');
  t('Clasificación');
  t('Clasificación Metas e Indicadores');
  t('Clasificación de planes');
  t('Descripción');
  t('Digite el enlace del recurso.');
  t('Digite la descripción.');
  t('Enlace externo');
  t('Fecha Expedición');
  t('Periodicidad');
  t('Seleccione el tipo de recurso.');
  t('Seleccione la fecha de expedición.');
  t('Seleccione la periodicidad.');
  t('Seleccione una opción.');
  t('Selecione una opción.');
  t('Tipo de Recurso');

  return $field_instances;
}
