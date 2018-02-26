DOCUMENTATION FOR CSMC SITE CONFIG FEATURE

// Disclaimer footer block
// This has been set up in the site config feature because it will be used across all domains

csmc_site_config_block_info()
Set up a block to use for the footer disclaimer text
We want to cache the contents, as this won't change regularly, so caching for this block is set to DRUPAL_CACHE_GLOBAL


csmc_site_config_block_view()
Add the content to the disclaimer block


csmc_site_config_preprocess_page()
Add the disclaimer block to the footer_seventh region in the footer



// CSMC Sidebar CTA's
// This has been set up in the site config feature because it will be used across all domains

csmc_site_config_block_info()
Set up a list for the CTA's
We want to cache the contents, as this won't change regularly, so caching for this block is set to DRUPAL_CACHE_GLOBAL


csmc_site_config_block_view()
Add the content for the CTA's


csmc_site_config_preprocess_page()
Add CTA's to the header region plus add the css to style the CTA's




// CSMC Search Page Text
// Unset search page text to place in new region

csmc_site_config_preprocess_page()
Place the search page text in a new region

csmc_site_config_views_pre_render()
Unset the search page text



// CSMC Move the finance adjustment table
csmc_site_config_context_load_alter()
Place finance adjustment table in new region
