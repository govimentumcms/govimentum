<?php
/**
 * Available variables:
 *
 * - $account : Drupal user objetc.
 */
?>



<?php 
drupal_set_title(st('La instalación de @drupal ha sido completada', array('@drupal' => 'Govimentum')), PASS_THROUGH); 
?>

<?php $url_getting_started = empty($GLOBALS['conf']['clean_url']) ? urlencode('?q=admin/help/getting-started') : 'admin/help/getting-started' ?>

<?php if (isset($messages['error'])): ?>
    <div id ="messages">
	<div class="section clearfix">
	    <p>Revise los mensajes antes de visitar <a href="<?php echo url(''); ?>"> su nuevo sitio</a></p>
	</div>
    </div>
<?php endif; ?>

<p>Felicitaciones, ahora cuenta con el instrumento de gobierno que le permitirá gestionar contenidos digitales su Entidad. Ingrese a su sitio o conozca más sobre el proyecto a través de los siguientes enlaces:</p>

<div class = "pure-g">
    <div class="pure-u-1-5">
	<a class="btn accion1" href="<?php echo url('');?>" target="_blank"></a>
	<div class="accion-titulo">
	    Visitar su nuevo sitio
	</div>
    </div>
    <div class="pure-u-1-5">
	<a class="btn accion2" href="http://ticbogota.gov.co/tutoriales-tic" target="_blank"></a>
	<div class="accion-titulo">
	    Consultar ayuda
	</div>
    </div>
    <div class="pure-u-1-5">
	<a class="btn accion3" href="https://gitlab.com/distribucion_distrital_cms/govimentum_semilla/wikis/home" target="_blank"></a>
	<div class="accion-titulo">
	    Consultar wiki del proyecto
	</div>
    </div>
    <div class="pure-u-1-5">
	<a class="btn accion4" href="https://gitlab.com/groups/distribucion_distrital_cms" target="_blank"></a>
	<div class="accion-titulo">
	    Ir al repositorio en Gitlab
	</div>
    </div>
    <div class="pure-u-1-5">
	<a class="btn accion5" href="mailto:distribucion-cms@alcaldiabogota.gov.co" target="_blank"></a>
	<div class="accion-titulo">
	    Escribir a la lista de correo
	</div>
    </div>
  
</div>
