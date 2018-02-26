// To activate this file uncomment scripts[] = js/app.min.js from the .info file.

(function ($) {

  // Add smooth scrolling to anchor tags
  // Select all links with hashes
  $('a[href*="#"]')
    // Remove links that don't actually link to anything
    .not('[href="#"]')
    .not('[href="#0"]')
    // exclude certian #links that we don't want to smooth scroll
    .not('[href="#tab-video"]')
    .not('[href="#tab-images"]')
    .not('[href="#tab-additional-info"]')
    .not('[href="#tab-technical"]')
    .not('[href="#tab-contact"]')
    .click(function(event) {
      // On-page links
      if ( location.pathname.replace(/^\//, '') === this.pathname.replace(/^\//, '') && location.hostname === this.hostname ) {
        // Figure out element to scroll to
        var target = $(this.hash);
        target = target.length ? target : $('[name=' + this.hash.slice(1) + ']');
        // Does a scroll target exist?
        if (target.length) {
          // Only prevent default if animation is actually gonna happen
          event.preventDefault();
          $('html, body').animate({
            scrollTop: target.offset().top - 150
          }, 700 );
        }
      }
    });


    // We need to check first the page title region exists
    if ($('.l-page-title-outer').length > 0 ) {


      // Fade out the breadcrumb title image as user scrolls
      var fadeStart = 50; // 50px scroll or less will equiv to 1 opacity
      var fadeUntil = 300; // 300px scroll or more will equiv to 0 opacity
      var fading = $('.bg-img');

      // Get the current height of the page title to use later
      var titleHeight = $('.l-page-title__heading .page__title').height();


      // Bind the scroll event
      $(window).bind('scroll', function(){

        // Set up some vars to use
        var offset = $(document).scrollTop();
        var opacity = 0;

        // Increase the opacity of the title BG image whilst scrolling
        if( offset<=fadeStart ) {
            opacity = 1;
        } else if( offset<=fadeUntil ) {
            opacity = 1 - offset/fadeUntil;
        }

        fading.css('opacity',opacity);


        // Stick the title to top of page when user scrolls pass it
        var self = $('.l-page-title-outer');
        var distance = $('.title-placeholder').offset().top;
        if (offset >= distance) {
            self.addClass('stick');
            $('.title-placeholder').css('height', titleHeight);
        } else if ($(document).scrollTop() <= distance) {
            self.removeClass('stick');
            $('.title-placeholder').css('height','auto');
        }

      });
      // end of scroll event

    }



    // Toggle slide if the related new vehicles is click
    $('#related-vehicles-dropdown').click(function(e) {
      e.preventDefault();
      $('#related-vehicles-dropdown-vehicles').slideToggle();
    });



    // #### Google Maps display incorrcetly when in tabbed content
    // #### So force map resize when tab is clicked

    // First check there is UV tabs
    if($('.tabs--node-used-vehicle-tabs').length > 0) {
      // when the branch tab is click fire of the map resize to update
      $('#used-vehicle-map').click(function(e) {
        var key = 'key_2';
        var center = getlocations_map[key].getCenter();
        google.maps.event.trigger(getlocations_map[key], "resize");
        getlocations_map[key].setCenter(center);
      });
    }


})(jQuery);
