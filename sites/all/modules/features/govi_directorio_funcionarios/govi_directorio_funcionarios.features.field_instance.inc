<?php
/**
 * @file
 * govi_directorio_funcionarios.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function govi_directorio_funcionarios_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-directorio_funcionarios-field_cargo'.
  $field_instances['node-directorio_funcionarios-field_cargo'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite el Nombre del cargo del funcionario',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cargo',
    'label' => 'Cargo',
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
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_correo_dependencia'.
  $field_instances['node-directorio_funcionarios-field_correo_dependencia'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
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
    'field_name' => 'field_correo_dependencia',
    'label' => 'Correo dependencia',
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
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_correo_institucional'.
  $field_instances['node-directorio_funcionarios-field_correo_institucional'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ingrese el correo institucional del funcionario',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_correo_institucional',
    'label' => 'Correo institucional',
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
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_dependencia_oficina'.
  $field_instances['node-directorio_funcionarios-field_dependencia_oficina'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione la oficina.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dependencia_oficina',
    'label' => 'Dependencia / oficina',
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
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-directorio_funcionarios-field_enlace_sigep'.
  $field_instances['node-directorio_funcionarios-field_enlace_sigep'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ingrese el enlace con la dirección absoluta que apunta al perfil del funcionario en el Sistema de Información y Gestión del Empleo Público SIGEP.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_enlace_sigep',
    'label' => 'Enlace SIGEP',
    'required' => 0,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_fecha_nacimiento'.
  $field_instances['node-directorio_funcionarios-field_fecha_nacimiento'] = array(
    'bundle' => 'directorio_funcionarios',
    'deleted' => 0,
    'description' => 'Digite la fecha de nacimiento del funcionario',
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
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fecha_nacimiento',
    'label' => 'Fecha nacimiento',
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
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_foto_jefe_de_area'.
  $field_instances['node-directorio_funcionarios-field_foto_jefe_de_area'] = array(
    'bundle' => 'directorio_funcionarios',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_foto_jefe_de_area',
    'label' => 'Foto jefe de área',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'directorio-funcionarios',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '80 KB',
      'max_resolution' => '200x200',
      'min_resolution' => '100x100',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-directorio_funcionarios-field_genero'.
  $field_instances['node-directorio_funcionarios-field_genero'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione una opción',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_genero',
    'label' => 'Genero',
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
  // 'node-directorio_funcionarios-field_numero_documento'.
  $field_instances['node-directorio_funcionarios-field_numero_documento'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite el documento de identidad del funcionario',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_numero_documento',
    'label' => 'Numero documento',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_primer_apellido'.
  $field_instances['node-directorio_funcionarios-field_primer_apellido'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite el Primer Apellido',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_primer_apellido',
    'label' => 'Primer apellido',
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

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_primer_nombre'.
  $field_instances['node-directorio_funcionarios-field_primer_nombre'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite el primer nombre',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_primer_nombre',
    'label' => 'Primer nombre',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-directorio_funcionarios-field_sede'.
  $field_instances['node-directorio_funcionarios-field_sede'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ingrese la sede del funcionario',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_sede',
    'label' => 'Sede',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_segundo_apellido'.
  $field_instances['node-directorio_funcionarios-field_segundo_apellido'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => ' Digite el Segundo Apellido',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_segundo_apellido',
    'label' => 'Segundo apellido',
    'required' => 0,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_segundo_nombre'.
  $field_instances['node-directorio_funcionarios-field_segundo_nombre'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digite el Segundo Apelledo',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_segundo_nombre',
    'label' => 'Segundo nombre',
    'required' => 0,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_telefono_extension'.
  $field_instances['node-directorio_funcionarios-field_telefono_extension'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_telefono_extension',
    'label' => 'Teléfono / Extensión',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_tipo_de_funcionario'.
  $field_instances['node-directorio_funcionarios-field_tipo_de_funcionario'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => array(
      0 => array(
        'value' => 'funcionario',
      ),
    ),
    'deleted' => 0,
    'description' => 'Ingrese el tipo de funcionario',
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
    'field_name' => 'field_tipo_de_funcionario',
    'label' => 'Tipo de funcionario',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_tipo_de_viculacion'.
  $field_instances['node-directorio_funcionarios-field_tipo_de_viculacion'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Seleccione una Opción',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tipo_de_viculacion',
    'label' => 'Tipo de vinculación',
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

  // Exported field_instance:
  // 'node-directorio_funcionarios-field_tipo_documento'.
  $field_instances['node-directorio_funcionarios-field_tipo_documento'] = array(
    'bundle' => 'directorio_funcionarios',
    'default_value' => array(
      0 => array(
        'value' => 'Cédula de Ciudadanía',
      ),
    ),
    'deleted' => 0,
    'description' => 'Seleccione una opción',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tipo_documento',
    'label' => 'Tipo documento',
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

  // Translatables
  // Included for use with string extractors like potx.
  t(' Digite el Segundo Apellido');
  t('Cargo');
  t('Correo dependencia');
  t('Correo institucional');
  t('Dependencia / oficina');
  t('Digite el Nombre del cargo del funcionario');
  t('Digite el Primer Apellido');
  t('Digite el Segundo Apelledo');
  t('Digite el documento de identidad del funcionario');
  t('Digite el primer nombre');
  t('Digite la fecha de nacimiento del funcionario');
  t('Enlace SIGEP');
  t('Fecha nacimiento');
  t('Foto jefe de área');
  t('Genero');
  t('Ingrese el enlace con la dirección absoluta que apunta al perfil del funcionario en el Sistema de Información y Gestión del Empleo Público SIGEP.');
  t('Ingrese el tipo de funcionario');
  t('Ingrese la sede del funcionario');
  t('Numero documento');
  t('Primer apellido');
  t('Primer nombre');
  t('Sede');
  t('Segundo apellido');
  t('Segundo nombre');
  t('Seleccione la oficina.');
  t('Seleccione una Opción');
  t('Seleccione una opción');
  t('Teléfono / Extensión');
  t('Tipo de funcionario');
  t('Tipo de vinculación');
  t('Tipo documento');
  t('ingrese el correo institucional del funcionario');

  return $field_instances;
}
