<?php

/**
 * @file
 * Radix theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
hide($content['comments']);
hide($content['links']);
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if (!empty($content['field_person_photo'])): ?>
    <?php print render($content['field_person_photo']); ?>
  <?php endif; ?>

  <div class="panel-heading">
    <?php print render($title_prefix); ?>
    <div class="panel-title">
      <div<?php print $title_attributes; ?>><?php print $title; ?></div>
    </div>
    <?php print render($title_suffix); ?>

    <?php if (!empty($content['field_person_title'])): ?>
      <?php print render($content['field_person_title']); ?>
    <?php endif; ?>

    <?php if (!empty($content['field_person_gender_pronoun'])): ?>
      <?php print render($content['field_person_gender_pronoun']); ?>
    <?php endif; ?>

    <?php if (!empty($content['field_person_languages'])): ?>
      <?php print render($content['field_person_languages']); ?>
    <?php endif; ?>
  </div>

  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($content); ?>
  </div>

</article>
