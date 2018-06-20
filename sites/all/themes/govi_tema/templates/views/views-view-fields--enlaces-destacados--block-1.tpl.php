<?php
//dpm($fields);

$anchor_link = $fields['field_enlace_destacado']->content;
$anchor_title = $fields['title']->raw;
$anchor_target = $fields['field_enlace_destacado']->handler->field_info['settings']['attributes']['target'];
$color = $fields['field_enlace_color']->content;
$nid = $fields['nid']->raw;

$css = "";
$css .= ".enlace-item-" . $nid . "{";
$css .= "  border-left: 3px solid " . $color . ";";
$css .= "}";

drupal_add_css($css, 'inline');

?>

<a class="enlace-destacado enlace-secundario enlace-item-<?php print $nid ?>" href="<?php print $anchor_link; ?>" target ="<?php print $anchor_target; ?>" title="<?php print $anchor_title; ?>">
    <?php print $anchor_title; ?>
</a>

