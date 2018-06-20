<?php
/**
 * @file
 * govi_tramites_servicios.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function govi_tramites_servicios_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-tramites_servicios-field_archivo_adjunto_tram_serv'.
  $field_instances['node-tramites_servicios-field_archivo_adjunto_tram_serv'] = array(
    'bundle' => 'tramites_servicios',
    'deleted' => 0,
    'description' => 'Seleccione un archivo.',
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
    'field_name' => 'field_archivo_adjunto_tram_serv',
    'label' => 'Archivo Adjunto',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'tramites_servicios',
      'file_extensions' => 'pdf',
      'max_filesize' => '20MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-tramites_servicios-field_clasificacion_tram_serv'.
  $field_instances['node-tramites_servicios-field_clasificacion_tram_serv'] = array(
    'bundle' => 'tramites_servicios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione una opción.',
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
    'field_name' => 'field_clasificacion_tram_serv',
    'label' => 'Clasificacion Trámites y Servicios',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-tramites_servicios-field_descripcion_tram_serv'.
  $field_instances['node-tramites_servicios-field_descripcion_tram_serv'] = array(
    'bundle' => 'tramites_servicios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite el texto de descripción.',
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
    'field_name' => 'field_descripcion_tram_serv',
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
        'maxlength_js' => 150,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Contenido limitado a @limit caracteres, restan: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-tramites_servicios-field_enlace_externo_tram_serv'.
  $field_instances['node-tramites_servicios-field_enlace_externo_tram_serv'] = array(
    'bundle' => 'tramites_servicios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite el enlace.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_enlace_externo_tram_serv',
    'label' => 'Enlace externo',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-tramites_servicios-field_tipo_de_recurso_tram_serv'.
  $field_instances['node-tramites_servicios-field_tipo_de_recurso_tram_serv'] = array(
    'bundle' => 'tramites_servicios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione una opción.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_tipo_de_recurso_tram_serv',
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
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivo Adjunto');
  t('Clasificacion Trámites y Servicios');
  t('Descripción');
  t('Digite el enlace.');
  t('Digite el texto de descripción.');
  t('Enlace externo');
  t('Seleccione un archivo.');
  t('Seleccione una opción.');
  t('Tipo de Recurso');

  return $field_instances;
}
