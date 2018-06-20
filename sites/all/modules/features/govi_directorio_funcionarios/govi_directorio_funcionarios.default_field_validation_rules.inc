<?php
/**
 * @file
 * govi_directorio_funcionarios.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function govi_directorio_funcionarios_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validación texto email';
  $rule->name = 'validacion_correo_institucional';
  $rule->field_name = 'field_correo_institucional';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'directorio_funcionarios';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Este campo debe contener un correo electrónico válido';
  $export['validacion_correo_institucional'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validación texto email';
  $rule->name = 'validacion_texto_email';
  $rule->field_name = 'field_correo_dependencia';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'directorio_funcionarios';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Este campo debe contener un correo electrónico válido';
  $export['validacion_texto_email'] = $rule;

  return $export;
}
