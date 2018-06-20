<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>

<?php //dsm('views-view'); ?>
<?php //dsm($view->display_handler); ?>

<div class="pure-menu pure-menu-horizontal">
    <ul class="pure-menu-list">
	<li class="pure-menu-item pure-menu-has-children">
	    <a href="#" id="menu-servicio-ciudadano" class="pure-menu-link" title="Haga click para mostrar los servicios y portales de servicio a la ciudadanía">Más servicios</a>
	    <?php if ($rows): ?>
		    <?php print $rows; ?>
	    <?php endif; ?>
	</li>
    </ul>
</div>
