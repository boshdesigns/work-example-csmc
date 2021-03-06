<?php
/**
 * @file
 * csmc_site_config.domains.inc
 */

/**
 * Implements hook_domain_conf_default_variables().
 */
function csmc_site_config_domain_conf_default_variables() {
  $domain_variables = array();
  $domain_variables['csmc_local'] = array(
    'site_name' => 'Chipping Sodbury Motor Company',
    'site_mail' => 'dev@spidersnet.co.uk',
    'site_slogan' => '',
    'site_frontpage' => 'node/2',
    'anonymous' => 'Visitor',
    'admin_theme' => 'infinity',
    'date_default_timezone' => 'UTC',
    'cache' => 0,
    'cache_lifetime' => 0,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'Chipping Sodbury Motor Company is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'menu_main_links_source' => 'main-menu',
    'menu_secondary_links_source' => 0,
    'menu_options_branch' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_branch' => 'main-menu:0',
    'menu_options_department' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_department' => 'main-menu:0',
    'menu_options_frontpage' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_frontpage' => 'main-menu:0',
    'menu_options_new_vehicle' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_new_vehicle' => 'main-menu:0',
    'menu_options_new_vehicle_list_content' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_new_vehicle_list_content' => 'main-menu:0',
    'menu_options_page' => array(
      'menu-footer-links' => 'menu-footer-links',
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_page' => 'main-menu:0',
    'menu_options_service' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_service' => 'main-menu:0',
    'menu_options_slideshow_images' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slideshow_images' => 'main-menu:0',
    'menu_options_used_vehicle' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_used_vehicle' => 'main-menu:0',
    'menu_options_used_vehicle_list_content' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_used_vehicle_list_content' => 'main-menu:0',
    'domain_branches_contact' => array(
      9 => 9,
    ),
    'domain_branches_vehicles' => array(),
    'domain_used_manufacturers' => array(),
    'domain_town_token_override' => '',
    'domain_county_token_override' => '',
  );
  $domain_variables['fiat_csmc'] = array(
    'site_name' => 'Chipping Sodbury Motor Company',
    'site_mail' => 'dev@spidersnet.co.uk',
    'site_slogan' => '',
    'site_frontpage' => 'node/89',
    'anonymous' => 'Visitor',
    'admin_theme' => 'infinity',
    'date_default_timezone' => 'UTC',
    'cache' => 1,
    'cache_lifetime' => 0,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'Chipping Sodbury Motor Company is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'menu_main_links_source' => 'menu-fiat-main-menu',
    'menu_secondary_links_source' => 0,
    'menu_options_branch' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_branch' => 'main-menu:0',
    'menu_options_department' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_department' => 'main-menu:0',
    'menu_options_frontpage' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_frontpage' => 'main-menu:0',
    'menu_options_new_vehicle' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_new_vehicle' => 'main-menu:0',
    'menu_options_new_vehicle_list_content' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_new_vehicle_list_content' => 'main-menu:0',
    'menu_options_page' => array(
      'menu-fiat-main-menu' => 'menu-fiat-main-menu',
      'menu-footer-links' => 'menu-footer-links',
      'devel' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_page' => 'menu-fiat-main-menu:0',
    'menu_options_slideshow_images' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slideshow_images' => 'main-menu:0',
    'menu_options_used_vehicle' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_used_vehicle' => 'main-menu:0',
    'menu_options_used_vehicle_list_content' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_used_vehicle_list_content' => 'main-menu:0',
    'domain_branches_contact' => array(
      11 => 11,
    ),
    'domain_branches_vehicles' => array(),
    'domain_used_manufacturers' => array(
      127 => 127,
    ),
    'domain_town_token_override' => '',
    'domain_county_token_override' => '',
    'menu_options_service' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_service' => 'main-menu:0',
  );
  $domain_variables['ford_csmc'] = array(
    'site_name' => 'Chipping Sodbury Motor Company',
    'site_mail' => 'dev@spidersnet.co.uk',
    'site_slogan' => '',
    'site_frontpage' => 'node/87',
    'anonymous' => 'Visitor',
    'admin_theme' => 'infinity',
    'date_default_timezone' => 'UTC',
    'cache' => 1,
    'cache_lifetime' => 0,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'Chipping Sodbury Motor Company is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'menu_main_links_source' => 'menu-ford-main-menu',
    'menu_secondary_links_source' => 'menu-ford-main-menu',
    'menu_options_branch' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_branch' => 'main-menu:0',
    'menu_options_department' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_department' => 'main-menu:0',
    'menu_options_frontpage' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_frontpage' => 'main-menu:0',
    'menu_options_new_vehicle' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_new_vehicle' => 'main-menu:0',
    'menu_options_new_vehicle_list_content' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_new_vehicle_list_content' => 'main-menu:0',
    'menu_options_page' => array(
      'menu-footer-links' => 'menu-footer-links',
      'menu-ford-main-menu' => 'menu-ford-main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_page' => 'menu-ford-main-menu:0',
    'menu_options_slideshow_images' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slideshow_images' => 'main-menu:0',
    'menu_options_used_vehicle' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_used_vehicle' => 'main-menu:0',
    'menu_options_used_vehicle_list_content' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_used_vehicle_list_content' => 'main-menu:0',
    'domain_branches_contact' => array(
      9 => 9,
    ),
    'domain_branches_vehicles' => array(),
    'domain_used_manufacturers' => array(
      50 => 50,
    ),
    'domain_town_token_override' => '',
    'domain_county_token_override' => '',
    'menu_options_service' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_service' => 'main-menu:0',
  );
  $domain_variables['peugeot_csmc'] = array(
    'site_name' => 'Chipping Sodbury Motor Company',
    'site_mail' => 'dev@spidersnet.co.uk',
    'site_slogan' => '',
    'site_frontpage' => 'node/91',
    'anonymous' => 'Visitor',
    'admin_theme' => 'infinity',
    'date_default_timezone' => 'UTC',
    'cache' => 1,
    'cache_lifetime' => 0,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'Chipping Sodbury Motor Company is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'menu_main_links_source' => 'menu-peugeot-main-menu',
    'menu_secondary_links_source' => 0,
    'menu_options_branch' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_branch' => 'main-menu:0',
    'menu_options_department' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_department' => 'main-menu:0',
    'menu_options_frontpage' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_frontpage' => 'main-menu:0',
    'menu_options_new_vehicle' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_new_vehicle' => 'main-menu:0',
    'menu_options_new_vehicle_list_content' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_new_vehicle_list_content' => 'main-menu:0',
    'menu_options_page' => array(
      'menu-footer-links' => 'menu-footer-links',
      'menu-peugeot-main-menu' => 'menu-peugeot-main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_page' => 'menu-peugeot-main-menu:0',
    'menu_options_slideshow_images' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slideshow_images' => 'main-menu:0',
    'menu_options_used_vehicle' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_used_vehicle' => 'main-menu:0',
    'menu_options_used_vehicle_list_content' => array(
      'main-menu' => 'main-menu',
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_used_vehicle_list_content' => 'main-menu:0',
    'domain_branches_contact' => array(
      9 => 9,
    ),
    'domain_branches_vehicles' => array(),
    'domain_used_manufacturers' => array(
      259 => 259,
    ),
    'domain_town_token_override' => '',
    'domain_county_token_override' => '',
    'menu_options_service' => array(
      'devel' => 0,
      'menu-fiat-main-menu' => 0,
      'menu-footer-links' => 0,
      'menu-ford-main-menu' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'menu-peugeot-main-menu' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_service' => 'main-menu:0',
  );

  return $domain_variables;
}

/**
 * Implements hook_domain_theme_default_themes().
 */
function csmc_site_config_domain_theme_default_themes() {
  $domain_themes = array();
  $domain_themes['csmc_local'] = array();
  $domain_themes['fiat_csmc'] = array(
    'fiat_csmc' => array(
      'theme' => 'fiat_csmc',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
  );
  $domain_themes['ford_csmc'] = array(
    'ford_csmc' => array(
      'theme' => 'ford_csmc',
      'settings' => array(
        'toggle_logo' => 1,
        'toggle_name' => 1,
        'toggle_slogan' => 1,
        'toggle_node_user_picture' => 1,
        'toggle_comment_user_picture' => 1,
        'toggle_comment_user_verification' => 1,
        'toggle_favicon' => 1,
        'toggle_main_menu' => 1,
        'toggle_secondary_menu' => 1,
        'default_logo' => 0,
        'logo_path' => 'public://logo.png',
        'logo_upload' => '',
        'default_favicon' => 0,
        'favicon_path' => 'public://favicon.png',
        'favicon_upload' => '',
        'zurb_foundation_top_bar_enable' => 1,
        'zurb_foundation_top_bar_grid' => 1,
        'zurb_foundation_top_bar_sticky' => 0,
        'zurb_foundation_top_bar_scrolltop' => 1,
        'zurb_foundation_top_bar_is_hover' => 1,
        'zurb_foundation_top_bar_menu_text' => 'Menu',
        'zurb_foundation_top_bar_custom_back_text' => 1,
        'zurb_foundation_top_bar_back_text' => 'Back',
        'zurb_foundation_top_bar_mobile_show_parent_link' => 1,
        'zurb_foundation_tooltip_enable' => 1,
        'zurb_foundation_tooltip_position' => 'tip-top',
        'zurb_foundation_tooltip_mode' => 'text',
        'zurb_foundation_tooltip_text' => 'More information?',
        'zurb_foundation_tooltip_touch' => 0,
        'zurb_foundation_disable_core_css' => 0,
        'zurb_foundation_html_tags' => 1,
        'zurb_foundation_messages_modal' => 0,
        'zurb_foundation_pager_center' => 0,
        'fmg_hide_sidebar' => array(
          'details' => 'details',
          'results' => 'results',
          'contact' => 'contact',
        ),
        'zurb_foundation__active_tab' => 'edit-sidebar',
        'rescan_breakpoints' => 'Scan this theme for breakpoints',
        'theme' => 'ford_csmc',
        'favicon_mimetype' => 'image/png',
      ),
      'status' => 1,
      'filepath' => 'public://domain-2',
    ),
  );
  $domain_themes['peugeot_csmc'] = array(
    'peugeot_csmc' => array(
      'theme' => 'peugeot_csmc',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
  );

  return $domain_themes;
}
