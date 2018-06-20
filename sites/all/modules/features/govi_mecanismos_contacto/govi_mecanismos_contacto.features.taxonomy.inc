<?php
/**
 * @file
 * govi_mecanismos_contacto.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_mecanismos_contacto_taxonomy_default_vocabularies() {
  return array(
    'pie_de_pagina_institucional' => array(
      'name' => 'Pie de pagina institucional',
      'machine_name' => 'pie_de_pagina_institucional',
      'description' => 'Taxonomía que categoriza los enlaces y elementos del pie de pagina',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
