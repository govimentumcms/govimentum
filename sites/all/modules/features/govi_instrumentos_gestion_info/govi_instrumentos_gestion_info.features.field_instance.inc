<?php
/**
 * @file
 * govi_instrumentos_gestion_info.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function govi_instrumentos_gestion_info_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-instrumentos_gestion_informacion-field_instrumentos_adjunto'.
  $field_instances['node-instrumentos_gestion_informacion-field_instrumentos_adjunto'] = array(
    'bundle' => 'instrumentos_gestion_informacion',
    'deleted' => 0,
    'description' => 'Gestione un archivo adjunto.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
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
    'field_name' => 'field_instrumentos_adjunto',
    'label' => 'Archivo adjunto',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'instrumentos_gestion_informacion',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-instrumentos_gestion_informacion-field_instrumentos_clasificacion'.
  $field_instances['node-instrumentos_gestion_informacion-field_instrumentos_clasificacion'] = array(
    'bundle' => 'instrumentos_gestion_informacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione la clasificacion del Instrumento de gestión de información pública de la entidad
',
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
    'field_name' => 'field_instrumentos_clasificacion',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-instrumentos_gestion_informacion-field_instrumentos_descripcion'.
  $field_instances['node-instrumentos_gestion_informacion-field_instrumentos_descripcion'] = array(
    'bundle' => 'instrumentos_gestion_informacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_instrumentos_descripcion',
    'label' => 'Descripcion',
    'required' => 0,
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
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-instrumentos_gestion_informacion-field_instrumentos_enlace'.
  $field_instances['node-instrumentos_gestion_informacion-field_instrumentos_enlace'] = array(
    'bundle' => 'instrumentos_gestion_informacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique la url donde el usuario puede acceder o descargar el documento o recurso.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_instrumentos_enlace',
    'label' => 'Enlace',
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
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'Ir al documento',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-instrumentos_gestion_informacion-field_instrumentos_fecha_exp'.
  $field_instances['node-instrumentos_gestion_informacion-field_instrumentos_fecha_exp'] = array(
    'bundle' => 'instrumentos_gestion_informacion',
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
    'field_name' => 'field_instrumentos_fecha_exp',
    'label' => 'Fecha de Expedición',
    'required' => 0,
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
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-instrumentos_gestion_informacion-field_instrumentos_periodicidad'.
  $field_instances['node-instrumentos_gestion_informacion-field_instrumentos_periodicidad'] = array(
    'bundle' => 'instrumentos_gestion_informacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_instrumentos_periodicidad',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-instrumentos_gestion_informacion-field_instrumentos_tipo_document'.
  $field_instances['node-instrumentos_gestion_informacion-field_instrumentos_tipo_document'] = array(
    'bundle' => 'instrumentos_gestion_informacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione el tipo de documento si el instrumento de gestión de información publica es de la clasificación Informe de peticiones quejas reclamos denuncias y solicitudes de
 acceso a la información',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_instrumentos_tipo_document',
    'label' => 'Tipo de documento',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-instrumentos_gestion_informacion-field_instrumentos_tipo_recurso'.
  $field_instances['node-instrumentos_gestion_informacion-field_instrumentos_tipo_recurso'] = array(
    'bundle' => 'instrumentos_gestion_informacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_instrumentos_tipo_recurso',
    'label' => 'Tipo de Recurso',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivo adjunto');
  t('Clasificación');
  t('Descripcion');
  t('Enlace');
  t('Fecha de Expedición');
  t('Gestione un archivo adjunto.');
  t('Indique la url donde el usuario puede acceder o descargar el documento o recurso.');
  t('Periodicidad');
  t('Seleccione el tipo de documento si el instrumento de gestión de información publica es de la clasificación Informe de peticiones quejas reclamos denuncias y solicitudes de
 acceso a la información');
  t('Seleccione la clasificacion del Instrumento de gestión de información pública de la entidad
');
  t('Tipo de Recurso');
  t('Tipo de documento');

  return $field_instances;
}
