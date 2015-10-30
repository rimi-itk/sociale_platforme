<?php
/**
 * @file
 */
if (isset($node->og_group_ref["und"])) :
?>
<div class="group-reference">
<?php
  $groupID = $node->og_group_ref['und'][0]['target_id'];
$group = node_load($groupID);
$groupURLAlias = drupal_get_path_alias('node/' . $groupID);
print '<span class="icon-gruppe"></span> <a href="' . $groupURLAlias . '">' . $group->title . '</a>';
?>
</div>
<?php
endif;
