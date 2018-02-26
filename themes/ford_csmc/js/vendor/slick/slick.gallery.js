(function ($) {
  $(function() {
    if ($('.slick.slick--gallery').length > 0) {
      $('.slick.slick--gallery').slick({
        slidesToShow: 1,
        slidesToScroll: 1,
        pauseOnFocus: false,
        pauseOnHover: false,
        arrows: false,
        fade: true,
        autoplay: true,
        autoplaySpeed: 3000
      });
    }
  });
})(jQuery);
