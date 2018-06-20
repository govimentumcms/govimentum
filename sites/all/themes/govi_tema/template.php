<?php

/**
 *  Overrides al sistema de temas de Drupal para el tema pdtic_purecss
 */

function govi_tema_preprocess_page(&$vars) {
    $entidad = variable_get('header_entidad');
    // Encontrar una forma más estructura de de hacer esto
    $vars['page']['header_sector'] = variable_get('header_sector');
    $vars['page']['header_entidad'] = variable_get('header_entidad');


    // main-menu.
    $main_menu_tree = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    $vars['main_menu'] =  $main_menu_tree;

    // Override al contenido de la lista de términos
    if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {

        unset($vars['page']['content']['system_main']['term_heading']['#prefix']);
        unset($vars['page']['content']['system_main']['term_heading']['#suffix']);
        unset($vars['page']['content']['system_main']['nodes']);

    }
}

/**
 * Overrides theme_menu_tree().
 */

function govi_tema_menu_tree($vars) {
  return '<ul class="pure-menu-list">' . $vars['tree'] . '</ul>';
}

function govi_tema_menu_tree__user_menu(&$variables) {
  return '<div class="pure-menu pure-menu-horizontal">' . '<ul class="pure-menu-list">' . $variables['tree'] . '</ul>' . '</div>';
}

function govi_tema_menu_tree__menu_menu_secundario(&$variables) {
  return '<div class="pure-menu pure-menu-horizontal">' . '<ul class="pure-menu-list">' . $variables['tree'] . '</ul>' . '</div>';
}

/**
 * Overrides theme_menu_link().
 */

function govi_tema_menu_link(array $variables) {
	$element = $variables['element'];
 	$sub_menu = '';
	
	if ($element['#below']) {	
		if (($element['#original_link']['menu_name'] == 'main-menu') && ($element['#original_link']['menu_name'] == 'menu-menu-secundario')){
      		$sub_menu = drupal_render($element['#below']);
    	}elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] >= 1)) {

    		// construye los submenu y agrega clases de pure
    		 
      		$sub_menu = '<ul class="pure-menu-children">' . drupal_render($element['#below']) . '</ul>';

      		$element['#attributes']['class'][] = 'pure-menu-item pure-menu-has-children pure-menu-allow-hover';
      		$element['#localized_options']['html'] = TRUE;

      		$element['#localized_options']['attributes']['data-target'] = '#';
      		$element['#localized_options']['attributes']['class'][] = 'pure-menu-link disabled';
      		$element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    	}
	}else{
		$element['#attributes']['class'][] = 'pure-menu-item';
		$element['#localized_options']['html'] = TRUE;

		$element['#localized_options']['attributes']['class'][] = 'pure-menu-link disabled';
	}
	if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    	$element['#attributes']['class'][] = 'active';
  	}
  	
	$output = l($element['#title'], $element['#href'], $element['#localized_options']);
	return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu .  "</li>\n";
}

function govi_tema_form_search_block_form_alter(&$form, &$form_state, $form_id) {
    $form['search_block_form']['#attributes']['placeholder'] = t('Buscar');
}

// Implementa manualmente alteraciones a los bloques
function govi_tema_block_view_alter(&$data, $block) {

    // Define titulo para el bloque del fitrl de noticias
    if($block->bid == 'views--exp-pagina_noticias-page') {
        $block->title = 'Filtro de noticias';
    }
}


/**
 * Override formulario exposed noticias
 */
function govi_tema_form_views_exposed_form_alter(&$form, &$form_state, $form_id) {
  if ($form['#id'] == 'views-exposed-form-pagina-noticias-page') {
    $form['title']['#attributes'] = array('placeholder' => array(t('Título')));
    $form['#attributes'] = array('class' => 'pure-form pure-form-stacked');
  }
}

/**
 * Override formulario de solicitud de descarga
 */
function govi_tema_form_alter(&$form, &$form_state, $form_id) {

    if ($form_id == 'webform_client_form_157') {
        $form['#attributes']['class'][] = 'pure-form pure-form-stacked';
        $form['actions']['submit']['#attributes']['class'][] = 'pure-button pure-button-primary';
    } else if($form_id == 'user-login') {
    	$form['#attributes'] = array('class' => 'pure-form pure-form-stacked');
	$form['actions']['submit']['#attributes']['class'][] = 'pure-button';
    }
}

