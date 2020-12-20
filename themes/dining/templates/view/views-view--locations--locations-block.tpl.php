<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="<?php print $header_classes; ?>">
      <div class="container">
        <?php print $header; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php print render($map); ?>

  <?php if ($attachment_before): ?>
    <div class="<?php print $attachment_before_classes; ?>">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="<?php print $filter_classes; ?>">
      <div class="container">
        <?php print $exposed; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
      <div class="<?php print $content_classes; ?>">
        <div class="container">
          <?php print $rows; ?>
        </div>
      </div>
    <?php elseif ($empty): ?>
      <div class="<?php print $empty_classes; ?>">
        <div class="container">
          <?php print $empty; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <div class="container">
      <?php print $pager; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="<?php print $attachment_after_classes; ?>">
      <div class="container">
        <?php print $attachment_after; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <div class="container">
      <?php print $more; ?>
    </div>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="<?php print $footer_classes; ?>">
      <div class="container">
        <?php print $footer; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="container">
      <div class="<?php print $feed_icon_classes; ?>">
        <?php print $feed_icon; ?>
      </div>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
