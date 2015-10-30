<article<?php
/**
 * @file
 */
print $attributes; ?>>
	
	<div class="com-left">
  <?php print $picture; ?>
	</div>
	
	<div class="com-right">
  <header>
  	<h3 class="comment-title"><?php print $author; ?></h3>
    <?php if ($new): ?>
      <em class="new"><?php print $new ?></em>
    <?php endif; ?>
  </header>

  <footer class="comment-submitted">
   <?php
      print $created;
    ?>
  </footer>

  <div<?php print $content_attributes; ?>>
    <?php
        hide($content['report_link']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php if (!empty($content['links'])): ?>
    <nav class="links comment-links clearfix"><?php print render($content['links']); ?></nav>
  <?php endif; ?>
  
	</div>

</article>
