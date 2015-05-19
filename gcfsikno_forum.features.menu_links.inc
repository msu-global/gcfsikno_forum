<?php
/**
 * @file
 * gcfsikno_forum.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gcfsikno_forum_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_forum-home:forum
  $menu_links['main-menu_forum-home:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum Home',
    'options' => array(
      'attributes' => array(
        'title' => 'The home page of the forum.',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_forum-home:forum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_forum:forum',
  );
  // Exported menu link: main-menu_forum:forum
  $menu_links['main-menu_forum:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_forum:forum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Forum');
  t('Forum Home');


  return $menu_links;
}
