<?php
/**
 * @file
 * fmgauto_page_picture.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function fmgauto_page_picture_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Page Right Images';
  $picture_mapping->machine_name = 'page_right_images';
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
  $export['page_right_images'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Page Slideshow';
  $picture_mapping->machine_name = 'page_slideshow';
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
        'image_style' => 'csmc_page_slideshow_1024x530',
      ),
    ),
    'breakpoints.theme.fmgautobase.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_page_slideshow_800x414',
      ),
    ),
    'breakpoints.theme.fmgautobase.xsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_page_slideshow_640x331',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_page_slideshow_480x248',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'csmc_page_slideshow_320x166',
      ),
    ),
  );
  $export['page_slideshow'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Page Teaser Images';
  $picture_mapping->machine_name = 'page_teaser_images';
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
  $export['page_teaser_images'] = $picture_mapping;

  return $export;
}
