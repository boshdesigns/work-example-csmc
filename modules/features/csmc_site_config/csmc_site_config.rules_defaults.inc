<?php
/**
 * @file
 * csmc_site_config.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function csmc_site_config_default_rules_configuration() {
  $items = array();
  $items['fmgauto_branch_csmc_clear_cache_after_branch_feed'] = entity_import('rules_config', '{ "fmgauto_branch_csmc_clear_cache_after_branch_feed" : {
      "LABEL" : "CSMC Clear Cache After Branch Feed",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "branch", "cache", "clear", "feeds" ],
      "REQUIRES" : [ "rules", "cache_actions", "feeds" ],
      "ON" : { "feeds_after_import" : [] },
      "IF" : [
        { "text_matches" : { "text" : [ "source:id" ], "match" : "branch_importer_xml" } }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "csmc_branch_info" : "csmc_branch_info" } } } },
        { "cache_actions_action_clear_cache_cid" : { "bin" : "cache_page", "cid" : "[site:url]contact", "wildcard" : 0 } }
      ]
    }
  }');
  return $items;
}
