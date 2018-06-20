
<ul class="pure-menu-children scrollable" role="menu">
    <?php $fields = $view->result; ?>
    <li class="pure-menu-item">
	<?php foreach($fields as $field): ?>
	    <?php $titulo = $field->node_title; ?>
	    <?php $src = file_create_url($field->field_field_servicio_banner[0]['raw']['uri']); ?>
	    <?php $enlace = $field->field_field_servicio_enlace[0]['raw']['url']; ?>
	    
	    <div>
		<a href="<?php echo $enlace; ?>" title="<?php echo $titulo; ?>" target="_blank"><img src="<?php echo $src; ?>" alt="<?php echo $titulo; ?>" /></a>
	    </div>
	<?php endforeach; ?>
    </li>
</ul>
