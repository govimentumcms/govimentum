<?php
/**
 * @file
 * govi_noticias.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function govi_noticias_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Noticia copete tamaño';
  $rule->name = 'noticia_copete_tamano';
  $rule->field_name = 'field_copete';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'noticia';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '400',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 1,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'El número de caracteres permitido es de 400';
  $export['noticia_copete_tamano'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Noticia url tamaño';
  $rule->name = 'noticia_url_tamano';
  $rule->field_name = 'field_enlace_noticia';
  $rule->col = 'url';
  $rule->entity_type = 'node';
  $rule->bundle = 'noticia';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '150',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 1,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'El número de caracteres permitido es de 150';
  $export['noticia_url_tamano'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validación noticias fecha publicación';
  $rule->name = 'validacion_noticias_fecha_public';
  $rule->field_name = 'field_fecha_de_publicacion';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'noticia';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => '',
    'max' => 'now',
    'reverse' => 0,
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
  $rule->error_message = 'La fecha establecida no debe superar la de hoy';
  $export['validacion_noticias_fecha_public'] = $rule;

  return $export;
}
