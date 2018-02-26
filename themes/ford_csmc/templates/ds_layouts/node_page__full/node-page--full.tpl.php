<?php
/**
* @file
* Display Suite FMG Auto template.
*
* Available variables:
*
* Layout:
* - $classes: String of classes that can be used to style this layout.
* - $contextual_links: Renderable array of contextual links.
* - $layout_wrapper: wrapper surrounding the layout.
*
* Regions:
*
* - $slideshow
* - $images
* - $video
* - $files
* - $title
* - $price
* - $body
* - $child_node_list
* - $form
* - $custom_one
* - $custom_two
* - $custom_three
*/

// Set the $field_free_tag variable
if(isset($node->field_free_tags) && !empty($node->field_free_tags)):
  $free_tag = strtolower(drupal_clean_css_identifier($node->field_free_tags['und'][0]['taxonomy_term']->name, $filter = array(' ' => '-', '_' => '-', '/' => '-', '[' => '-', ']' => '')));
endif;

if(isset($free_tag) && $free_tag == "landing-page") {
  unset($child_node_list);
}
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> l-node-page--full<?php if(isset($free_tag)): print ' node-page--' . $free_tag . ' l-node-page--' . $free_tag; endif; ?> clearfix">

  <?php if(!empty($slideshow)): ?>
    <div class="l-node-page--full__slideshow">
      <?php print $slideshow; ?>
    </div>
  <?php endif; ?>

  <div class="l-node-page--full__content--padding">
    <?php if(!empty($title)): ?>
      <div class="l-node-page--full__title">
        <?php print $title; ?>
      </div>
    <?php endif; ?>

    <?php if(!empty($price)): ?>
      <div class="l-node-page--full__price">
        <?php print $price; ?>
      </div>
    <?php endif; ?>

    <?php if(!empty($images) || !empty($videos) || !empty($body) || !empty($files)): ?>
      <div class="l-node-page--full__content">

        <?php if(!empty($images)): ?>
          <div class="l-node-page--full__images">
            <?php print $images; ?>
          </div>
        <?php endif; ?>

        <?php if(!empty($videos)): ?>
          <div class="l-node-page--full__videos">
            <?php print $videos; ?>
          </div>
        <?php endif; ?>

        <?php if(!empty($files)): ?>
          <div class="l-node-page--full__files">
            <?php print $files; ?>
          </div>
        <?php endif; ?>

        <?php if(!empty($body)): ?>
          <div class="l-node-page--full__body">
            <?php print $body; ?>
          </div>
        <?php endif; ?>

      </div>
    <?php endif; ?>

    <?php if(!empty($child_node_list)): ?>
      <div class="l-node-page--full__child-node-list">
        <?php print $child_node_list; ?>
      </div>
    <?php endif; ?>

    <?php if(isset($free_tag) && $free_tag == "landing-page"): ?>

      <div class="l-node-page--full__child-node-list--custom">
        <?php if(isset($node->field_nodes) && !empty($node->field_nodes)) {
          $output = '<ul class="child-node-list--custom__list">';
          foreach ($node->field_nodes[LANGUAGE_NONE] as $child) {
            if($child['entity']->type == "new_vehicle_list_content") {
              $term = taxonomy_term_load($child['entity']->field_new_veh_manufacturer['und'][0]['tid']);
              $link = 'new/cars/' . strtolower($term->name);
              $title = 'New ' . $term->name . ' Cars';
            } else {
              $link = url(drupal_get_path_alias('node/' . $child['entity']->nid));
              $title = $child['entity']->title;
            }
            $output .= '<li><a href="' . $link . '">';
            $output .= '<div class="child-image"><img src="' . image_style_url('csmc_promo_633x455', $child['entity']->field_image['und'][0]['uri']) . '" /></div>';
            $output .= '<div class="child-title"><button>' . $title . '</button></div>';
            $output .= '</a></li>';
          }
          $output .= '</ul>';
          print $output;
        } ?>
      </div>

    <?php endif; ?>

    <?php if(!empty($form)): ?>
      <div class="l-node-page--full__form">
        <?php print $form; ?>
      </div>
    <?php endif; ?>
  </div>


</<?php print $layout_wrapper ?>>

<?php
// Needed to activate display suite support on forms
if (!empty($drupal_render_children)):
  print $drupal_render_children;
endif;
?>
