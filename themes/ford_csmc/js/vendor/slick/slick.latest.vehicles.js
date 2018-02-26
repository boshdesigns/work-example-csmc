(function ($) {
    Drupal.behaviors.ajaxblocks = {
      attach: function (context, settings) {
        $('.slick.slick--latest-vehicles').slick({
            slidesToShow: 1,
            slidesToScroll: 1,
            arrows: true,
            prevArrow: "<span class='slick-prev main'>&lt;</span>",
            nextArrow: "<span class='slick-next main'>&gt;</span>",
            autoplay: true,
            autoplaySpeed: 3000,
            pauseOnFocus: false,
            pauseOnHover: false
        });
      }
    };
})(jQuery);
