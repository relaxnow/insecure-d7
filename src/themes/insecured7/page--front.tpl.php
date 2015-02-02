<div id="branding" class="clearfix">
    <?= $breadcrumb ?>
    <?= render($title_suffix) ?>
    <?= render($primary_local_tasks) ?>
</div>

<div id="sidebar-first">
    <?= render($page['sidebar_first']) ?>
</div>

<div id="page">
    <?php if ($secondary_local_tasks): ?>
        <div class="tabs-secondary clearfix"><?= render($secondary_local_tasks) ?></div>
    <?php endif ?>

    <div id="content" class="clearfix">
        <div class="element-invisible"><a id="main-content"></a></div>
        <?php if ($messages): ?>
            <div id="console" class="clearfix"><?= $messages ?></div>
        <?php endif ?>
        <?php if ($page['help']): ?>
            <div id="help">
                <?= render($page['help']) ?>
            </div>
        <?php endif ?>
        <?php if ($action_links): ?><ul class="action-links"><?= render($action_links) ?></ul><?php endif ?>
        <?php
        unset($page['content']['system_main']['default_message']);
        print render($page['content']) ?>
    </div>
    <?php require 'buy.tpl.php' ?>

    <div id="footer">
        <?= $feed_icons ?>
    </div>

</div>
