<?php
/**
 * @file
 */
?>
<div class="node-banner">
  <?php print render($content['field_media']); ?>
</div>
<article<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
	  <div class="node-type"><?php print node_type_get_name($node); ?></div>
	  <?php include 'partials/group-reference.php'; ?>
    <h2<?php print $title_attributes; ?>><span class="icon-<?php print $node->type; ?>"></span><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <div<?php print $content_attributes; ?>>
  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['field_media']);
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>
  </div>
  <div class="author">
    <?php print $user_picture; ?>
    <div class="created"><label><?php print t('Created by'); ?>:</label><?php print $name; ?></div>
    <?php if(isset($content['links']['flag'])) { ?>
    <div class="follow"><?php print render($content['links']['flag']); ?></div>
    <?php } ?>
  </div>
  <?php if ($display_submitted): ?>
  <footer class="submitted">
	  <?php print t("Created", array(), array('context' => 'timeago')) . " " . $date; ?>
    <span class='comment-count'><span class="icon-comments"></span> <?php print format_plural($comment_count, '1 comment', '@count comments'); ?></span>
  </footer>
  <?php endif; ?>  
</article>
