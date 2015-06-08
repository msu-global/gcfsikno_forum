<?php
/**
 * @file
 * gcfsikno_forum.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gcfsikno_forum_taxonomy_default_vocabularies() {
  return array(
    'forums' => array(
      'name' => 'Forum',
      'machine_name' => 'forums',
      'description' => 'Forum navigation vocabulary',
      'hierarchy' => 1,
      'module' => 'forum',
      'weight' => -10,
    ),
  );
}
