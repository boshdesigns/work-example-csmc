<?php

function ford_csmc_entity_view_alter(&$build, $type){
  if ($type == 'node' && $build['#bundle'] == 'branch') {
    if ($build['#view_mode'] == 'footer') {
      if (isset($build['#node']->field_branch_reg_office_option) && !empty($build['#node']->field_branch_reg_office_option)) {
        if ($build['#node']->field_branch_reg_office_option[LANGUAGE_NONE][0]['value'] == FALSE) {
          if (isset($build['field_address'])) {
            unset($build['field_address']);
          }
        }
      }
    }
    elseif (isset($build['field_branch_reg_office_address'])) {
      unset($build['field_branch_reg_office_address']);
    }
  }

  //Show the page title outside the DS template and hide DS $title
  if ($type == 'node'){
   if(($build['#bundle'] == 'page' || $build['#bundle'] == 'used_vehicle' || $build['#bundle'] == 'new_vehicle') && ($build['#view_mode'] == 'full' || $build['#view_mode'] == 'contact_page')) {
     $bundle = $build['#bundle'];
     $view_mode = $build['#view_mode'];
     $layout = ds_get_layout($type, $bundle, $view_mode);
     if (variable_get('ds_extras_hide_page_title', FALSE)) {
       $page_title = &drupal_static('ds_page_title');
       if (isset($layout['settings']['hide_page_title']) && $layout['settings']['hide_page_title'] == 1 && isset($build['title'][0]['#markup']) && ds_extras_is_entity_page_view($build, $type)) {
         //Set page title
         $page_title['title'] = strip_tags($build['title'][0]['#markup']);
         //Hide DS title so you don't have both
         unset($build['title']);
       }
     }
   }
  }
}

function ford_csmc_fmg_solr_count() {
  $count = fmg_solr_current_search_count();
  return '<div class="used-search-block-count">' . $count . ' <span>Results</span></div>';
}

function ford_csmc_field__minimal__field_address__branch($variables) {
  // Set view mode to use
  $view_mode = $variables['element']['#view_mode'];

  $output = '';
  $config = $variables['ds-config'];
  $classes = isset($config['classes']) ? ' ' . $config['classes'] : '';

  // Add a simple wrapper.
  $output .= '<div class="field field-name-' . strtr($variables['element']['#field_name'], '_', '-') . $classes . '">';

  // Render the label.
  if (!$variables['label_hidden']) {
    $output .= '<div class="label-' . $variables['element']['#label_display'] . '">' . $variables['label'];
    if (!isset($config['lb-col'])) {
      $output .= ':&nbsp;';
    }
    $output .= '</div>';
  }

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }
  if(isset($view_mode) && $view_mode = 'contact_page') {
    $output .= '</br><a href="mailto:' . $variables['element']['#object']->field_email['und'][0]['email'] . '">' . $variables['element']['#object']->field_email['und'][0]['email'] . '</a>';
  }
  $output .= "</div>";

  return $output;
}
