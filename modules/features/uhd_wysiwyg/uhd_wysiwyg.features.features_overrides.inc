<?php
/**
 * @file
 * uhd_wysiwyg.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function uhd_wysiwyg_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|10"] = 'col*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|4"] = 'container*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|6"] = 'layout*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|8"] = 'row*';

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_html.settings|buttons|layoutmanager"] = array(
    'AddLayout' => 1,
  );
  $overrides["wysiwyg.full_html.settings|buttons|layoutmanager"] = array(
    'AddLayout' => 1,
  );

 return $overrides;
}
