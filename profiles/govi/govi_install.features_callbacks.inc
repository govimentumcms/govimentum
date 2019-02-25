<?php

function _default_content(&$context){
    module_enable(array('govi_contenido_predeterminado'));

    $context['message'] = 'Instalando Contenido Predeterminado';

}

function _form_notificacion_judicial(&$context){

    $context['message'] = 'Configurando formulario de notificaciones judiciales';

    $query = new EntityFieldQuery();

    $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'webform')
        ->propertyCondition('status', 1)
        ->propertyCondition('title','Correo electrónico para notificaciones judiciales');

    $result = $query->execute();

    $node = node_load(array_values($result['node'])[0]->nid);
    // normaliza el machine name
    $node->webform['machine_name'] = $node->machine_name = 'form_notificaciones_judiciales';
    // Define el path adecuado
    $node->path['alias'] = 'transparencia/atencion-ciudadano/notificaciones-judiciales';

    node_save($node);

}

function _institutional_header(&$context) {
    module_enable(array('govi_encabezado_institucional'));

    $context['message'] = 'Instalando Header Institutional';

    chequear_bloque('menu', 'menu-menu-secundario', 'encabezado_a_1');
    chequear_bloque('system', 'user-menu', 'encabezado_a_1');
    chequear_bloque('search', 'form', 'encabezado_a_3');
    chequear_bloque('views', '6de055f9878424326340a60a96078651', 'encabezado_b_1');
    chequear_bloque('views', 'db425925bfe11f9c35824a11f164700a', 'encabezado_b_3');
    chequear_bloque('system', 'main-menu', 'encabezado_c_1');
    chequear_bloque('menu', 'menu-transparencia-segundo-nivel', 'encabezado_c_1');


    // Agrega contenido al Boton Contacto
    // TODO: buscar forma para desacoplar la gestión de nodos
    // en archivos
    global $user;

    $node = new stdClass();

    $node->title = 'Contacto';
    $node->type = 'enlace_simple';
    node_object_prepare($node);

    $node->language = LANGUAGE_NONE;
    $node->uid = $user->uid;
    $node->status = 1;
    $node->promote = 0;
    $node->comment = 0;

    $node->field_enlace['und'][0]['url'] = "/contacto";
    $node->field_enlace['und'][0]['title'] = "Contacto";

    $node->field_tipo['und'][0]['value'] = "boton";

    node_save($node);

    // TODO: Habilita logo Administracion Distrital default
}

function _informacion_institucional(&$context) {

    module_enable(array('govi_informaci_n_institucional'));

    $context['message'] = 'Instalando Información Institucional';

}

function _directorio_funcionarios(&$context) {
    module_enable(array('govi_directorio_funcionarios'));

    $context['message'] = 'Instalando Directorio de Funcionarios';

}

function _periodicidad($vocabularios, $terminos, &$context) {

    $context['message'] = 'Configurando términos para la periodicidad del contenido';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _frecuencia_evento($vocabularios, $terminos, &$context) {

    $context['message'] = 'Configurando términos para la frecuencia de los eventos';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _marco_legal(&$context) {
    module_enable(array('govi_marco_legal'));

    $context['message'] = 'Instalando gestor de marco legal';

}

function _marco_legal_clasificacion($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación del marco legal';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _marco_legal_normatividad($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la taxonomia normatividad';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }

}

function _marco_legal_lineamientos($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la taxonomia lineamientos';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }

}

function _marco_legal_planes($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la taxonomia planes';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }

}

function _planeacion(&$context) {

    module_enable(array('govi_planeacion'));

    $context['message'] = 'Instalando administrador de planeación';
}

function _planeacion_clasificacion($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de planeación';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _planeacion_clasificacion_metas_indicadores($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la taxonomia planeación clasificación metas e indicadores';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _planeacion_clasificacion_planes($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la taxonomia planeación tipos de planes';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _contratacion(&$context) {

    module_enable(array('govi_contratacion'));

    $context['message'] = 'Instalando administrador de contratación';
}

function _contratacion_clasificacion($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de la contratacion';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _instrumentos_gestion_informacion(&$context) {

    module_enable(array('govi_instrumentos_gestion_info'));

    $context['message'] = 'Instalando administrador de instrumentos de gestion de informacion publica';
}

function _instrumentos_clasificacion($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de la los instrumentos de destion de informacion publica';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _instrumentos_tipo_documento($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de la los instrumentos de destion de informacion publica';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _presupuesto(&$context) {

    module_enable(array('govi_presupuesto'));

    $context['message'] = 'Instalando gestor de información presupuestal';
}

function _presupuesto_clasificacion($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de la información presupuestal';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}


function _tramites_servicios(&$context) {

    module_enable(array('govi_tramites_servicios'));

    $context['message'] = 'Instalando administrador de trámites y servicios';
}

function _tramites_servicios_clasificacion($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de trámites y servicios';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _transparencia(&$context) {

    module_enable(array('govi_transparencia'));

    $context['message'] = 'Instalando administrador de transparencia';
}

function _directorio_de_funcionarios_dependencia_oficina($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación dependecias de directorio de funcionarios';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _control(&$context) {
    module_enable(array('govi_control'));

    $context['message'] = 'Instalando gestor de control';

}

function _control_clasificacion($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de control';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _control_tipo_de_informes_de_gestion($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de tippo de informes de gestión para control';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _clasificacion_convocatoria($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de convocatorias';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}
function _informacion_interes(&$context) {
    module_enable(array('govi_informacion_interes'));

    $context['message'] = 'Instalando gestor de informacion de interes';
}

function _clasificacion_documentos($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de informacion de interes';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

function _clasificacion_faqs($vocabularios, $terminos, &$context) {

    $context['message'] = 'Generando términos para la clasificación de faqs';

    if (!empty($vocabularios) && !empty($terminos)) {
        set_default_terms($vocabularios, $terminos);
    }
}

// Implementa Slideshow principal

function _main_slideshow(&$context) {

    module_enable(array('govi_slideshow_principal'));

    $context['message'] = 'Instalando slideshow principal';

    chequear_bloque('views', 'main_slideshow-block', 'posicion_a_1');

    if (!variable_get('enable_content')) {
        global $user;

        for ($i=0; $i<4; $i++) {
            $node = new stdClass();

            $node->title = 'Imagen destacada '. $i;
            $node->body = 'Lorem ipsum dolor sit amet consectur ...';
            $node->type = 'main_slideshow';
            node_object_prepare($node);

            $node->language = LANGUAGE_NONE;
            $node->uid = $user->uid;
            $node->status = 1;
            $node->promote = 0;
            $node->comment = 0;
            // Agrega contenido dummy
            $node->field_main_slideshow_image['und'][0]['width'] = 970;
            $node->field_main_slideshow_image['und'][0]['height'] = 270;
            $file = system_retrieve_file('http://ipsumimage.appspot.com/970x270.png', 'public://slideshow-principal', TRUE);
            if ($file->fid) {
                $node->field_main_slideshow_image['und'][0]['fid'] = $file->fid;
            }
            node_save($node);
        }
    }
}

function _noticias(&$context) {
    module_enable(array('govi_noticias'));

    $context['message'] = 'Instalando gestor de noticias';

    chequear_bloque('views', 'noticias-block_1', 'posicion_c_1', FALSE);
    chequear_bloque('views', 'otras_noticias-block_1', 'posicion_c_2', FALSE);
}

function _enlaces_destacados(&$context) {
    module_enable(array('govi_links_destacados'));

    $context['message'] = 'Instalando gestor de enlaces destacados';

    chequear_bloque('views', 'enlaces_destacados-block', 'posicion_c_3', FALSE);
    chequear_bloque('views', 'enlaces_destacados-block_1', 'posicion_d_3', FALSE);

}

function _eventos(&$context) {
    module_enable(array('govi_eventos'));

    $context['message'] = 'Instalando gestor de eventos';

    if (!empty($vocabularios) && !empty($terminos)) {

        set_default_terms($vocabularios, $terminos);
    }

    chequear_bloque('views', 'eventos-block_1', 'posicion_d_2', FALSE);
}

function _servicio_ciudadano(&$context) {
    module_enable(array('govi_sdqs'));
    module_enable(array('govi_servicio_al_ciudadano'));

    $context['message'] = 'Instalando módulo de servicio al ciudadano e interoperabilidad con el SDQS';

    chequear_bloque('govi_sdqs', 'govi_sdqs_block', 'posicion_d_1', FALSE);
}

function _mecanismos_contacto($vocabularios, $terminos, &$context) {
    module_enable(array('barra_institucional', FALSE));
    module_enable(array('govi_mecanismos_contacto'));

    $context['message'] = 'Instalando módulo transparencia, mecanismos de contacto';

    if (!empty($vocabularios) && !empty($terminos)) {

        set_default_terms($vocabularios, $terminos);
    }

    chequear_bloque('views', '88ba5e62327cd961206f56bfde8454ef', 'pie_a_1', FALSE);
    chequear_bloque('views', 'df0e5f263c6aeff0c747e467ef858fbb', 'pie_a_2', FALSE);
    chequear_bloque('views', '81ce4a2ceee9e109067a13e856f0625d', 'pie_a_3', FALSE);
    chequear_bloque('views', 'eaf805de0833f2fffe9b6ac28566286e', 'pie_a_4', FALSE);
    chequear_bloque('views', 'informacion_entidad-block', 'pie_b_1', FALSE);
    chequear_bloque('views', 'logo_escudo_colombia_pie-block', 'pie_b_2');
    chequear_bloque('barra_institucional', 'barra_institucional_block', 'pie_d_1', FALSE);
}

function _flush_caches($operation, &$context) {
    $context['message'] = t('@operacion', array('@operacion' => $operation) );
    drupal_flush_all_caches();
}

/* Función Establecer Términos Predeterminados
 *
 * Utilice este método para crear la lista de términos para un vocabulario dado
 *
 * @param $vocabularios Array con los machine names que definen los vocabularios a utilizar
 * @param $terminos Array con los términos que serán creados en los vocabularios dados
 */

function set_default_terms($vocabularios, $terminos) {

    foreach ($vocabularios as $vocabulario) {

        $v = taxonomy_vocabulary_machine_name_load($vocabulario);

        // Intenta crear el vocabulario si no existe
        if (empty($v)) {

            $v = (object) array(
                'name' => $vocabulario,
                'description' => 'Vocabulario generado desde el perfil de instalación, sientase libre de modificar su nombre',
                'machine_name' => $vocabulario
            );
            taxonomy_vocabulary_save($v);

            $v = taxonomy_vocabulary_machine_name_load($vocabulario);
        }

        foreach ($terminos as $termino) {
            $t = (object) array(
                'name' => $termino,
                'description' => 'termino '.$termino.' de la categoria '.$v->name,
                'vid' => $v->vid,
            );

            taxonomy_term_save($t);
        }
    }
}


/**
 * Función Chequear Bloque
 *
 * Utilice este método para verificar el estado del un bloque
 * con el fin de evitar queries que puedan romper la integridad
 * de la base de datos a causa de entradas duplicadas.
 *
 * @param $module String con el nombre del módulo que habitará el bloque
 * @param $delta  String con nombre único identificador del bloque. Para los
 *                bloques definidos por el modulo views es posible que el
 *                delta sea un valor hasheado para no superar la longitud
 *                permitida por la api de 32 caracteres. En este caso es
 *                válido usar el hash como valor del parametro delta.
 * @param $region String con el nombre de la posición donde se muestra el bloque
 * @param $drop_title Boolean para eliminar titulo default del bloque
 *
 * @return $block_check Array con los valores que identifican el estado del bloque 
 * y su estructura base: is_block, is_enabled, id.
 *
 */
function chequear_bloque($module, $delta, $region, $drop_title = TRUE) {

    $block = block_load($module, $delta);

    if (empty($block->bid)) {
        crear_bloque($module, $delta, $region, $drop_title);
    } else {
        habilitar_bloque($block, $region, $drop_title);
    }
}

function habilitar_bloque($block, $region, $drop_title) {

    db_update('block')
        ->fields(array(
            'status' => 1,
            'region' => $region,
            'title' => $drop_title ? '<none>': '',
            'theme' => variable_get('theme_default'),
        ))
        ->condition('bid', (int)$block->bid, '=')
        ->execute();
}

function crear_bloque($module, $delta, $region, $drop_title) {

    $query = db_insert('block')->fields(array('module', 'title', 'delta', 'theme', 'status', 'weight', 'region', 'pages', 'cache'));

    $block = array(
        'module' => $module,
        'title' => $drop_title ? '<none>': '',
        'delta' => $delta,
        'theme' => variable_get('theme_default'),
        'status' => 1,
        'weight' => 0,
        'region' => $region,
        'pages' => '',
        'cache' => -1,
    );

    $query->values($block);
    $query->execute();
}
