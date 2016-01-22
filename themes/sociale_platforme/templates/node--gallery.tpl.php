<?php
/**
 * @file
 */
?>
<article<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  
  <div class="gallery-images">
  	<?php print render($content['field_gallery_image']); ?>
  </div>
  
  
  <div class="author">
	  <?php print $user_picture; ?>
	  <div class="created"><label><?php print t('Created by'); ?>:</label><?php print $name; ?></div>
  </div>
  
  <?php if ($display_submitted): ?>
  <footer class="submitted">
  	<?php print t("Created", array(), array('context' => 'timeago')) . " " . $date; ?>
  	<span class='comment-count'><span class="icon-comments"></span> <?php print format_plural($comment_count, '1 comment', '@count comments'); ?></span>
  </footer>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_gallery_image']);
      print render($content);
    ?>
	  <div class="follow">
	  <?php
            print render($content['links']['flag']['#links']['flag-commons_follow_node']['title']);
            unset($content['links']['flag']['#links']['flag-commons_follow_node']);
      ?>
	  </div>
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>
