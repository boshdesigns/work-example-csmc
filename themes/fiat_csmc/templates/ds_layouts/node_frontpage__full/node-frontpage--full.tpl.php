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
* - $search
* - $promotional_blocks
* - $latest_vehicles
* - $recently_viewed
* - $title
* - $form
* - $body: The main body of content.
* - $featured_vehicles
* - $custom_one
* - $custom_two
* - $custom_three
*/

// These aren't needed
unset($featured_vehicles);
unset($latest_vehicles);

?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> l-node-frontpage--full clearfix">

  <?php if(!empty($slideshow)): ?>
    <div class="l-node-frontpage--full__slideshow">

      <?php // CTA to anchor to opening hours ?>
        <section class="l-node-frontpage--full__opening-hours-anchor">
          <a href="#opening-hours" class="opening-hours-anchor"><i class="fa fa-clock-o" aria-hidden="true"></i> View Opening Times</a>
        </section>
      <?php // end of anchor ?>

      <?php print $slideshow; ?>

      <?php if(!empty($search)): ?>
        <div class="l-node-frontpage--full__search-outer">
          <div class="l-node-frontpage--full__search">
            <div class="l-node-frontpage--full__search-inner">
              <?php print $search; ?>
            </div>
          </div>
        </div>
      <?php endif; ?>

    </div>
  <?php endif; ?>

  <div class="l-node-frontpage--full__title--wrap">

    <div class="l-node-frontpage--full__title">
      <div class="l-node-frontpage--full__title-inner">
        <?php // We need to print the site name with a span but still wrapped in h1 tag
          print '<div class="field-name-title"><h1><span>Welcome to </span>'. variable_get('site_name') .'</h1></div>';
        ?>
      </div>
    </div>

  </div>

  <?php if(!empty($promotional_blocks)): ?>
    <div class="l-node-frontpage--full__promotional-blocks-outer">
      <div class="l-node-frontpage--full__promotional-blocks">
        <div class="l-node-frontpage--full__promotional-blocks-inner">
          <?php print $promotional_blocks; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if(!empty($images) || !empty($videos) || !empty($body) || !empty($files)): ?>
    <div class="l-node-frontpage--full__content">
      <div class="l-node-frontpage--full__content-below">
        <div class="l-node-frontpage--full__content-below-inner">
          <div id="opening-hours" class="field-name-opening-hours">
            <?php print views_embed_view('csmc_branch_info', 'opening_hours'); ?>
          </div>
        </div>
      </div>

      <div class="l-node-frontpage--full__content-above">
        <div class="l-node-frontpage--full__content-above-inner">

          <?php if(!empty($images)): ?>
            <div class="l-node-frontpage--full__images">
              <?php print $images; ?>
            </div>
          <?php endif; ?>

          <?php if(!empty($videos)): ?>
            <div class="l-node-frontpage--full__videos">
              <?php print $videos; ?>
            </div>
          <?php endif; ?>

          <?php if(!empty($body)): ?>
            <div class="l-node-frontpage--full__body">
              <?php print $body; ?>
            </div>
          <?php endif; ?>

          <?php if(!empty($files)): ?>
            <div class="l-node-frontpage--full__files">
              <?php print $files; ?>
            </div>
          <?php endif; ?>

        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if(!empty($latest_vehicles)): ?>
    <div class="l-node-frontpage--full__latest-vehicles">
      <?php print $latest_vehicles; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($featured_vehicles)): ?>
    <div class="l-node-frontpage--full__featured-vehicles">
      <?php print $featured_vehicles; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($form)): ?>
    <div class="l-node-frontpage--full__form">
      <?php print $form; ?>
    </div>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php
// Needed to activate display suite support on forms
if (!empty($drupal_render_children)):
  print $drupal_render_children;
endif;
?>
