<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php print $user_picture; ?>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
        <div class="submitted">
            <?php print $submitted; ?>
        </div>
    <?php endif; ?>

    <div class="content"<?php print $content_attributes; ?>>
        <ul>
        <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        $body = $body[0]['value'];
        $links = explode("\n", $body);
        foreach ($links as $link) {
            $linkParts = explode('|', $link);
            echo "<li>" . l($linkParts[1], 'cc', array('query'=>array('d' => $linkParts[0]))) . ' </li>';
        }
        ?>
        </ul>
    </div>
</div>
