<?php
//dpm($fields);

$file_uri = file_create_url($fields['uri']->raw);
$file_id = $fields['fid']->raw;
$anchor_link = $fields['field_enlace_destacado']->content;
$anchor_title = $fields['title']->raw;
$anchor_target = $fields['field_enlace_destacado']->handler->field_info['settings']['attributes']['target'];

// FIXME: El attributo target no retorna según lo esperado
//$target = $fields['field_enlace_destacado']->handler->last_tokens['[field_enlace_destacado-attributes]'];

// Estos estilos son controlados desde la plantilla, para obtener la
// imagen background parametrizada de acuerdo al contenido
// Los demás estilos serán definidos en los assets tema base.
$css = "";
$css .= ".enlace-destacado-bg-" . $file_id . "{";
$css .= "  background-image: url('" . $file_uri ."');";
$css .= "  background-repeat: no-repeat;";
$css .= "}";

drupal_add_css($css, 'inline');

?>

<a class="enlace-destacado enlace-primario enlace-destacado-bg-<?php print $file_id; ?>" href="<?php print $anchor_link; ?>" target ="<?php print $anchor_target; ?>" title="<?php print $anchor_title; ?>">
    <?php print $fields['field_titulo_parte_1']->content; ?>
    <?php print $fields['field_titulo_parte_2']->content; ?>
</a>

