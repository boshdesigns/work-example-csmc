<?php
/**
 * @file
 * fmgauto_global_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fmgauto_global_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fmgauto_global_layout';
  $context->description = 'Use this context to set global site blocks';
  $context->tag = 'fmgauto';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-block_images-footer' => array(
          'module' => 'views',
          'delta' => 'block_images-footer',
          'region' => 'footer_first',
          'weight' => '1',
          'title' => '',
        ),
        'views-csmc_social_media-footer_social' => array(
          'module' => 'views',
          'delta' => 'csmc_social_media-footer_social',
          'region' => 'footer_third',
          'weight' => '1',
          'title' => '',
        ),
        'menu-menu-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links',
          'region' => 'footer_fourth',
          'weight' => '-10',
          'title' => '',
        ),
        'fmgauto_generic_site_settings-fmg_dealer_footer_message' => array(
          'module' => 'fmgauto_generic_site_settings',
          'delta' => 'fmg_dealer_footer_message',
          'region' => 'footer_fifth',
          'weight' => '-10',
          'title' => '',
        ),
        'views-2937b5cf81bef75a3285c25e300d7f11' => array(
          'module' => 'views',
          'delta' => '2937b5cf81bef75a3285c25e300d7f11',
          'region' => 'footer_sixth',
          'weight' => '-10',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Use this context to set global site blocks');
  t('fmgauto');
  $export['fmgauto_global_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fmgauto_global_sidebar';
  $context->description = 'Use this context to set global sidebar blocks';
  $context->tag = 'fmgauto';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~new-cars/*' => '~new-cars/*',
        '~used-results*' => '~used-results*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-latest_vehicles-latest_vehicles' => array(
          'module' => 'views',
          'delta' => 'latest_vehicles-latest_vehicles',
          'region' => 'sidebar',
          'weight' => '-85',
          'title' => '<none>',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Use this context to set global sidebar blocks');
  t('fmgauto');
  $export['fmgauto_global_sidebar'] = $context;

  return $export;
}
