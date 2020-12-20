(function ($) {
  Drupal.dining = {};

  Drupal.dining.renderMap = function() {
    mapboxgl.accessToken = Drupal.settings.dining.locationMapSettings.token;
    var geojson = Drupal.settings.dining.locationMapSettings.geojson;

    if (typeof geojson != 'undefined') {
      // Center the map on downtown if there are multiple coords.
      if (geojson.features.length > 1) {
        var center = [-91.5393106, 41.6608415];
        var zoom = 14.5;
      }
      else {
        var center = geojson.features[0].geometry.coordinates;
        var zoom = 16;
      }

      var map = new mapboxgl.Map({
        container: 'locationMap',
        style: 'mapbox://styles/itsweb/cjh6lku2g3h1g2rp5gvxygsi4',
        attributionControl: false,
        center: center,
        zoom: zoom,
        scrollZoom: false,
      });

      map.addControl(new mapboxgl.NavigationControl());

      // Add markers to map.
      geojson.features.forEach(function (marker) {
        new mapboxgl.Marker({color: '#ffcd00'})
          .setLngLat(marker.geometry.coordinates)
          .setPopup(new mapboxgl.Popup({offset: 25})
            .setHTML('<h3 class="h6">' + marker.properties.title + '</h3>'))
          .addTo(map);
      });
    }
  };

  Drupal.behaviors.locationMap = {
    attach: function (context, settings) {
      $('#locationMap', context).once('locationMap', function() {
        if ($(this)[0].hasAttribute('role')) {
          $(this).click(function() {
            $(this).empty().attr('style', 'height:400px;').removeAttr('role');

            $.getScript('https://api.mapbox.com/mapbox-gl-js/v1.5.0/mapbox-gl.js')
            .done(function() {
              Drupal.dining.renderMap();
            })
            .fail(function() {
              console.log('Unable to load MapBox JavaScript.');
            });

            // Unbind the click handler so the user can interact with the map.
            $(this).unbind();
          });
        } else {
          Drupal.dining.renderMap();
        }
      });
    }
  };
})(jQuery);
