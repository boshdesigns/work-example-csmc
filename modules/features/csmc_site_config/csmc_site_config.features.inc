<?php
/**
 * @file
 * csmc_site_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function csmc_site_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function csmc_site_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function csmc_site_config_image_default_styles() {
  $styles = array();

  // Exported image style: csmc_homepage_slideshow_1024x293.
  $styles['csmc_homepage_slideshow_1024x293'] = array(
    'label' => 'CSMC Homepage Slideshow 1024x293',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1024,
          'height' => 293,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_homepage_slideshow_1280x367.
  $styles['csmc_homepage_slideshow_1280x367'] = array(
    'label' => 'CSMC Homepage Slideshow 1280x367',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 367,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_homepage_slideshow_1440x413.
  $styles['csmc_homepage_slideshow_1440x413'] = array(
    'label' => 'CSMC Homepage Slideshow 1440x413',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1440,
          'height' => 413,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_homepage_slideshow_1920x550.
  $styles['csmc_homepage_slideshow_1920x550'] = array(
    'label' => 'CSMC Homepage Slideshow 1920x550',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 550,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_homepage_slideshow_320x92.
  $styles['csmc_homepage_slideshow_320x92'] = array(
    'label' => 'CSMC Homepage Slideshow 320x92',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 92,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_homepage_slideshow_480x138.
  $styles['csmc_homepage_slideshow_480x138'] = array(
    'label' => 'CSMC Homepage Slideshow 480x138',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 138,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_homepage_slideshow_640x183.
  $styles['csmc_homepage_slideshow_640x183'] = array(
    'label' => 'CSMC Homepage Slideshow 640x183',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 183,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_homepage_slideshow_800x229.
  $styles['csmc_homepage_slideshow_800x229'] = array(
    'label' => 'CSMC Homepage Slideshow 800x229',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 229,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_page_slideshow_1024x530.
  $styles['csmc_page_slideshow_1024x530'] = array(
    'label' => 'CSMC Page Slideshow 1024x530',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1024,
          'height' => 530,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_page_slideshow_320x166.
  $styles['csmc_page_slideshow_320x166'] = array(
    'label' => 'CSMC Page Slideshow 320x166',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 166,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_page_slideshow_480x248.
  $styles['csmc_page_slideshow_480x248'] = array(
    'label' => 'CSMC Page Slideshow 480x248',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 248,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_page_slideshow_640x331.
  $styles['csmc_page_slideshow_640x331'] = array(
    'label' => 'CSMC Page Slideshow 640x331',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 331,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_page_slideshow_800x414.
  $styles['csmc_page_slideshow_800x414'] = array(
    'label' => 'CSMC Page Slideshow 800x414',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 414,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: csmc_page_slideshow_870x448.
  $styles['csmc_page_slideshow_870x448'] = array(
    'label' => 'CSMC Page Slideshow 870x448',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 870,
          'height' => 448,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: csmc_promo_633x455.
  $styles['csmc_promo_633x455'] = array(
    'label' => 'CSMC Promo 633x455',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 639,
          'height' => 455,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: csmc_sidebar_promo_286x215.
  $styles['csmc_sidebar_promo_286x215'] = array(
    'label' => 'CSMC Sidebar Promo 286x215',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 286,
          'height' => 215,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
