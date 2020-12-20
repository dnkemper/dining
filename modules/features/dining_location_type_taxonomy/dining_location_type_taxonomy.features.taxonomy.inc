<?php
/**
 * @file
 * dining_location_type_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dining_location_type_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'location_type' => array(
      'name' => 'Location type',
      'machine_name' => 'location_type',
      'description' => 'Different kinds of dining locations.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
