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
* - vehicle_title
* - vehicle_price
* - monthly_price
* - sash
* - photo_gallery
* - video_gallery
* - vehicle_specs
* - $ivendi_finance_checker
* - vehicle_icons
* - share_icons
* - vehicle_cta
* - $vehicle_files
* - additional_vehicle_details
* - vehicle_features
* - $ivendi_finance_checker
* - vehicle_finance
* - vehicle_enquiry
* - branch_info
* - engine_mpg
* - dimensions_weight
* - performance_safety
* - similar_vehicles
*/

// We don't need these
unset($save_vehicle);
unset($similar_vehicles);
unset($ivendi_finance_checker_hero);


// Set up a "Price" label if the price isn't 0
// Then print lower down
$price = $node->field_vehicle_price['und'][0]['value'];
if (isset($price) && !empty($price) && $price !== "0.00" && $price !== "0") {
	$price_label = '<div class="price-inline-label">Price </div>';
}

?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> l-node-used-vehicle--full clearfix">

	<?php if(!empty($vehicle_title)): ?>
		<div class="l-node-used-vehicle--full__header">

			<?php if(!empty($vehicle_title)): ?>
				<div class="l-node-used-vehicle--full__title">
					<?php print $vehicle_title; ?>
				</div>
			<?php endif; ?>

		</div>
	<?php endif; ?>

	<?php if(!empty($photo_gallery) || !empty($video_gallery)): ?>
		<div class="l-node-used-vehicle--full__gallery-main-specification-wrap">
			<div class="l-node-used-vehicle--full__gallery">
				<div class="l-node-used-vehicle--full__gallery-inner">

					<ul class="tabs tabs--node-used-vehicle-gallery" data-tab>
						<?php if(!empty($photo_gallery)): ?>
					  	<li class="tab-title active"><a href="#tab-images">Images</a></li>
						<?php endif; ?>
						<?php if(!empty($video_gallery)): ?>
					  	<li class="tab-title"><a href="#tab-video">Video</a></li>
						<?php endif; ?>
					</ul>
					<div class="tabs-content tabs-content--node-used-vehicle-gallery">
						<?php if(!empty($photo_gallery)): ?>
						  <div class="content active" id="tab-images">
								<div class="l-node-used-vehicle--full__gallery-sash-wrap">
									<?php print $photo_gallery; ?>
									<?php if(!empty($sash)): ?>
										<div class="node__sash">
											<?php print $sash; ?>
										</div>
									<?php endif; ?>
								</div>
						  </div>
						<?php endif; ?>
						<?php if(!empty($video_gallery)): ?>
						  <div class="content" id="tab-video">
								<?php print $video_gallery; ?>
						  </div>
						<?php endif; ?>
					</div>

				</div>
			</div>
	<?php endif; ?>

	<?php if(!empty($share_icons) || !empty($vehicle_specs) || !empty($vehicle_icons)): ?>

			<div class="l-node-used-vehicle--full__main-specification">
				<div class="l-node-used-vehicle--full__main-specification-inner">

					<?php if(!empty($vehicle_price) || !empty($monthly_price) || !empty($was_price) || !empty($saving_price)): ?>
						<div class="l-node-used-vehicle--full__price">
							<?php if(isset($price_label) && !empty($price_label)) { print $price_label; } ?>
							<?php print $vehicle_price; ?>
							<?php if(!empty($monthly_price)): ?>
								<div class="l-node-used-vehicle--full__monthly-price">
									<?php print $monthly_price; ?>
								</div>
							<?php endif; ?>
							<?php if(!empty($was_price) || !empty($saving_price)): ?>
								<div class="l-node-used-vehicle--full__saving-price">
									<?php print $was_price; ?>
									<?php print $saving_price; ?>
								</div>
							<?php endif; ?>
						</div>
					<?php endif; ?>

					<?php if(!empty($vehicle_specs)): ?>
						<div class="l-node-used-vehicle--full__spec">
							<?php print $vehicle_specs; ?>
						</div>
					<?php endif; ?>

					<?php if(!empty($share_icons)): ?>
						<div class="l-node-used-vehicle--full__share-icons">
							<?php print $share_icons; ?>
						</div>
					<?php endif; ?>

					<?php if(!empty($save_vehicle)): ?>
						<div class="l-node-used-vehicle--full__save">
							<?php print $save_vehicle; ?>
						</div>
					<?php endif; ?>

		      <?php if(!empty($ivendi_finance_checker_hero)): ?>
		        <div class="l-node-used-vehicle--ivendi-finance-checker-hero">
		          <?php print $ivendi_finance_checker_hero; ?>
		        </div>
		      <?php endif; ?>

				</div>
			</div>
		</div>
	<?php endif; ?>

	<?php if(!empty($vehicle_cta)): ?>
		<div class="l-node-used-vehicle--full__cta">
			<div class="l-node-used-vehicle--full__cta-inner">
		  	<?php print $vehicle_cta; ?>
			</div>
		</div>
	<?php endif; ?>

	<?php if(!empty($branch_info) || !empty($engine_mpg) || !empty($dimensions_weight) || !empty($performance_safety) || !empty($additional_vehicle_details) || !empty($vehicle_features)): ?>
	<div class="l-node-used-vehicle--full__tabbed-content-outer">
		<div class="l-node-used-vehicle--full__tabbed-content">
			<div class="l-node-used-vehicle--full__tabbed-content-inner">

				<ul class="tabs tabs--node-used-vehicle-tabs" data-tab>
					<li class="tab-title active"><a href="#tab-additional-info">Additional Information</a></li>
					<li class="tab-title"><a href="#tab-technical">Technical Specification</a></li>
					<li class="tab-title"><a href="#tab-contact" id="used-vehicle-map">Map &amp; Directions</a></li>
				</ul>
				<div class="tabs-content tabs-content--node-used-vehicle-dealer-details">
					<div class="content active" id="tab-additional-info">
						<?php if(!empty($additional_vehicle_details)): ?>
							<div class="l-node-used-vehicle--full__additional-vehicle-details">
								<?php print $additional_vehicle_details; ?>
							</div>
						<?php endif; ?>

						<?php if(!empty($vehicle_features)): ?>
							<div class="l-node-used-vehicle--full__features">
								<?php print $vehicle_features; ?>
							</div>
						<?php endif; ?>
					</div>

					<div class="content" id="tab-technical">
						<?php if(!empty($specs_one) && strpos($specs_one,'<li>') !== false || !empty($specs_two) && strpos($specs_two,'<li>') !== false || !empty($specs_three) && strpos($specs_three,'<li>') !== false): ?>
							<div class="l-node-used-vehicle--full__technical">
								<ul>
									<?php if(!empty($specs_one) && strpos($specs_one,'<li>') !== false): ?>
										<li class="l-node-used-vehicle--full__specs-group-one">
											<h3 class="specs-group-one-label">Engine & MPG</h3>
											<?php print $specs_one; ?>
										</li>
									<?php endif; ?>

									<?php if(!empty($specs_two) && strpos($specs_two,'<li>') !== false): ?>
										<li class="l-node-used-vehicle--full__specs-group-two">
											<h3 class="specs-group-two-label">Dimensions & Weight</h3>
											<?php print $specs_two; ?>
										</li>
									<?php endif; ?>

									<?php if(!empty($specs_three) && strpos($specs_three,'<li>') !== false): ?>
										<li class="l-node-used-vehicle--full__specs-group-three">
											<h3 class="specs-group-three-label">Performance & Safety</h3>
											<?php print $specs_three; ?>
										</li>
									<?php endif; ?>
								</ul>
							</div>
						<?php endif; ?>
					</div>

					<?php if(!empty($branch_info)): ?>
						<div class="content" id="tab-contact">
							<?php print $branch_info; ?>
						</div>
					<?php endif; ?>

				</div>

			</div>
		</div>
	</div>
	<?php endif; ?>

  <?php if(!empty($ivendi_finance_checker)): ?>
    <div class="l-node-used-vehicle--full__ivendi-finance-checker">
			<div class="l-node-used-vehicle--full__ivendi-finance-checker-inner">
      	<?php print $ivendi_finance_checker; ?>
			</div>
    </div>
  <?php endif; ?>

	<?php if(!empty($vehicle_finance)): ?>
		<div class="l-node-used-vehicle--full__finance">
			<div class="l-node-used-vehicle--full__finance-inner">
				<?php print $vehicle_finance; ?>
			</div>
		</div>
	<?php endif; ?>

	<?php if(!empty($vehicle_enquiry)): ?>
		<div class="l-node-used-vehicle--full__form-outer">
			<div class="l-node-used-vehicle--full__form">
				<div class="l-node-used-vehicle--full__form-inner">
					<?php print $vehicle_enquiry; ?>
				</div>
			</div>
		</div>
	<?php endif; ?>

	<?php if(!empty($vehicle_files)): ?>
	  <div class="l-node-used-vehicle--full__files">
			<div class="l-node-used-vehicle--full__files-inner">
				<?php print $vehicle_files; ?>
			</div>
	  </div>
	<?php endif; ?>

	<?php if(!empty($similar_vehicles)): ?>
		<div class="l-node-used-vehicle--full__similar-vehicles">
			<div class="l-node-used-vehicle--full__similar-vehicles-inner">
				<?php print $similar_vehicles; ?>
			</div>
		</div>
	<?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php
// Needed to activate display suite support on forms
if (!empty($drupal_render_children)):
  print $drupal_render_children;
endif;
?>
