/**
 * @file
 * Calculates whether a location is open or closed.
 *
 * The 'until ...' functionality depends on the hours being sorted from
 * earliest to latest. The data retrieval function sorts this for us.
 *
 * @see: _dining_hours_location_data().
 */

(function ($) {
  Drupal.behaviors.diningHoursStatusIndicator = {
    attach: function (context, settings) {
      $('.open-status').each(function (index, element) {
        let locationName = $(this).attr('id');
        let hours = settings.diningHours[locationName].todaysHours;
        let status = 'Closed';
        let until = '&nbsp;';
        let categories = '';

        if (settings.diningHours[locationName].nextOpenDay) {
          until = 'until ' + settings.diningHours[locationName].nextOpenDay;
        }

        if (hours) {
          let now = moment();

          for (let i = 0; i < hours.length; i++) {
            let start_time = moment.unix(hours[i].start_time);
            let end_time = moment.unix(hours[i].end_time);

            // Open/closed logic.
            if (now.isBetween(start_time, end_time, undefined, '[)')) {
              status = 'Open';
              until = 'until ' + end_time.format('h:mma');

              hours[i].categories.forEach((element) => {
                let category = Drupal.t(element);
                categories += '<span class="label label-default">' + category + '</span>';
              });

              break;
            }
            else {
              status = 'Closed';

              if (now.isBefore(start_time)) {
                until = 'until ' + start_time.format('h:mma');
                break;
              }
            }
          }
        }

        $('.label', this).html(status);
        $('.label', this).addClass(status.toLowerCase());
        $('.data-point', this).html(until);

        if (categories) {
          $(this).append(categories);
        }
      });
    }
  };
})(jQuery);
