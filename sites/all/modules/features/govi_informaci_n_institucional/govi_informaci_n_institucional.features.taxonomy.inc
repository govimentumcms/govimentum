<?php
/**
 * @file
 * govi_informaci_n_institucional.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_informaci_n_institucional_taxonomy_default_vocabularies() {
  return array(
    'informaci_n_institucional' => array(
      'name' => 'información institucional',
      'machine_name' => 'informaci_n_institucional',
      'description' => 'tipos de contenido publicados',
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
    'palabras_claves' => array(
      'name' => 'Palabras claves',
      'machine_name' => 'palabras_claves',
      'description' => 'Palabras claves relacionadas con el contenido',
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
