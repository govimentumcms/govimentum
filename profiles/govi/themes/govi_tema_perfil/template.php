<?php

/**
 * Override or insert variables into the page template.
 */
function govi_tema_perfil_process_page(&$variables) {

  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
}

/**
 * Preprocesa las variables de la plantilla de mantenimiento
 * Implements hook_preprocess_maintenance_page().
 */
function govi_tema_perfil_preprocess_maintenance_page(&$variables) {

    drupal_add_js(drupal_get_path('theme', 'govi_tema_perfil') . '/assets/js/main.js');

    drupal_add_js(array('goviTemaPerfil' => array()), 'setting');
}

function govi_tema_perfil_form_alter(&$form, &$form_state, $form_id) {
    //var_dump($form_id);

    $form['#attributes']['class'][] = 'pure-form';
    $form['#attributes']['class'][] = 'pure-form-stacked';

    switch ($form_id) {

    case 'install_welcome':
        $form['actions']['submit']['#attributes']['class'][] = 'pure-button-primary';
        $form['actions']['submit']['#attributes']['class'][] = 'pure-button';
        break;

    case 'install_settings_form':
        $form['actions']['save']['#attributes']['class'][] = 'pure-button';
        break;

    case 'install_configure_form':
        $form['actions']['submit']['#attributes']['class'][] = 'pure-button';
        break;

    case 'govi_institutional_header_form':
        $form['submit']['#attributes']['class'][] = 'pure-button';
        break;

    }
    //var_dump($form);
}

function procesar_boton_upload($element, &$form_state, $form) {
    $element = file_managed_file_process($element, $form_state, $form);
    //var_dump($element);
    
    $element['upload_button']['#attributes']['class'][] = 'pure-button';
    return $element;
    
}

