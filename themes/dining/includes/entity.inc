<?php
/**
 * @file
 */

/**
 * Implements template_preprocess_entity().
 */
function dining_preprocess_entity(&$vars) {
  if ($vars['entity_type'] == 'paragraphs_item') {
    $paragraph_item = $vars['paragraphs_item'];

    switch ($vars['elements']['#bundle']) {
      case 'snp_card':
        $vars['heading_classes_array'][] = 'yellow-flair';
        break;

    }
  }
}

