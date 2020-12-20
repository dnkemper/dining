(function($) {
  Drupal.behaviors.selectMultiple = {
    attach: function(context, settings) {
      $('select', context).once('selectMultiple', function() {
        $("select[multiple='multiple']").chosen({
          placeholder_text_multiple: "- Select -",
          width: '100%',
        });
      });
    }
  };
})(jQuery);
