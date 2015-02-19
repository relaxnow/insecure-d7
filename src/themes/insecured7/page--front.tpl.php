<?php if (!user_uid_optional_load()->uid) { require 'page--front-not-logged-in.tpl.php'; } else { ?>
<div id="branding" class="clearfix">
    <?= $breadcrumb?>
    <?= render($title_prefix)?>
    <?php if ($title): ?>
        <h1 class="page-title"><?= $title?></h1>
    <?php endif?>
    <?= render($title_suffix)?>
    <?= render($primary_local_tasks)?>
</div>

<div id="sidebar-first" style="float: left">
    <?= render($page['sidebar_first']) ?>
</div>

<div id="page" style="float: left">
    <?php if ($secondary_local_tasks): ?>
        <div class="tabs-secondary clearfix"><?= render($secondary_local_tasks)?></div>
    <?php endif?>
    <?php if ($messages): ?>
        <div id="console" class="clearfix"><?= $messages?></div>
    <?php endif?>

    <?= theme('buy') ?>

    <div id="footer">
        <?= $feed_icons?>
    </div>

</div>
<?php } ?>
