<?php
/**
 * @file
 * fmgauto_frontpage_picture.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function fmgauto_frontpage_picture_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Frontpage Right Images';
  $picture_mapping->machine_name = 'frontpage_right_images';
  $picture_mapping->breakpoint_group = 'fmgautobase';
  $picture_mapping->mapping = array(
    'breakpoints.theme.fmgautobase.xxlarge' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.fmgautobase.xlarge' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.fmgautobase.large' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.fmgautobase.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_320_240',
      ),
    ),
    'breakpoints.theme.fmgautobase.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_800_600',
      ),
    ),
    'breakpoints.theme.fmgautobase.xsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_640_480',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_480_360',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_320_240',
      ),
    ),
  );
  $export['frontpage_right_images'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Frontpage Slideshow';
  $picture_mapping->machine_name = 'frontpage_slideshow';
  $picture_mapping->breakpoint_group = 'fmgautobase';
  $picture_mapping->mapping = array(
    'breakpoints.theme.fmgautobase.xxlarge' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.fmgautobase.xlarge' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_homepage_slideshow_1920x550',
      ),
    ),
    'breakpoints.theme.fmgautobase.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_homepage_slideshow_1440x413',
      ),
    ),
    'breakpoints.theme.fmgautobase.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_homepage_slideshow_1280x367',
      ),
    ),
    'breakpoints.theme.fmgautobase.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_homepage_slideshow_800x229',
      ),
    ),
    'breakpoints.theme.fmgautobase.xsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_homepage_slideshow_640x183',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_homepage_slideshow_480x138',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_homepage_slideshow_320x92',
      ),
    ),
  );
  $export['frontpage_slideshow'] = $picture_mapping;

  return $export;
}
