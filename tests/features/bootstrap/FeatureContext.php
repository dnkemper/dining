<?php

use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;
use Behat\Behat\Tester\Exception\PendingException;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext {

  /**
   * Initializes context.
   *
   * Every scenario gets its own context instance.
   * You can also pass arbitrary arguments to the
   * context constructor through behat.yml.
   */
  public function __construct() {
  }

  /**
   * @Given Cached burge data
   */
  public function cachedBurgeData() {
    $base = variable_get('dining_menus_endpoint', 'https://data.its.uiowa.edu/dining/menus');

    $params = array(
      'date' => date('Y-m-d'),
    );

    $endpoint = "{$base}/burge" . '?' . http_build_query($params);
    $cid = 'dining_menus_' . base64_encode($endpoint);

    $data = json_decode(file_get_contents(__DIR__ . '/../../burge.json'), TRUE);
    cache_set($cid, $data, 'cache', time() + 1200);
  }

  /**
   * @Given Burge location exists
   */
  public function burgeLocationExists() {
    $node = new StdClass();
    $node->nid = 4;
    $node->is_new = TRUE;
    $node->type = 'location';
    $node->title = 'Burge Market Place';
    node_object_prepare($node);

    $node->status = 1;
    $node->language = LANGUAGE_NONE;
    $node->field_location_hours_key[$node->language][0]['value'] = 'foo';
    $node->field_location_hours_key[$node->language][0]['safe_value'] = 'foo';

    $node = node_submit($node);
    node_save($node);
  }

  /**
   * @AfterSuite
   */
  public static function tearDown() {
    node_delete(4);

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'taxonomy_term')
      ->entityCondition('bundle', 'allergy_and_nutrition');

    $result = $query->execute();

    if (isset($result['taxonomy_term'])) {
      $keys = array_keys($result['taxonomy_term']);
      foreach ($keys as $tid) {
        taxonomy_term_delete($tid);
      }
    }
  }

}
