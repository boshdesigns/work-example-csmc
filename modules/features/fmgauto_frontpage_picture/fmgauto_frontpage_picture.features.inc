<?php
/**
 * @file
 * fmgauto_frontpage_picture.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fmgauto_frontpage_picture_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}
