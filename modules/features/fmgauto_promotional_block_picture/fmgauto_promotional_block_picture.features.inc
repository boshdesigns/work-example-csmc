<?php
/**
 * @file
 * fmgauto_promotional_block_picture.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fmgauto_promotional_block_picture_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}
