/**
 * @file
 * Handles button active state functionality.
 */

(function ($) {
  Drupal.behaviors.diningHoursActiveState = {
    attach: function (context, settings) {
      $('#dining-hours-location-form', context).once('diningHoursActiveState', function() {
        // Setting disabled property through FAPI affects form validation.
        $('#edit-today').prop('disabled', true);
        $('.dining-hours-button').click(function() {
          var button = $(this);
          $('.dining-hours-spinner').addClass('fa-spin');
          // Drupal ajax library explicity sets disabled to false on triggering element.
          $(document).ajaxComplete(function(event, xhr, settings) {
            $('.dining-hours-button').removeClass('active').prop('disabled', false);
            button.addClass('active').prop('disabled', true);
            $('.dining-hours-spinner').removeClass('fa-spin');
          });
        });
      });
    }
  };
})(jQuery);
