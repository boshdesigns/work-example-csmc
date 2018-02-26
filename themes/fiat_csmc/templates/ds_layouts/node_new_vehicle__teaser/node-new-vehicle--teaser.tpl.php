<?php
/**
* @file
* Display Suite Car Showroom template.
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
* - $photos
* - $title
* - $price
* - $body
* - $social
*/

// We don't need these
unset($price);
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> l-node-new-vehicle--teaser clearfix">

  <?php if(!empty($photos)): ?>
    <div class="l-node-new-vehicle--teaser__photos">
      <?php print $photos; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($sash)) : ?>
    <div class="l-node-new-vehicle--teaser__sash">
      <?php print $sash; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($title)): ?>
    <div class="l-node-new-vehicle--teaser__title">
      <?php print $title; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($price)): ?>
    <div class="l-node-new-vehicle--teaser__price">
      <?php print $price; ?>
    </div>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>
<?php
// Needed to activate display suite support on forms
if (!empty($drupal_render_children)):
  print $drupal_render_children;
endif;
?>
