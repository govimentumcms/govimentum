<?php
/**
 * @file
 * govi_presupuesto.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function govi_presupuesto_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Presupuesto general',
    'description' => 'termino Presupuesto general de la categoria Presupuesto Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5eb27c34-d722-4a9b-94ad-90c4f8c2c16f',
    'vocabulary_machine_name' => 'presupuesto_clasificacion',
  );
  $terms[] = array(
    'name' => 'Estados financieros',
    'description' => 'termino Estados financieros de la categoria Presupuesto Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '80774c5f-cce9-468c-b96e-05c6aa5e8104',
    'vocabulary_machine_name' => 'presupuesto_clasificacion',
  );
  $terms[] = array(
    'name' => 'Ejecución presupuestal',
    'description' => 'termino Ejecución presupuestal de la categoria Presupuesto Clasificación',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8e8bc56b-008e-4bf6-8725-4fdc35ff8af1',
    'vocabulary_machine_name' => 'presupuesto_clasificacion',
  );
  return $terms;
}
