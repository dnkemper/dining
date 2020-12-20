/**
 * @file
 * Bootstrap Accordion behaviors.
 */

(function ($) {
  // Change indicator behaviors for bootstrap panel accordions.
  Drupal.behaviors.modalPosition = {
    attach: function (context, settings) {
      $('.modal', context).once('modal-attach', function () {
        $('.modal').appendTo("body");
      });
    }
  };
})(jQuery);
