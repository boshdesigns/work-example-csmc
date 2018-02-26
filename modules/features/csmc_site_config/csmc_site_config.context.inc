<?php
/**
 * @file
 * csmc_site_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function csmc_site_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fiat_csmc_global_layout';
  $context->description = 'Global Context for Fiat CSMC Theme';
  $context->tag = 'Fiat CSMC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        3 => 3,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-385feb2f374edc2becaa2decd3371d28' => array(
          'module' => 'views',
          'delta' => '385feb2f374edc2becaa2decd3371d28',
          'region' => 'header_contact_details',
          'weight' => '1',
          'title' => '',
        ),
        'bean-block-image-fiat' => array(
          'module' => 'bean',
          'delta' => 'block-image-fiat',
          'region' => 'manufacturer_logo',
          'weight' => '-10',
          'title' => '',
        ),
        'bean-block-image-50-years' => array(
          'module' => 'bean',
          'delta' => 'block-image-50-years',
          'region' => 'manufacturer_logo',
          'weight' => '1',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fiat CSMC');
  t('Global Context for Fiat CSMC Theme');
  $export['fiat_csmc_global_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fiat_csmc_global_sidebar';
  $context->description = 'Use this context to set global sidebar blocks';
  $context->tag = 'Fiat CSMC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        3 => 3,
      ),
    ),
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
          'weight' => '-9',
          'title' => '<none>',
        ),
        'views-8acbe5165fcf37e6984468e889a70530' => array(
          'module' => 'views',
          'delta' => '8acbe5165fcf37e6984468e889a70530',
          'region' => 'sidebar',
          'weight' => '-8',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fiat CSMC');
  t('Use this context to set global sidebar blocks');
  $export['fiat_csmc_global_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ford_csmc_global_layout';
  $context->description = 'Global Context for Ford CSMC Theme';
  $context->tag = 'Ford CSMC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cmsc_telephone_numbers-block_1' => array(
          'module' => 'views',
          'delta' => 'cmsc_telephone_numbers-block_1',
          'region' => 'header_contact_details',
          'weight' => '1',
          'title' => '',
        ),
        'bean-block-image-ford' => array(
          'module' => 'bean',
          'delta' => 'block-image-ford',
          'region' => 'manufacturer_logo',
          'weight' => '-10',
          'title' => '',
        ),
        'bean-block-image-50-years' => array(
          'module' => 'bean',
          'delta' => 'block-image-50-years',
          'region' => 'manufacturer_logo',
          'weight' => '1',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ford CSMC');
  t('Global Context for Ford CSMC Theme');
  $export['ford_csmc_global_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ford_csmc_global_sidebar';
  $context->description = 'Use this context to set global sidebar blocks';
  $context->tag = 'Ford CSMC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
      ),
    ),
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
          'weight' => '-8',
          'title' => '<none>',
        ),
        'views-246657ed6222710e156bd7a379ecc2a5' => array(
          'module' => 'views',
          'delta' => '246657ed6222710e156bd7a379ecc2a5',
          'region' => 'sidebar',
          'weight' => '-7',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ford CSMC');
  t('Use this context to set global sidebar blocks');
  $export['ford_csmc_global_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_csmc_global_layout';
  $context->description = 'Global Context for Group CSMC Theme';
  $context->tag = 'Group CSMC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-csmc_branch_info-header_numbers' => array(
          'module' => 'views',
          'delta' => 'csmc_branch_info-header_numbers',
          'region' => 'header_contact_details',
          'weight' => '-10',
          'title' => '',
        ),
        'bean-block-image-ford' => array(
          'module' => 'bean',
          'delta' => 'block-image-ford',
          'region' => 'manufacturer_logo',
          'weight' => '-10',
          'title' => '',
        ),
        'bean-block-image-fiat' => array(
          'module' => 'bean',
          'delta' => 'block-image-fiat',
          'region' => 'manufacturer_logo',
          'weight' => '-9',
          'title' => '',
        ),
        'bean-block-image-peugeot' => array(
          'module' => 'bean',
          'delta' => 'block-image-peugeot',
          'region' => 'manufacturer_logo',
          'weight' => '-8',
          'title' => '',
        ),
        'bean-block-image-50-years' => array(
          'module' => 'bean',
          'delta' => 'block-image-50-years',
          'region' => 'manufacturer_logo',
          'weight' => '1',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Context for Group CSMC Theme');
  t('Group CSMC');
  $export['group_csmc_global_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_csmc_global_sidebar';
  $context->description = 'Use this context to set global sidebar blocks';
  $context->tag = 'Group CSMC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        1 => 1,
      ),
    ),
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
          'weight' => '-9',
          'title' => '<none>',
        ),
        'views-c333668e26fada1df4d45d163f3f661f' => array(
          'module' => 'views',
          'delta' => 'c333668e26fada1df4d45d163f3f661f',
          'region' => 'sidebar',
          'weight' => '-8',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group CSMC');
  t('Use this context to set global sidebar blocks');
  $export['group_csmc_global_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'peugeot_csmc_global_layout';
  $context->description = 'Global Context for Peugeot CSMC Theme';
  $context->tag = 'Peugeot CSMC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        4 => 4,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cmsc_telephone_numbers-block_2' => array(
          'module' => 'views',
          'delta' => 'cmsc_telephone_numbers-block_2',
          'region' => 'header_contact_details',
          'weight' => '1',
          'title' => '',
        ),
        'bean-block-image-peugeot' => array(
          'module' => 'bean',
          'delta' => 'block-image-peugeot',
          'region' => 'manufacturer_logo',
          'weight' => '-10',
          'title' => '',
        ),
        'bean-block-image-50-years' => array(
          'module' => 'bean',
          'delta' => 'block-image-50-years',
          'region' => 'manufacturer_logo',
          'weight' => '1',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Context for Peugeot CSMC Theme');
  t('Peugeot CSMC');
  $export['peugeot_csmc_global_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'peugeot_csmc_global_sidebar';
  $context->description = 'Use this context to set global sidebar blocks';
  $context->tag = 'Peugeot CSMC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        4 => 4,
      ),
    ),
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
          'weight' => '-9',
          'title' => '<none>',
        ),
        'views-76e1d23f647278b4d90fc9f3812a1191' => array(
          'module' => 'views',
          'delta' => '76e1d23f647278b4d90fc9f3812a1191',
          'region' => 'sidebar',
          'weight' => '-8',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Peugeot CSMC');
  t('Use this context to set global sidebar blocks');
  $export['peugeot_csmc_global_sidebar'] = $context;

  return $export;
}
