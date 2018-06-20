<?php
/* 
 * Plantilla que implementa el script de la barra 
 * institucional y los estilos base 
 * 
 * Variables disponibles:
 *
 * $variables
*/

$css = "";
$css .= ".block-barra-institucional {";
$css .= "  background: #FFFFFF;";
$css .= "  bottom: 0;";
$css .= "  left: 0;";
$css .= "  position: fixed;";
$css .= "  width: 100%;";
$css .= "}";

drupal_add_css($css, 'inline');
?>
<div id="barra-institucional" class="activated">
    <?php if (!$variables['is_enabled']): ?>
	<p class="mensaje">La barra institucional aun no ha sido activada. Para activar ingrese a la  <a href="/admin/config/features/institutional_bar">configuración de la distribución</a> y realice el proceso de solicitud</p>
    <?php else: ?>

	<script>document.write(unescape"%3Cscript%20language%3D%22javascript%22%20src%3D%22http%3A%2F%2Fwww.bogota.gov.co%2Fappbar%2Fbarra.js%22%3E%3C%2Fscript%3E");</script>

    <?php endif; ?>
</div>

