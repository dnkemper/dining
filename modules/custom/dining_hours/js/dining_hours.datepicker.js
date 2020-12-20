/**
 * @file
 * Renders the pickadate date picker.
 */

(function ($) {
  Drupal.behaviors.diningHoursDatePicker = {
    attach: function (context, settings) {
      $('#dining-hours-location-form', context).once('diningHoursDatePicker', function() {
        let locationName = settings.diningHours.locationName;

        // ICS files are limited to ~6 months worth of data.
        $('.dining-hours-datepicker-start').pickadate({
          min: -180,
          max: 180,
          format: 'dddd, mmm dd, yyyy',
          onSet: function(event) {
            if (event.select) {
              var min = new Date(event.select);
              var $input = $('.dining-hours-datepicker-end').pickadate();
              var picker = $input.pickadate('picker');

              var endDate = new Date(picker.get());

              if (min > endDate) {
                picker.set('select', min);
                picker.set('min', min);
              }
              else {
                picker.set('min', min);
              }
            }
          },
          onClose: function() {
            // Hack to prevent popup from opening after switching windows.
            $('#edit-start').blur();
            $('#dining-hours-' + locationName + '-dates').focus();
          }
        });

        $('.dining-hours-datepicker-end').pickadate({
          min: (function() {
            var $input = $('.dining-hours-datepicker-start').pickadate();
            var picker = $input.pickadate('picker');

            var startDate = new Date(picker.get());

            return startDate;
          })(),
          max: 180,
          format: 'dddd, mmm dd, yyyy',
          onClose: function() {
            // Hack to prevent popup from opening after switching windows.
            $('#edit-end').blur();
            $('#dining-hours-' + locationName + '-dates').focus();
          }
        });
      });

    }
  };
})(jQuery);
