(function($) {
    Drupal.behaviors.slickCounter = {
        attach: function(context, settings) {
            $('.slick-slide-counter', context).once('slickCounter', function () {
                var $status = $('.slick-slide-counter');
                var $slickElement = $('#slick-views-llc-2-slider');

                $slickElement.on('init reInit afterChange', function (event, slick, currentSlide, nextSlide) {
                    //currentSlide is undefined on init -- set it to 0 in this case (currentSlide is 0 based)
                    var i = (currentSlide ? currentSlide : 0) + 1;
                    $status.text(i + ' of ' + slick.slideCount);
                });
            });
        }
    };
})(jQuery);
