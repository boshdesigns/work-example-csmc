<?php
$current_domain = domain_get_domain();
if ($current_domain['is_default'] != 1){
  $domains = domain_domains();
  foreach($domains as $domain){
    if ($domain['is_default'] == 1){
      $group_url = $domain['path'];
    }
  }
}
?>

<!--.page -->
<div class="page" role="document" id="page-top">

  <!--.l-header -->
  <header class="l-header" role="banner">
    <div class="l-header__inner">

      <?php if (isset($group_url)): ?>
        <div class="l-header__group-home-link"><a href="<?php print $group_url;?>" class="group-home-link" target="_blank"><i class="fa fa-home" aria-hidden="true"></i> Back To Group</a></div>
      <?php endif; ?>

      <?php if (!empty($page['header_contact_details'])): ?>
        <div class="l-header__contact-details">
          <?php print render($page['header_contact_details']); ?>
        </div>
      <?php endif; ?>

      <?php if ($linked_logo || $linked_site_name): ?>
        <div class="l-header__logo">
          <?php if ($linked_logo): ?>
            <?php print $linked_logo; ?>
          <?php elseif ($linked_site_name): ?>
            <?php print $linked_site_name; ?>
          <?php endif; ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($page['manufacturer_logo'])): ?>
        <div class="l-header__manufacturer-logo">
          <?php print render($page['manufacturer_logo']); ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($page['header'])): ?>
        <?php print render($page['header']); ?>
      <?php endif; ?>

    </div>
  </header>
  <!--/.l-header -->

  <?php if ($top_bar): ?>
    <!--.nav -->
    <div class="nav<?php if ($top_bar_classes): print ' ' . $top_bar_classes; endif; if($is_front): print ' sticky'; endif; ?>">
      <nav class="top-bar" data-topbar <?php print $top_bar_options; ?>>
        <ul class="title-area">
          <li class="name"></li>
          <li class="toggle-topbar menu-icon">
            <a href="#"><span><?php print $top_bar_menu_text; ?></span></a></li>
        </ul>
        <section class="top-bar-section">
          <?php if ($top_bar_main_menu) : ?>
            <?php print $top_bar_main_menu; ?>
          <?php endif; ?>
        </section>
      </nav>
    </div>
    <!--/.nav -->
  <?php endif; ?>

  <?php if (!empty($page['featured'])): ?>
    <!--.l-featured -->
    <section class="l-featured">
      <?php print render($page['featured']); ?>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--.l-messages -->
    <section class="l-messages">
      <?php if ($messages): print $messages; endif; ?>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <!--.l-help -->
    <section class="l-help">
      <?php print render($page['help']); ?>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

  <?php
  // Warp the breadcrumb and title
  // Set title to stop it dropping off
  if(!$is_front) {
    $get_title = drupal_get_title();
  }
  ?>
  <?php if (!empty($breadcrumb) || !empty($get_title)): ?>
  <div class="l-breadcrumb-title-wrap__outer">
    <img src="/<?php print drupal_get_path('theme', 'csmc'); ?>/images/page-header-bg.gif" class="bg-img"/>
    <div class="l-breadcrumb-title-wrap">
      <div class="l-breadcrumb-title-wrap__inner">
        <?php if ($breadcrumb): ?>
          <!--.l-breadcrumbs -->
          <div class="l-breadcrumbs">
            <div class="l-breadcrumbs__list">
              <?php print $breadcrumb; ?>
            </div>
            <div class="l-breadcrumbs__title">
              <?php if ($title_location): ?>
                <h1 class="page__title page__title--location"><?php print $title_location; ?></h1>
              <?php endif; ?>
            </div>
          </div>
          <!--/.l-breadcrumbs -->
        <?php endif; ?>

        <?php if ($get_title): ?>
          <?php print render($title_prefix); ?>
          <div class="title-placeholder">
            <div class="l-page-title-outer">
              <div class="l-page-title">
                <div class="l-page-title-inner">
                  <section class="l-page-title__heading">
                    <h2 class="page__title" id="page-title"><?php print $get_title; ?></h2>
                  </section>
                  <aside class="l-page-title__additional-button">
                    <?php if(isset($node) && $node->type !== "page"): ?>
                      <?php if(isset($node->type) && $node->type == "used_vehicle" || $node->type == "new_vehicle"): ?>
                        <a href="#vehicle-enquiry-form-entityform-edit-form">Enquire Now <i class="fa fa-chevron-down" aria-hidden="true"></i></a>
                      <?php endif; ?>
                    <?php else: ?>
                        <a href="#page-top">Back To Top <i class="fa fa-chevron-up" aria-hidden="true"></i></a>
                    <?php endif; ?>
                  </aside>
                </div>
              </div>
            </div>
          </div>
          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <?php if (!empty($page['search_page_text'])): ?>
          <div class="search_page_text">
            <?php print render($page['search_page_text']); ?>
          </div>
        <?php endif; ?>

      </div>
    </div>
  </div>
  <?php endif; ?>
  <?php //end of wrap ?>

  <?php if (!empty($page['finance_adjustment_table'])): ?>
    <div class="l-finance-adjustment-table-outer">
      <div class="l-finance-adjustment-table">
        <div class="l-finance-adjustment-table-inner">
          <?php print render($page['finance_adjustment_table']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>


  <!--.l-main -->
  <main class="l-main" role="main">
    <div class="l-main__inner">

      <div class="l-main-content <?php print $main_content; ?>">
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlight panel callout">
            <?php print render($page['highlighted']); ?>
          </div>
        <?php endif; ?>

        <a id="main-content"></a>

        <?php if (!empty($tabs)): ?>
          <div class="action-tabs">
            <?php print render($tabs); ?>
            <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
          </div>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

        <?php print render($page['content']); ?>
      </div>

      <?php if (!empty($page['sidebar'])): ?>
        <aside class="l-sidebar" role="complementary">
          <?php print render($page['sidebar']); ?>
        </aside>
      <?php endif; ?>

    </div>
  </main>
  <!--/.l-main -->

  <?php if (!empty($page['footer_first']) || !empty($page['footer_second']) || !empty($page['footer_third']) || !empty($page['footer_fourth'])): ?>
    <!--.l-footer -->
    <footer class="l-footer" role="contentinfo">

      <div class="l-footer__top-section--outer">
        <div class="l-footer__top-section--inner">

          <?php if (!empty($page['footer_first'])): ?>
            <div class="l-footer__first">
              <?php print render($page['footer_first']); ?>
            </div>
          <?php endif; ?>

        </div>
      </div>

      <div class="l-footer__middle-section--outer">
        <div class="l-footer__middle-section--inner">

          <?php if (!empty($page['footer_second'])): ?>
            <div class="l-footer__second">
              <?php print render($page['footer_second']); ?>
            </div>
          <?php endif; ?>

          <?php if (!empty($page['footer_third'])): ?>
            <div class="l-footer__third">
              <?php print render($page['footer_third']); ?>
            </div>
          <?php endif; ?>

          <?php if (!empty($page['footer_fourth'])): ?>
            <div class="l-footer__fourth">
              <?php print render($page['footer_fourth']); ?>
            </div>
          <?php endif; ?>

          <?php if (!empty($page['footer_fifth'])): ?>
            <div class="l-footer__fifth">
              <?php print render($page['footer_fifth']); ?>
            </div>
          <?php endif; ?>

          <?php if (!empty($page['footer_sixth'])): ?>
            <div class="l-footer__sixth">
              <?php print render($page['footer_sixth']); ?>
            </div>
          <?php endif; ?>

        </div>
      </div>

      <div class="l-footer__lower-section--outer">
        <div class="l-footer__lower-section--inner">

          <?php if (!empty($page['footer_seventh'])): ?>
            <div class="l-footer__seventh">
              <?php print render($page['footer_seventh']); ?>
            </div>
          <?php endif; ?>

        </div>
      </div>

    </footer>
    <!--/.l-footer -->
  <?php endif; ?>

  <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
</div>
<!--/.page -->

<?php if (!empty($page['outer_content'])): ?>
  <?php print render($page['outer_content']); ?>
<?php endif; ?>
