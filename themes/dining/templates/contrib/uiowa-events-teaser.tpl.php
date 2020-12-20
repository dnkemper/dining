<?php

/**
 * @file
 * Default theme implementation for a single event teaser.
 *
 * @see template_preprocess_uiowa_events_teaser()
 *
 * Available variables:
 *
 * $event
 *   An array of event data from uiowa_events_load().
 * $external_link
 *   TRUE if linking to events.uiowa.edu, FALSE if URL is to internal page.
 */
?>
<div class="uiowa-event">
  <div><p class="date-string"><?php print render($variables['event']['date_string']); ?></p></div>
  <div><p><?php print $variables['event']['title']; ?></p></div>
  <div><a class="btn btn-primary btn-xs" href="<?php print $variables['event']['url']; ?>">View more</a></div>
</div>
