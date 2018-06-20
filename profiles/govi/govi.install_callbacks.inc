<?php

function _enable_theme($theme, &$context) {
    theme_enable(array($theme));
    variable_set('theme_default', $theme);

    $context['message'] = st('Instalado el tema default');
}

function _enable_module($module, $module_name, &$context) {
    module_enable(array($module), FALSE);
    $context['message'] = st('Modulo %module instalado.', array('%module' => $module_name));
}

function _configure_pathauto(&$context) {
    $context['message'] = 'Configurando gestor de url\'s limpias [Pathauto]';

    variable_set('pathauto_ignore_words',
                 'un, una, que, en, antes, pero, por, para, de, es, en, en, como, encendido, apagado, encendido, en, por, ya que, entonces, el, esto, aquello que, arriba, a través, con');
    variable_set('pathauto_node_organizacion_pattern',
                 'transparencia/organizacion/[node:title]');
    variable_set('pathauto_node_directorio_funcionarios_pattern',
                 'transparencia/organizacion/directorio-funcionarios/funcionario/[node:title]');
    variable_set('pathauto_node_marco_legal_pattern',
                 'transparencia/marco-legal/[node:field_legal_clasificacion]/[node:title]');
    variable_set('pathauto_node_contratacion_pattern',
                 'transparencia/contratacion/[node:field_contratacion_clasificacion]/[node:title]');
    variable_set('pathauto_node_instrumentos_gestion_informacion_pattern',
                 'transparencia/instrumentos-gestion-informacion-publica/[node:field_instrumentos_clasificacion]/[node:title]');
    variable_set('pathauto_node_planeacion_pattern',
                 'transparencia/planeacion/[node:field_planeacion_clasificacion]/[node:title]');
    variable_set('pathauto_node_tramites_servicios_pattern',
                 'transparencia/tramites-servicios/[node:title]');            
    variable_set('pathauto_node_noticia_pattern',
                 'noticias/[node:title]');
    variable_set('pathauto_node_eventos_pattern',
                'eventos/[node:title]');
    variable_set('pathauto_node_control_pattern',
                 'transparencia/control/[node:field_control_clasificacion]/[node:title]');  
    variable_set('pathauto_node_convocatoria_pattern',
                 'transparencia/informacion-interes/convocatoria/[node:title]');   
    variable_set('pathauto_node_documento_pattern',
                 'transparencia/informacion-interes/publicacion/[node:field_documento_clasificacion]/[node:title]');   
    variable_set('pathauto_node_glosario_pattern',
                 'transparencia/informacion-interes/glosario/[node:title]');   
    variable_set('pathauto_node_preguntas_frecuentes_pattern',
                 'transparencia/informacion-interes/faqs/[node:title]');   
}

function _configure_print(&$context){

    $context['message'] = ' Configurando variables del módulo print';

    variable_set('print_html_book_link ','1');
    variable_set('print_html_show_link','2');
    variable_set('print_html_sys_link_pages','noticias/* \n eventos/*');
    variable_set('print_html_sys_link_visibility','1');

    variable_set('print_mail_book_link','1');
    variable_set('print_mail_show_link','2');
    variable_set('print_mail_sys_link_pages','noticias/* \n eventos/*');
    variable_set('print_mail_sys_link_visibility','1');
}



function _configure_smtp (&$context) {

    $context['message'] = 'Configurando el agente de transferencia de correos SMTP';

    $site_mail = variable_get('site_mail');

    variable_set('smtp_from', $site_mail);
    variable_set('smtp_host', 'smtp.gmail.com');
    variable_set('smtp_on', '1');
    variable_set('smtp_port', '465');
    variable_set('smtp_protocol', 'ssl');
    variable_set('smtp_username', $site_mail);
}

function _configure_site_map (&$context) {
    $context['message'] = 'Configurando el mapa de sitio transparencia';

    $site_map_conf = array(
       'menu-menu-transparencia' => 'menu-menu-transparencia',
    );

    variable_set('site_map_page_title', 'Transparencia');
    variable_set('site_map_show_front', 0);
    variable_set('site_map_show_menus',  $site_map_conf);
}