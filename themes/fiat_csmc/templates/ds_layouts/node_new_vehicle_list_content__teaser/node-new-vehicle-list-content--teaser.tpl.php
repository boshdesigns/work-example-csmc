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
* - $images
* - $video
* - $title
* - $body
* - $form
* - $logo
* - $manufacturer
* - $type
*/
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> l-node-vehicle-list-content--teaser clearfix">

  <?php if(!empty($logo)): ?>
    <div class="l-node-vehicle-list-content--teaser__logo">
      <?php print $logo; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($images)): ?>
    <div class="l-node-vehicle-list-content--teaser__images">
      <?php print $images; ?>
    </div>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php
// Needed to activate display suite support on forms
if (!empty($drupal_render_children)):
  print $drupal_render_children;
endif;
?>
