/**
 * Renders the pickadate date picker for a menu.
 */
(function ($) {
  Drupal.behaviors.menuDatePicker = {
    attach: function (context, settings) {
      $('.datepicker', context).once('menuDatePicker', function () {
        // Add an extra function to the Drupal ajax object which allows us to trigger
        // an ajax response without an element that triggers it.
        Drupal.ajax.prototype.specifiedResponse = function () {
          var ajax = this;

          // Do not perform another ajax command if one is already in progress.
          if (ajax.ajaxing) {
            return false;
          }

          try {
            $.ajax(ajax.options);
          }
          catch (err) {
            alert('An error occurred while attempting to process ' + ajax.options.url);
            return false;
          }

          return false;
        };

        $(this).pickadate({
          min: false,
          format: 'dddd, mmm dd, yyyy',
          onSet: function (event) {
            if (event.select) {
              $('#location-menu .tab-content').html('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');

              var $input = $('.datepicker').pickadate();
              var marketplace = $input.attr('data-marketplace');
              var picker = $input.pickadate('picker');
              var date = moment(picker.get());

              // Define a custom ajax action not associated with an element.
              var custom_settings = {};
              custom_settings.url = settings.basePath + 'dining-menus/ajax/' + marketplace + '/' + date.format('YYYY-MM-DD');
              custom_settings.event = 'custom';
              custom_settings.keypress = false;
              custom_settings.prevent = false;
              custom_settings.progress = {'type': 'none'};
              Drupal.ajax['dining_menus_ajax'] = new Drupal.ajax(null, $(document.body), custom_settings);
              Drupal.ajax['dining_menus_ajax'].specifiedResponse();
            }
          },
          onClose: function () {
            // Hack to prevent popup from opening after switching windows.
            $('.datepicker').blur();
            $('#dining-hours-dates').focus();
          }
        });
      });

    }
  };
})(jQuery);
