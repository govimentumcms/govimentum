<?php
/**
 * @file
 * govi_marco_legal.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function govi_marco_legal_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-marco_legal-field_legal_adjunto'.
  $field_instances['node-marco_legal-field_legal_adjunto'] = array(
    'bundle' => 'marco_legal',
    'deleted' => 0,
    'description' => 'Gestione un archivo adjunto si la norma o documento no tiene referencia en el Sistema de Información del Régimen Legal <a href="http://172.16.101.193:8081/sisjur/index.jsp" target="_blank">Sisjur</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_legal_adjunto',
    'label' => 'Archivo adjunto',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'marco-legal',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-marco_legal-field_legal_clasificacion'.
  $field_instances['node-marco_legal-field_legal_clasificacion'] = array(
    'bundle' => 'marco_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_legal_clasificacion',
    'label' => 'Clasificación del marco legal',
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

  // Exported field_instance: 'node-marco_legal-field_legal_descripcion'.
  $field_instances['node-marco_legal-field_legal_descripcion'] = array(
    'bundle' => 'marco_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Breve descripción o resumen sobre la norma ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_legal_descripcion',
    'label' => 'Descripción',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-marco_legal-field_legal_enlace'.
  $field_instances['node-marco_legal-field_legal_enlace'] = array(
    'bundle' => 'marco_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'indique la url donde el usuario puede acceder o descargar la norma.<br/>
Una fuente oficial de normas distritales puede ser consultada en la Plataforma del Régimen Legal de la Alcaldía Mayor de Bogota <a href="http://www.alcaldiabogota.gov.co/sisjur/index.jsp" target="_blank">Sisjur</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_legal_enlace',
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
      'title_value' => 'Consultar norma',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-marco_legal-field_legal_expedicion'.
  $field_instances['node-marco_legal-field_legal_expedicion'] = array(
    'bundle' => 'marco_legal',
    'deleted' => 0,
    'description' => 'indique la fecha oficial de publicación de la norma',
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
    'field_name' => 'field_legal_expedicion',
    'label' => 'Fecha de expedición de la norma',
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
        'year_range' => '1930:+10',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-marco_legal-field_legal_lineamientos'.
  $field_instances['node-marco_legal-field_legal_lineamientos'] = array(
    'bundle' => 'marco_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_legal_lineamientos',
    'label' => 'Tipos de lineamientos',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-marco_legal-field_legal_lugar_expedicion'.
  $field_instances['node-marco_legal-field_legal_lugar_expedicion'] = array(
    'bundle' => 'marco_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Palabras clave indicando la entidad lugar u organización que expide la norma',
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
    'field_name' => 'field_legal_lugar_expedicion',
    'label' => 'Entidad que expide la norma',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-marco_legal-field_legal_normatividad'.
  $field_instances['node-marco_legal-field_legal_normatividad'] = array(
    'bundle' => 'marco_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_legal_normatividad',
    'label' => 'Tipos de normatividad',
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

  // Exported field_instance: 'node-marco_legal-field_legal_numero'.
  $field_instances['node-marco_legal-field_legal_numero'] = array(
    'bundle' => 'marco_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique el número oficial que permite la consulta de la norma.<br/>
Una fuente oficial de normas distritales puede ser consultada en la Plataforma del Régimen Legal de la Alcaldía Mayor de Bogota <a href="http://www.alcaldiabogota.gov.co/sisjur/index.jsp" target="_blank">Sisjur</a>',
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
    'field_name' => 'field_legal_numero',
    'label' => 'Número de la norma',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-marco_legal-field_legal_planes'.
  $field_instances['node-marco_legal-field_legal_planes'] = array(
    'bundle' => 'marco_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_legal_planes',
    'label' => 'Tipos de planes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-marco_legal-field_legal_recurso'.
  $field_instances['node-marco_legal-field_legal_recurso'] = array(
    'bundle' => 'marco_legal',
    'default_value' => array(
      0 => array(
        'value' => 'enlace',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_legal_recurso',
    'label' => 'Tipo de recurso',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivo adjunto');
  t('Breve descripción o resumen sobre la norma ');
  t('Clasificación del marco legal');
  t('Descripción');
  t('Enlace');
  t('Entidad que expide la norma');
  t('Fecha de expedición de la norma');
  t('Gestione un archivo adjunto si la norma o documento no tiene referencia en el Sistema de Información del Régimen Legal <a href="http://172.16.101.193:8081/sisjur/index.jsp" target="_blank">Sisjur</a>');
  t('Indique el número oficial que permite la consulta de la norma.<br/>
Una fuente oficial de normas distritales puede ser consultada en la Plataforma del Régimen Legal de la Alcaldía Mayor de Bogota <a href="http://www.alcaldiabogota.gov.co/sisjur/index.jsp" target="_blank">Sisjur</a>');
  t('Número de la norma');
  t('Palabras clave indicando la entidad lugar u organización que expide la norma');
  t('Tipo de recurso');
  t('Tipos de lineamientos');
  t('Tipos de normatividad');
  t('Tipos de planes');
  t('indique la fecha oficial de publicación de la norma');
  t('indique la url donde el usuario puede acceder o descargar la norma.<br/>
Una fuente oficial de normas distritales puede ser consultada en la Plataforma del Régimen Legal de la Alcaldía Mayor de Bogota <a href="http://www.alcaldiabogota.gov.co/sisjur/index.jsp" target="_blank">Sisjur</a>');

  return $field_instances;
}
