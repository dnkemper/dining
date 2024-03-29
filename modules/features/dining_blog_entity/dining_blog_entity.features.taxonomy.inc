<?php
/**
 * @file
 * dining_blog_entity.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dining_blog_entity_taxonomy_default_vocabularies() {
  return array(
    'blog_categories' => array(
      'name' => 'Categories',
      'machine_name' => 'blog_categories',
      'description' => 'Blog categories',
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
