<?php //dsm($view->field['field_atencion_direccion']); ?>
<?php $options = (array) $view->display_handler->options; 
//dsm($options);
?>

<fieldset class="form-wrapper">
    <?php if (!empty($title)): ?>
	<legend class="collapse">
	    <span class="fieldset-legend"><?php print $title; ?></span>
	</legend>
    <?php endif; ?>
    <div class="fieldset-wrapper">
	<table class="pure-table">
	    <thead>
		<tr>
		    <th>
			<?php print $view->field['title']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_atencion_direccion']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_atencion_ciudad']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_atencion_departamento']->options['label']; ?>
		    </th>
		    <th>
			<?php print $view->field['field_atencion_horario']->options['label']; ?>
		    </th>
		    <th>
			<?php print $options['fields']['fieldset']['label']; ?>
		    </th>

		</tr>
	    </thead>
	    <tbody>
		<?php foreach ($rows as $id => $row): ?>
		    <?php print $row; ?>
		<?php endforeach; ?>
	    </tbody>
	</table>
    </div>
</fieldset>
