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
* - $icon
* - $label
* - $telephonenumbers
*/

// We don't need these
unset($label);
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> l-taxonomy-term-telephone-numbers--full clearfix">

  <?php if(!empty($label)): ?>
    <div class="l-taxonomy-term-telephone-numbers--full__label">
      <?php print $label; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($telephonenumbers)): ?>
    <div class="l-taxonomy-term-telephone-numbers--full__telephone-numbers">
      <?php print $telephonenumbers; ?>
    </div>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php
// Needed to activate display suite support on forms
if (!empty($drupal_render_children)):
  print $drupal_render_children;
endif;
?>
