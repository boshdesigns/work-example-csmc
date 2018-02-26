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
* - $name
*/
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> l-taxonomy-term-social-media--footer clearfix">

  <?php if(!empty($icon)): ?>
    <div class="l-taxonomy-term-social-media--footer__icon">
      <?php print $icon; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($name)): ?>
    <div class="l-taxonomy-term-social-media--footer__name">
      <?php print $name; ?>
    </div>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php
// Needed to activate display suite support on forms
if (!empty($drupal_render_children)):
  print $drupal_render_children;
endif;
?>
