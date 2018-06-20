<?php

/**
 * @file
 * This template is used to print a single grouping in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $grouping: The grouping instruction.
 * - $grouping_level: Integer indicating the hierarchical level of the grouping.
 * - $rows: The rows contained in this grouping.
 * - $title: The title of this grouping.
 * - $content: The processed content output that will normally be used.
 */
?>
<?php //dpm($view->field); ?>
<?php //dpm($rows); ?>

<fieldset class="collapsible form-wrapper collapsed">
    <legend class="collapse">
	<?php if(!empty($title)): ?>
	    <span class="fieldset-legend"><a href="#"><?php print $title; ?></a></span>
	<?php endif; ?>
    </legend>
    <div class="fieldset-wrapper">

	<?php if (!empty($rows['Jefe'])): ?>
	    <?php $jefe = array_values($rows['Jefe']['rows'])[0] ?>
	    <div id="jefe-area" class="pure-g">
	    <div class="pure-u-1-1">
	    	<div class="cargo"> <?php print $jefe->field_field_cargo[0]['raw']['value']; ?> </div>
	    </div>
		<div class="pure-u-1-5 imagen-jefe">
		    <img src="<?php print file_create_url($jefe->field_field_foto_jefe_de_area[0]['raw']['uri']); ?>"
			    alt="<?php print $jefe->field_field_foto_jefe_de_area[0]['raw']['alt']; ?>"
			    title="<?php print $jefe->field_field_foto_jefe_de_area[0]['raw']['title']; ?>"/>
		</div>
		<div class="pure-u-4-5">
		    <div class="pure-g">
			<div class="pure-u-2-5 label">
			    <?php print $view->field['title']->options['label']; ?>
			    <?php print ":"; ?>
			</div>
			<div class="pure-u-3-5 valor">
				<?php print '&nbsp;'; ?>
			    <?php print $jefe->node_title; ?>
			</div>
		    </div>
		    <div class="pure-g">
			<div class="pure-u-2-5 label">
			    <?php print $view->field['field_correo_institucional']->options['label']; ?>
			    <?php print ":"; ?>
			</div>
			<div class="pure-u-3-5 valor">
			    <?php print '&nbsp;'; ?>
			    <?php print '<a href="mailto:'.$jefe->field_field_correo_institucional[0]['raw']['value'].'">'.$jefe->field_field_correo_institucional[0]['raw']['value'].'</a>'; ?>
			</div>
		    </div>
		    <div class="pure-g">
			<div class="pure-u-2-5 label">
			    <?php print $view->field['field_telefono_extension']->options['label']; ?>
				<?php print ":"; ?>
			</div>
			<div class="pure-u-3-5 valor">
				<?php print '&nbsp;'; ?>
			    <?php print $jefe->field_field_telefono_extension[0]['raw']['value']; ?>
			</div>
		    </div>
		    <div class="pure-g">
			<div class="pure-u-2-5 label">
			    <?php print $view->field['field_sede']->options['label']; ?>
				<?php print ":"; ?>
			</div>
			<div class="pure-u-3-5 valor">
				<?php print '&nbsp;'; ?>
			    <?php print $jefe->field_field_sede[0]['raw']['value']; ?>
			</div>
		    </div>
		    <div class="pure-g">
			<div class="pure-u-2-5 label">
			    <?php print $view->field['field_enlace_sigep']->options['label']; ?>
				<?php print ":"; ?>
			</div>
			<div class="pure-u-3-5 valor">
			    <?php if (!empty($jefe->field_field_enlace_sigep)) : ?>
			    <?php print '&nbsp;'; ?>
				<a href="<?php print $jefe->field_field_enlace_sigep[0]['raw']['url']; ?>" target="_blank"> Ver perfil en SIGEP</a>
			    <?php else : ?>
			    <?php print '&nbsp;'; ?>
				No hay referencia en el 
				<a href="http://www.sigep.gov.co" target="_blank">SIGEP</a>
			    <?php endif; ?>
			</div>
		    </div>
		</div>
	    </div>
	<?php endif; ?>
	<?php if (!empty($rows['Funcionario'])): ?>
	    <table class="pure-table pure-table-striped">
		<thead>
		    <tr>
			<th>
			    <?php print $view->field['title']->options['label']; ?>
			</th>
			<th>
			    <?php print $view->field['field_cargo']->options['label']; ?>
			</th>
			<th>
			    <?php print $view->field['field_correo_institucional']->options['label']; ?>
			</th>
			<th>
			    <?php print $view->field['field_sede']->options['label']; ?>
			</th>
			<th>
			    <?php print $view->field['field_telefono_extension']->options['label']; ?>
			</th>
			<th>
			    <?php print $view->field['field_enlace_sigep']->options['label']; ?>
			</th>
		    </tr>
		</thead>
		<tbody>
		    <?php foreach($rows['Funcionario']['rows'] as $funcionario): ?>
		    <tr>
			<td>
			    <?php print $funcionario->node_title; ?>
			</td>
			<td>
			    <?php print $funcionario->field_field_cargo[0]['raw']['value']; ?>
			</td>
			<td>
			    <?php print $funcionario->field_field_correo_institucional[0]['raw']['value']; ?>
			</td>
			<td>
			    <?php print $funcionario->field_field_sede[0]['raw']['value']; ?>
			</td>
			<td>
			    <?php print $funcionario->field_field_telefono_extension[0]['raw']['value']; ?>
			</td>
			<td>
			    <?php if (!empty($funcionario->field_field_enlace_sigep)) : ?>
			    <a href="<?php print $funcionario->field_field_enlace_sigep[0]['raw']['url']; ?>" target="_blank">Ver perfil en SIGEP</a>
			    <?php else : ?>
				No hay referencia en el 
				<a href="http://www.sigep.gov.co" target="_blank">SIGEP</a>
			    <?php endif; ?>
			</td>
		    </tr>
		    <?php endforeach; ?>
		</tbody>
	    </table>
	<?php endif; ?>
    </div>
</fieldset>
