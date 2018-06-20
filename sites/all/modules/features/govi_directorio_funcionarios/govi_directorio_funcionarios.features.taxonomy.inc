<?php
/**
 * @file
 * govi_directorio_funcionarios.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_directorio_funcionarios_taxonomy_default_vocabularies() {
  return array(
    'directorio_de_funcionarios_dependencia_oficina' => array(
      'name' => 'Directorio de funcionarios dependencia oficina',
      'machine_name' => 'directorio_de_funcionarios_dependencia_oficina',
      'description' => '',
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
