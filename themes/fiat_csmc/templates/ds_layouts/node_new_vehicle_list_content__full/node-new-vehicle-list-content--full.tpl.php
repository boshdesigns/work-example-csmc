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
* - $logo
* - $body
* - $additionalbody
*/

// we don't need these
unset($images);

?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> l-node-new-vehicle-list-content--full clearfix">

  <?php if(!empty($slideshow)): ?>
    <div class="l-node-new-vehicle-list-content--full__slideshow">
      <?php print $slideshow; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($logo)): ?>
    <div class="l-node-new-vehicle-list-content--full__logo">
      <?php print $logo; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($images)): ?>
    <div class="l-node-new-vehicle-list-content--full__images">
      <?php print $images; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($videos)): ?>
    <div class="l-node-new-vehicle-list-content--full__videos">
      <?php print $videos; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($files)): ?>
    <div class="l-node-new-vehicle-list-content--full__files">
      <?php print $files; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($body)): ?>
    <div class="l-node-new-vehicle-list-content--full__body">
      <?php print $body; ?>
    </div>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php
// Needed to activate display suite support on forms
if (!empty($drupal_render_children)):
  print $drupal_render_children;
endif;
?>
