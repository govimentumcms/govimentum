<?php
/**
 * @file
 * govi_marco_legal.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_marco_legal_taxonomy_default_vocabularies() {
  return array(
    'marco_legal_clasificacion' => array(
      'name' => 'Marco Legal Clasificación',
      'machine_name' => 'marco_legal_clasificacion',
      'description' => 'Taxonomia que categoriza la clasificación general del marco legal que afecta a la Entidad',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
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
    'marco_legal_lineamientos' => array(
      'name' => 'Marco Legal Lineamientos',
      'machine_name' => 'marco_legal_lineamientos',
      'description' => 'Clasificación de los lineamientos que afectan a la Entidad',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
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
    'marco_legal_lugares_expedicion' => array(
      'name' => 'Marco Legal lugares expedición',
      'machine_name' => 'marco_legal_lugares_expedicion',
      'description' => 'Lista de terminos para categorizar las entidades o lugares de expedición de normas, lineamientos, planes y políticas',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
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
    'marco_legal_normatividad' => array(
      'name' => 'Marco Legal Normatividad',
      'machine_name' => 'marco_legal_normatividad',
      'description' => 'Lista de terminos para categorizar los tipos de documento del marco legal',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
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
    'marco_legal_planes' => array(
      'name' => 'Marco Legal Planes',
      'machine_name' => 'marco_legal_planes',
      'description' => 'Clasificación de los planes de desarrollo y proyectos de inversion',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
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
