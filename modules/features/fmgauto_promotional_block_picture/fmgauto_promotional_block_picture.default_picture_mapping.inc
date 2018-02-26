<?php
/**
 * @file
 * fmgauto_promotional_block_picture.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function fmgauto_promotional_block_picture_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Promo Blocks (Custom)';
  $picture_mapping->machine_name = 'promo_blocks_custom';
  $picture_mapping->breakpoint_group = 'fmgautobase';
  $picture_mapping->mapping = array(
    'breakpoints.theme.fmgautobase.xxlarge (1921px)' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.fmgautobase.xlarge (1441px)' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.fmgautobase.large (1025px)' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.fmgautobase.medium (769px)' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_320x200',
      ),
    ),
    'breakpoints.theme.fmgautobase.small (641px)' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_800x500',
      ),
    ),
    'breakpoints.theme.fmgautobase.xsmall (481px)' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_640x400',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxsmall (321px)' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_480x300',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxxsmall (0px)' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_320x200',
      ),
    ),
  );
  $export['promo_blocks_custom'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Promo Blocks (Home)';
  $picture_mapping->machine_name = 'promo_blocks_home';
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
        'image_style' => 'csmc_promo_633x455',
      ),
    ),
    'breakpoints.theme.fmgautobase.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_800x500',
      ),
    ),
    'breakpoints.theme.fmgautobase.xsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_640x400',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_480x300',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_320x200',
      ),
    ),
  );
  $export['promo_blocks_home'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Promo Blocks (Sidebar)';
  $picture_mapping->machine_name = 'promo_blocks_sidebar';
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
        'image_style' => 'csmc_sidebar_promo_286x215',
      ),
    ),
    'breakpoints.theme.fmgautobase.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_800x500',
      ),
    ),
    'breakpoints.theme.fmgautobase.xsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_640x400',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_480x300',
      ),
    ),
    'breakpoints.theme.fmgautobase.xxxsmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'fmg_promo_block_320x200',
      ),
    ),
  );
  $export['promo_blocks_sidebar'] = $picture_mapping;

  return $export;
}
