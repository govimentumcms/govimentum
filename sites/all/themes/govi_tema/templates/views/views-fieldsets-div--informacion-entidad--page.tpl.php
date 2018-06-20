<?php 

//dsm(get_defined_vars()); 
//dsm($fieldset_fields);
//dsm($row->$field->field_alias);
?>

<a href="#sede-<?php print $id; ?>" class="colorbox-inline pure-button">Expandir</a>

<div style="display:none">
    <div id="sede-<?php print $id ?>" class="datos-contacto">
	<h2><?php print $fields['title']->raw; ?></h2>
	<hr/>
	<?php foreach ($fieldset_fields as $field) : ?>
	    <?php print $field->label_html; ?>
	    <?php print $field->content; ?>
	    
	<?php endforeach; ?>
    </div>
</div>
