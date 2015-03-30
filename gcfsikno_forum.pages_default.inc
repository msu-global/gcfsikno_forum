<?php
/**
 * @file
 * gcfsikno_forum.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gcfsikno_forum_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'advanced_forum_new_topics';
  $page->task = 'page';
  $page->admin_title = 'Advanced Forum New Topics';
  $page->admin_description = 'A page that shows a listing of new forum topics.';
  $page->path = 'forum/new';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'New topics',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_advanced_forum_new_topics__panel_context_839c9b4c-29b5-41f7-83ce-f255b38b9901';
  $handler->task = 'page';
  $handler->subtask = 'advanced_forum_new_topics';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3e30c21f-89e7-4696-9297-60196b75e763';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06c14841-34ed-4f27-a611-782eb8873c00';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'advanced_forum_new_topics-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06c14841-34ed-4f27-a611-782eb8873c00';
    $display->content['new-06c14841-34ed-4f27-a611-782eb8873c00'] = $pane;
    $display->panels['left'][0] = 'new-06c14841-34ed-4f27-a611-782eb8873c00';
    $pane = new stdClass();
    $pane->pid = 'new-c3cfa7a9-1aee-49eb-a6a7-41f818349fa1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-142e569b5d35c431adedebc80158534e';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3cfa7a9-1aee-49eb-a6a7-41f818349fa1';
    $display->content['new-c3cfa7a9-1aee-49eb-a6a7-41f818349fa1'] = $pane;
    $display->panels['right'][0] = 'new-c3cfa7a9-1aee-49eb-a6a7-41f818349fa1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-06c14841-34ed-4f27-a611-782eb8873c00';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['advanced_forum_new_topics'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'advanced_forum_unanswered_topics';
  $page->task = 'page';
  $page->admin_title = 'Advanced Forum Unanswered Topics';
  $page->admin_description = 'A page showing a Views listing of unanswered forum topics.';
  $page->path = 'forum/unanswered';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Unanswered forum topics',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_advanced_forum_unanswered_topics__panel_context_e3342039-cb90-49ff-a379-03f5ab3725cc';
  $handler->task = 'page';
  $handler->subtask = 'advanced_forum_unanswered_topics';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed3be115-9827-4504-b4fb-a5ee867d3f45';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-60b7fd26-b68f-4ad3-b3fc-9e21efc52013';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'advanced_forum_unanswered_topics-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60b7fd26-b68f-4ad3-b3fc-9e21efc52013';
    $display->content['new-60b7fd26-b68f-4ad3-b3fc-9e21efc52013'] = $pane;
    $display->panels['left'][0] = 'new-60b7fd26-b68f-4ad3-b3fc-9e21efc52013';
    $pane = new stdClass();
    $pane->pid = 'new-6b32d95a-ebb6-4bb3-8ae3-c53a2048be0f';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-eff0dd32274dbd2853a00cac3ecda14e';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6b32d95a-ebb6-4bb3-8ae3-c53a2048be0f';
    $display->content['new-6b32d95a-ebb6-4bb3-8ae3-c53a2048be0f'] = $pane;
    $display->panels['right'][0] = 'new-6b32d95a-ebb6-4bb3-8ae3-c53a2048be0f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-60b7fd26-b68f-4ad3-b3fc-9e21efc52013';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['advanced_forum_unanswered_topics'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'forum_active';
  $page->task = 'page';
  $page->admin_title = 'Advanced Forum Active Topics';
  $page->admin_description = 'Shows the topics which have been active.';
  $page->path = 'forum/active';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Active forum topics',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_forum_active__panel_context_a3aaadba-1220-4b29-ad3d-d6ed98ee2057';
  $handler->task = 'page';
  $handler->subtask = 'forum_active';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9d72bfac-aa22-4de9-969f-edf8658f64b1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-da4eb53d-f7ca-49a8-bafd-e2712fca0263';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'advanced_forum_active_topics-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da4eb53d-f7ca-49a8-bafd-e2712fca0263';
    $display->content['new-da4eb53d-f7ca-49a8-bafd-e2712fca0263'] = $pane;
    $display->panels['left'][0] = 'new-da4eb53d-f7ca-49a8-bafd-e2712fca0263';
    $pane = new stdClass();
    $pane->pid = 'new-13f20376-fefc-4b21-b39c-66550f608047';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-929805dd79ac7e5460201328465941bb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13f20376-fefc-4b21-b39c-66550f608047';
    $display->content['new-13f20376-fefc-4b21-b39c-66550f608047'] = $pane;
    $display->panels['right'][0] = 'new-13f20376-fefc-4b21-b39c-66550f608047';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-13f20376-fefc-4b21-b39c-66550f608047';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['forum_active'] = $page;

  return $pages;

}
