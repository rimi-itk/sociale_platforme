<article<?php
/**
 * @file
 */
print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
    
    <div class="follow-counter">
    	<?php $flags = flag_get_counts("node", $node->nid, TRUE); ?> 
    	<div class="count-left"><span class="icon-bruger"></span></div>
    	<div class="count-right">
    		<span><?php print t("This group has"); ?>:</span>
    		<strong><?php print $flags["commons_follow_group"] . " " . t('followers'); ?></strong>
    	</div>
    </div>
    
    <div class="follow">
    <?php
            print render($content['links']['flag']['#links']['flag-commons_follow_group']['title']);
    ?>
    </div>
  </div>
  
  <div class="author">
  	<h4><?php print t("Group was created by"); ?>:</h4>
	  <?php print $user_picture; ?>
	  <div class="created">
	  	<div class="name"><?php print $name; ?></div>
			<div class="date"><?php print t('Created', array(), array('context' => 'timeago')) . " " . $date; ?></div>
	  </div>
  </div>
   
</article>
