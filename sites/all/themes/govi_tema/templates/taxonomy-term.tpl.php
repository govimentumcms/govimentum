<?php
global $base_url;
$nids = taxonomy_select_nodes($tid);
?>
<div id="lista-terminos">
    <h2><?php print $name; ?></h2>
    <?php
    foreach($nids as $nid):
    $node = node_load($nid);
    $title = $node->title;

    // Agregar nuevos casos de tipos de contenidos
    // para presentar la lista de terminos con la
    // estructura y estilos de esta plantilla
    switch ($node->type) {
	    case 'marco_legal':
		    $field = $node->field_legal_descripcion['und'][0]['value'];
		    $teaser = substr($field, 0, 150).' ...';
		    $link = $base_url . '/node/' . $nid;
			
		    break;
	    case 'noticia':
		    $field = $node->field_copete['und'][0]['value'];
		    $teaser = substr($field, 0, 150).' ...';
		    $link = $base_url . '/node/' . $nid;
		    break;
	    case 'presupuesto':
		    $field = $node->field_presupuesto_descripcion['und'][0]['value'];
		    $teaser = substr($field, 0, 150).' ...';
		    $link = $base_url . '/node/' . $nid;
		    break;
	    case 'contratacion':
		    $field = $node->field_contratacion_descripcion['und'][0]['value'];
		    $teaser = substr($field, 0, 150).' ...';
		    $link = $base_url . '/node/' . $nid;
		    break;
			break;
		case 'planeacion':
		    $field = $node->field_planeacion_descripcion['und'][0]['value'];
		    $teaser = substr($field, 0, 150).' ...';
		    $link = $base_url . '/node/' . $nid;
			break;
		case 'tramites_servicios':
		    $field = $node->field_descripcion_tram_serv['und'][0]['value'];
		    $teaser = substr($field, 0, 150).' ...';
		    $link = $base_url . '/node/' . $nid;
			break;
		
		case 'enlaces_pie_de_pagina':
		
		    $link = $base_url . '/node/' . $nid;
			break;
    }
    ?>
	<div class="pure-g">
	    <div class="pure-u-1">
		<h3><a href="<?php print $link; ?>" title="<?php print $title; ?>"><?php print $title; ?></a></h3>
	    </div>
	    <div class="pure-u-4-5">
		
	    </div>
	    <div class="pure-u-1-5 centrar">
		<a href="<?php print $link; ?>" class="pure-button" title="Ir a <?php print $title; ?>">Ver</a>
	    </div>
	</div>
    <?php endforeach; ?>
</div>
