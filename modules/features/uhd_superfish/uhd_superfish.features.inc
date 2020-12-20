<?php
/**
 * @file
 * uhd_superfish.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uhd_superfish_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
