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

  // Exported menu link: main-menu_blog-and-pubs:forum/148
  $menu_links['main-menu_blog-and-pubs:forum/148'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/148',
    'router_path' => 'forum/%',
    'link_title' => 'Blog and Pubs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog-and-pubs:forum/148',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_data-and-analytics:forum/144',
  );
  // Exported menu link: main-menu_data-and-analytics:forum/144
  $menu_links['main-menu_data-and-analytics:forum/144'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/144',
    'router_path' => 'forum/%',
    'link_title' => 'Data and Analytics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_data-and-analytics:forum/144',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_forum:forum',
  );
  // Exported menu link: main-menu_data-dashboards:forum/147
  $menu_links['main-menu_data-dashboards:forum/147'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/147',
    'router_path' => 'forum/%',
    'link_title' => 'Data Dashboards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_data-dashboards:forum/147',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_data-and-analytics:forum/144',
  );
  // Exported menu link: main-menu_dsi-website:forum/140
  $menu_links['main-menu_dsi-website:forum/140'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/140',
    'router_path' => 'forum/%',
    'link_title' => 'DSI Website',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dsi-website:forum/140',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_data-and-analytics:forum/144',
  );
  // Exported menu link: main-menu_event-discussions:forum/11
  $menu_links['main-menu_event-discussions:forum/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/11',
    'router_path' => 'forum/%',
    'link_title' => 'Event Discussions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_event-discussions:forum/11',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_other-forums:forum/155',
  );
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
  // Exported menu link: main-menu_future-leaders-tsc:forum/149
  $menu_links['main-menu_future-leaders-tsc:forum/149'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/149',
    'router_path' => 'forum/%',
    'link_title' => 'Future Leaders TSC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_future-leaders-tsc:forum/149',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_problem-solving-networks:forum/145',
  );
  // Exported menu link: main-menu_general-discussion:forum/1
  $menu_links['main-menu_general-discussion:forum/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/1',
    'router_path' => 'forum/%',
    'link_title' => 'General Discussion',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_general-discussion:forum/1',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_other-forums:forum/155',
  );
  // Exported menu link: main-menu_grants-and-crowdsourcing:forum/156
  $menu_links['main-menu_grants-and-crowdsourcing:forum/156'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/156',
    'router_path' => 'forum/%',
    'link_title' => 'Grants and Crowdsourcing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_grants-and-crowdsourcing:forum/156',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_innovation-acceleration-forums:forum/153',
  );
  // Exported menu link: main-menu_highlighted-articles:highlights
  $menu_links['main-menu_highlighted-articles:highlights'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'highlights',
    'router_path' => 'highlights',
    'link_title' => 'Highlighted Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_highlighted-articles:highlights',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_implementations-and-hubs:forum/157
  $menu_links['main-menu_implementations-and-hubs:forum/157'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/157',
    'router_path' => 'forum/%',
    'link_title' => 'Implementations and Hubs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_implementations-and-hubs:forum/157',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_innovation-acceleration-forums:forum/153',
  );
  // Exported menu link: main-menu_innovation-acceleration-forums:forum/153
  $menu_links['main-menu_innovation-acceleration-forums:forum/153'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/153',
    'router_path' => 'forum/%',
    'link_title' => 'Innovation Acceleration Forums',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_innovation-acceleration-forums:forum/153',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_forum:forum',
  );
  // Exported menu link: main-menu_knowledge-management:forum/151
  $menu_links['main-menu_knowledge-management:forum/151'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/151',
    'router_path' => 'forum/%',
    'link_title' => 'Knowledge Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_knowledge-management:forum/151',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_problem-solving-networks:forum/145',
  );
  // Exported menu link: main-menu_new-research-partnership-building:forum/150
  $menu_links['main-menu_new-research-partnership-building:forum/150'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/150',
    'router_path' => 'forum/%',
    'link_title' => 'New Research Partnership Building',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_new-research-partnership-building:forum/150',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_problem-solving-networks:forum/145',
  );
  // Exported menu link: main-menu_other-forums:forum/155
  $menu_links['main-menu_other-forums:forum/155'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/155',
    'router_path' => 'forum/%',
    'link_title' => 'Other Forums',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_other-forums:forum/155',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_forum:forum',
  );
  // Exported menu link: main-menu_problem-solving-networks:forum/145
  $menu_links['main-menu_problem-solving-networks:forum/145'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/145',
    'router_path' => 'forum/%',
    'link_title' => 'Problem-solving Networks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_problem-solving-networks:forum/145',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_forum:forum',
  );
  // Exported menu link: main-menu_scholarship:forum/154
  $menu_links['main-menu_scholarship:forum/154'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/154',
    'router_path' => 'forum/%',
    'link_title' => 'Scholarship',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_scholarship:forum/154',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_innovation-acceleration-forums:forum/153',
  );
  // Exported menu link: main-menu_student-innovation-challenges:forum/152
  $menu_links['main-menu_student-innovation-challenges:forum/152'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum/152',
    'router_path' => 'forum/%',
    'link_title' => 'Student Innovation Challenges',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_student-innovation-challenges:forum/152',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_problem-solving-networks:forum/145',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog and Pubs');
  t('DSI Website');
  t('Data Dashboards');
  t('Data and Analytics');
  t('Event Discussions');
  t('Forum');
  t('Forum Home');
  t('Future Leaders TSC');
  t('General Discussion');
  t('Grants and Crowdsourcing');
  t('Highlighted Articles');
  t('Implementations and Hubs');
  t('Innovation Acceleration Forums');
  t('Knowledge Management');
  t('New Research Partnership Building');
  t('Other Forums');
  t('Problem-solving Networks');
  t('Scholarship');
  t('Student Innovation Challenges');


  return $menu_links;
}
