<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<h2 class="titulo-nodox"> <?php print $title; ?> </h2>
<div id="nodo-contenido-presupuesto">
    <div class="pure-g">
      	<div class="pure-u-1-1">
	    	<div class="field">
				<div class="field-label">Fecha de expedición:</div>
	    	</div>
		<p><?php print format_date(strtotime($node->field_presupuesto_fecha_exp['und'][0]['value']), 'custom', 'F Y');?></p>
	</div>
      	<div class="pure-u-1-1">
	    <?php print render($content['field_presupuesto_descripcion']); ?>
      	</div>
    </div>
    <div class="pure-g">
      	<div class="pure-u-1-2">
	    	<div class="field">
		    <?php
		    $clasificacion = $content['field_presupuesto_clasificacion'][0];
		    $periodicidad = $content['field_presupuesto_periodicidad'][0];

		    $esEjecucion = preg_match('/Ejecución/', $clasificacion['#title']) ? true : false;
		    $esEstados = preg_match('/Estados/', $clasificacion['#title']) ? true : false;
		    $esGeneral = preg_match('/General/', $clasificacion['#title']) ? true : false;

		    if ($esEjecucion) {
			    $url = '/transparencia/presupuesto/ejecución-presupuestal';
		    } else if($esEstados) {
			    $url = '/transparencia/presupuesto/estados-financieros';
		    } else if($esGeneral) {
			    $url = '/transparencia/presupuesto/general';
		    } else {
			    $url = '/transparencia/presupuesto';
		    }
		    ?>

		    <div class="field-label">Clasificación</div>
		</div>

	    	<?php $base = $GLOBALS['base_url']; ?>
	    
		<p>Este documento pertenece a <a href="<?php print $base.$url; ?>" title="Volver a la clasificación de <?php print $clasificacion['#title']; ?>"><?php print $clasificacion['#title']; ?></a> del presupuesto de la Entidad. y tiene una periodicidad  <a href="<?php print $periodicidad['#href']; ?>" title="Filtrar contenido por periodicidad <?php print $periodicidad['#title']; ?>"><?php print $periodicidad['#title']; ?></a></p>
		</div>
		<div class="pure-u-1-2 lanzadera">
		    <?php if(!empty($content['field_presupuesto_adjunto'])): ?>

			<?php print render($content['field_presupuesto_adjunto']); ?>
		    <?php endif; ?>
    		</div>
    </div>
</div>
