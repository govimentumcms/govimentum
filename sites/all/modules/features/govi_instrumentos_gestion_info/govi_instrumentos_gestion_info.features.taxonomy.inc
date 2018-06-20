<?php
/**
 * @file
 * govi_instrumentos_gestion_info.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_instrumentos_gestion_info_taxonomy_default_vocabularies() {
  return array(
    'instrumentos_clasificacion' => array(
      'name' => 'Instrumentos Clasificación',
      'machine_name' => 'instrumentos_clasificacion',
      'description' => 'Clasificación de los Instrumentos de gestión de información pública de la entidad',
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
    'instrumentos_tipo_documento' => array(
      'name' => 'Instrumentos tipo de documento',
      'machine_name' => 'instrumentos_tipo_documento',
      'description' => 'Tipo de documento de los  Instrumentos de gestión de información pública de la entidad',
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
