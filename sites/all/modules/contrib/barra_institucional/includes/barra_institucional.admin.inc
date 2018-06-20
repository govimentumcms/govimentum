<?php
/**
 * @file
 * Configuración administrativa.
 * de la barra institucional.
 *
 */

/**
 * Callback de Formulario.
 *
 * @ver barra_institucional_menu()
 */

function barra_institucional_config_form ($form, &$form_state) {

    global $base_root;

    $sitio_registrado = variable_get('sitio_registro_solicitud_enviada');
    $solicitud_enviada = variable_get('bi_solicitud_enviada');
    $solicitud_fecha = variable_get('bi_solicitud_fecha');

    if (!$sitio_registrado) {
        $msg = 'Su sitio web aun no está registrado, debe completar el registro en <a href="/admin/config/features/site_register"> este enlace</a> para solicitar la barra institucional';
        $form['#markup'] = drupal_set_message($msg, 'error');
    }
    if ($solicitud_enviada) {
        $msg = 'El '.$solicitud_fecha.' se envió una solicitud de activación de la barra institucional a: ';
        $msg .= '<a href="">soporte@alcaldiabogota.gov.co</a> <br/>';
        $msg .= 'Puede realizar una nueva solicitud haciendo click en el boton guardar configuración.';
        drupal_set_message($msg, 'warning');
    }

    $form = array();

    $form['bi_settings'] = array(
        '#type' => 'fieldset',
        '#title' => 'Configuración de la barra institucional',
        '#description' => 'En esta sección podrá activar la barra institucional para el dominio de su entidad',
        '#collapsible' => FALSE,
    );

    $info = '';
    $info .= '<p>Para que la barra institucional sea visualizada en su sitio, ';
    $info .= 'primero deberá solicitar autorización de acceso a la Subdirección de ';
    $info .= 'Sistemas de la Secretaría General de la Alcaldía Mayor de Bogotá. ';
    $info .= 'Este modulo enviará un correo electrónico con la información de su sitio ';
    $info .= 'que se resume a continuación y en 24 horas la barra institucional estará ';
    $info .= 'activada.</p>';
    $info .= '<p>';
    $info .= 'Si tiene alguna dificultad, por favor escriba al correo electrónico ';
    $info .= '<a href mailto:"soporte@alcaldiabogota.gov.co">soporte@alcaldiabogota.gov.co</a></p>';

    $form['bi_settings']['info'] = array(
        '#markup' => $info,
    );

    $form['bi_site_info'] = array(
        '#type' => 'fieldset',
        '#title' => 'Información del sitio',
        '#description' => 'Resumen de la información que será enviada en la solicitud:',
        '#collapsible' => FALSE,
    );

    $form['bi_site_info']['sector'] = array(
        '#type' => 'textfield',
        '#title' => 'Nombre de sector',
        '#default_value' => variable_get('header_sector'),
        '#size' => '50',
        '#disabled' => TRUE
    );
    
    $form['bi_site_info']['entidad'] = array(
        '#type' => 'textfield',
        '#title' => 'Nombre de la Entidad',
        '#default_value' => variable_get('header_entidad'),
        '#size' => '50',
        '#disabled' => TRUE
    );

    $form['bi_site_info']['dominio_sitio'] = array(
        '#type' => 'textfield',
        '#title' => 'Nombre de dominio del sitio',
        '#default_value' => $base_root,
        '#size' => '50',
        '#disabled' => TRUE
    );

    $form['bi_site_info']['direccion_ip'] = array(
        '#type' => 'textfield',
        '#title' => 'Dirección IP',
        '#required' => TRUE,
        '#disabled' => TRUE,
        '#default_value' => ip_address()
    );

    $form['bi_site_info']['correo'] = array(
        '#type' => 'textfield',
        '#title' => 'Correo del solicitante',
        '#default_value' => variable_get('site_mail'),
        '#size' => '50',
        '#disabled' => TRUE
    );

    $form['bi_webmaster'] = array(
        '#type' => 'fieldset',
        '#title' => 'Datos del administrador del sitio',
        '#description' => 'Lorem Ipsum Dolor Sit Amet',
    );

    $sitio_nombre_admin = variable_get('sitio_nombre_admin');
    $form['bi_webmaster']['nombre_admin'] = array(
        '#type' => 'textfield',
        '#title' => 'Nombre del webmaster encargado del sitio',
        '#description' => 'Por favor ingrese nombres y apellidos completos',
        '#required' => TRUE,
        '#default_value' => !empty($sitio_nombre_admin) ? variable_get('sitio_nombre_admin') : '',
        '#disabled' => TRUE
    );

    $sitio_cargo_admin = variable_get('sitio_cargo_admin');
    $form['bi_webmaster']['cargo_admin'] = array(
        '#type' => 'textfield',
        '#title' => 'Cargo',
        '#description' => 'Por favor ingrese su cargo',
        '#required' => TRUE,
        '#default_value' => !empty($sitio_cargo_admin) ? variable_get('sitio_cargo_admin') : '',
        '#disabled' => TRUE
    );

    $sitio_dependencia_admin = variable_get('sitio_dependencia_admin');
    $form['bi_webmaster']['dependencia_admin'] = array(
        '#type' => 'textfield',
        '#title' => 'Dependencia',
        '#description' => 'Por favor ingrese su dependencia',
        '#required' => TRUE,
        '#default_value' => !empty($sitio_dependencia_admin) ? variable_get('sitio_dependencia_admin') : '',
        '#disabled' => TRUE
    );

    $sitio_telefono_admin = variable_get('sitio_telefono_admin');
    $form['bi_webmaster']['telefono_admin'] = array(
        '#type' => 'textfield',
        '#title' => 'Teléfono y extensión de la oficina',
        '#required' => TRUE,
        '#default_value' => !empty($sitio_telefono_admin) ? variable_get('sitio_telefono_admin') : '',
        '#disabled' => TRUE

    );

    $form['#submit'][] = 'barra_institucional_config_form_submit';

    return system_settings_form($form);

}

function barra_institucional_config_form_submit($form, &$form_state) {

    $sitio_registrado = variable_get('sitio_registro_solicitud_enviada');
    if (!$sitio_registrado) {
        drupal_get_messages();
        drupal_set_message('No se puede enviar', 'error');
        return;
    }

    global $user;
    global $base_url;
    $ip = ip_address();

    $params = array(
        'user' => $user,
        'url' => $base_url,
        'ip' => $ip,
        'fecha_actual' => format_date(time(), 'long', 'l, F j'),
        'sector' => variable_get('header_sector'),
        'form' => $form_state['values'],
        'headers' => array(
            'Cc' => 'facostav@alcaldiabogota.gov.co, afcastillo@alcaldiabogota.gov.co, fhernandezn@alcaldiabogota.gov.co'
        ),
    );

    $correo_para = 'soporte@alcaldiabogota.gov.co';
    drupal_mail('barra_institucional',
                'solicitud',
                $correo_para,
                user_preferred_language($user),
                $params,
                $form_state['values']['correo'],
                TRUE
    );


    variable_set('bi_solicitud_enviada', TRUE);
    variable_set('bi_solicitud_fecha', format_date(time(), 'long'));

    drupal_get_messages();
    drupal_set_message('Se ha enviado un correo electrónico con la solicitud de activación');
}

function barra_institucional_mail($key, &$message, $params) {



    $asunto = '[Govimentum] Solicitud activación barra institucional de ' . $params['url'];
    $msg = 'El sitio ' . $params['url'] . ' ha solicitado la activación de la barra institucional.' . PHP_EOL;
    $msg .= 'Los datos del solicitante son: ' . PHP_EOL;
    $msg .= '' . PHP_EOL;
    $msg .= 'Nombre: '. variable_get('sitio_nombre_admin') . PHP_EOL;
    $msg .= 'Cargo: ' . variable_get('sitio_cargo_admin') . PHP_EOL;
    $msg .= 'Dependencia: ' . variable_get('sitio_dependencia_admin') . PHP_EOL;
    $msg .= 'Telefono Oficina: ' . variable_get('sitio_telefono_admin') . PHP_EOL;
    $msg .= 'Correo electrónico: ' . $params['user']->mail . PHP_EOL;
    $msg .= 'Dirección ip del sitio: '. $params['ip'] . PHP_EOL;
    $msg .= 'Sector al cual pertenece el sitio: ' . $params['sector'] . PHP_EOL;

    $header_entidad = variable_get('header_entidad');

    if (!empty($header_entidad)) {
        $msg .= 'Nombre de la entidad:' . variable_get('header_entidad') . PHP_EOL;
    }
    $msg .= 'Fecha de solicitud: ' . $params['fecha_actual'] . PHP_EOL;
    
    switch ($key) {
    case 'solicitud':

        $message['subject'] = $asunto;
        $message['body'][] = $msg;

        break;
    }
}