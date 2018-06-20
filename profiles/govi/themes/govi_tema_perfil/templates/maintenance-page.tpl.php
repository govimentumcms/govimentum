<?php

/**
 * @file
 * Implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in page.tpl.php.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 * @see bartik_process_maintenance_page()
 */
?>
<!DOCTYPE html>
<html>
<head>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="maintenance-page">

    <div class="contenedor">
	<header id="encabezado" class="pure-g">
	    <div class="pure-u-1-2">
		<div class="logo"></div>
	    </div>
	    <div class="pure-u-1-2">
		<div class="info-pagina">
		    <?php if ($title): ?>
			<h2> <?php print $title; ?> </h2>
		    <?php endif; ?>
		</div>
	    </div>
	</header>
	<section id="slide" class="pure-g">
	</section>
	<section id="contenido" class="pure-g">
	    <?php if ($messages): ?>
		<section id="mensajes" class="pure-g">
		    <div class="pure-u-1">
			<?php print $messages; ?>
		    </div>
		</section>
	    <?php endif; ?>
	    <div class="pure-u-1">
		<?php if ($title): ?>
		    <h3> <?php print $title; ?> </h3>
		<?php endif; ?>
	    <?php print $content; ?>
	    </div>
	</section>
    
    <footer id="pie" class="pure-g">
	<div class="pure-u-1">
	   
	</div>
    </footer>
    </div>

</body>
</html>
