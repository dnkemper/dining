<?php

/**
 * @file
 * Default theme implementation for marketplace menu.
 *
 * @see dining_menus_marketplace_menu()
 *
 * Available variables:
 *
 * $menu_data
 *   Menu data generated from data.its api.
 */
?>

<div class="<?php print $classes; ?>">
  <h2>Menu</h2>
  <?php print render($datepicker); ?>
  <?php if (!empty($menu_data)): ?>
    <!-- Nav tabs -->
    <ul class="nav nav-tabs" role="tablist">
      <?php foreach ($tabs as $delta => $tab): ?>
        <li role="presentation" class="<?php if ($delta == 0) print 'active '; if (isset($tabs[$delta]['disabled'])) print 'disabled'; ?>">
          <a href="#<?php print $tab['id']; ?>" aria-controls="<?php print $tab['id']; ?>" role="tab" data-toggle="tab">
            <?php print $tab['name']; ?>
          </a>
        </li>
      <?php endforeach; ?>
    </ul>
    <!-- Tab panes -->
    <div class="tab-content">
      <?php foreach ($tabs_content as $delta => $content): ?>
        <div role="tabpanel" class="tab-pane<?php if ($delta == 0) print ' active'; ?>" id="<?php print $content['id']; ?>">
          <?php print render($content['stations']); ?>
        </div>
      <?php endforeach; ?>
    </div>
  <?php else: ?>
    <p class="alert alert-warning">Menu information is not available. Please check the <a href="/locations">Where to Eat</a> section for a list of all our dining locations and their hours of service.</p>
  <?php endif; ?>
</div>


