<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
 
 



function govi_form_install_configure_form_alter(&$form, $form_state) {
	
  // Modifica los formularios para ser collapsables
    $form['site_information']['#collapsible'] = TRUE;
    $form['site_information']['#collapsed'] = TRUE;
    $form['admin_account']['#collapsible'] = TRUE;
    $form['admin_account']['#collapsed'] = TRUE;
    $form['update_notificacions']['#collapsible'] = TRUE;
    $form['update_notifications']['#collapsed'] = TRUE;
	$form['server_settings']['#collapsible'] = TRUE;
    $form['server_settings']['#collapsed'] = TRUE;
	$form['update_notifications']['#collapsible'] = TRUE;
    $form['update_notifications']['#collapsed'] = TRUE;

    // Desactiva elementos del formulario en esta parte del proceso
	$form['site_information']['site_name']['#default_value'] = 'NOMBRE ENTIDAD';
    $form['server_settings']['#access'] = TRUE;
    $form['update_notifications']['#access'] = TRUE;

    $form['configure_content'] = array(
        '#type' => 'fieldset',
        '#title' => 'Configuración del Contenido',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        '#prefix' => '<div class="grupo container-inline">',
        '#suffix' => '</div>'
    );

    $form['configure_content']['enable_content'] = array(
        '#type' => 'checkbox',
        '#title' => 'Instalar contenido de ejemplo',
        '#description' => '<br/>Active esta opción para instalar contenido de ejemplo en el sitio web. Recomendamos habilitar este contenido en un ambiente de pruebas para conocer como se presenta la información en los bloques temáticos de las secciones de Transparencia y Acceso a la Información Pública, Noticias, Eventos, Enlaces destacados, etc. No utilice este contenido de ejemplo en el ambiente de producción ya que pude interferir con el posicionamiento y accesibilidad web de los contenidos oficiales de la Entidad',
        '#default_value' => FALSE
    );
        
    // Crea nuevo campo para configuración del proxy
    $form['proxy_configuration'] = array(
        '#type' => 'fieldset',
        '#title' => 'Configuración del Proxy',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        '#prefix' => '<div class="grupo container-inline">',
        '#suffix' => '</div>'
    );

    // Proxy http
    $form['proxy_configuration']['http_server'] = array(
        '#type' => 'textfield',
        '#title' => 'Servidor http',
    );
    $form['proxy_configuration']['http_port'] = array(
        '#type' => 'textfield',
        '#title' => 'Puerto'
    );
    $form['proxy_configuration']['http_exceptions'] = array(
        '#type' => 'textfield',
        '#title' => 'Excepciones',
        '#description' => 'Este debe contener una lista separada por comas',
    );

    $form['#submit'][] = 'govi_form_install_configure_form_alter_submit';

}

function govi_form_install_configure_form_alter_submit ($form, &$form_state) {

    $exceptions = $form_state['values']['http_exceptions'];

    $urls = array();

    if (strpos($exceptions, ',')) {
        $exceptions = explode(',', $exceptions);
        foreach ($exceptions as $url) {
            array_push($urls, trim($url));
        }
    } else {
        array_push($urls, trim($exceptions));
    }

    variable_set('enable_content', $form_state['values']['enable_content']);

    // Define el proxy para el perfil de instalación
    variable_set('proxy_server', $form_state['values']['http_server']);
    variable_set('proxy_port', $form_state['values']['http_port']);
    variable_set('proxy_exceptions', $urls);

    // Valores predeterminados para la instalación standard
    variable_set('date_default_timezone', 'America/Bogota');
    variable_set('site_default_country', 'CO');
}
