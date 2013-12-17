<?php
/**
 * @file
 * gsb_feature_working_paper_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_working_paper_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gsb_working_paper_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB Working Paper Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_link_document' => 'field_link_document',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Document Link */
  $handler->display->display_options['fields']['field_link_document']['id'] = 'field_link_document';
  $handler->display->display_options['fields']['field_link_document']['table'] = 'field_data_field_link_document';
  $handler->display->display_options['fields']['field_link_document']['field'] = 'field_link_document';
  $handler->display->display_options['fields']['field_link_document']['label'] = '';
  $handler->display->display_options['fields']['field_link_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_document']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_document']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author Sunet Id Reference (field_author_sunet_id_reference) */
  $handler->display->display_options['arguments']['field_author_sunet_id_reference_target_id']['id'] = 'field_author_sunet_id_reference_target_id';
  $handler->display->display_options['arguments']['field_author_sunet_id_reference_target_id']['table'] = 'field_data_field_author_sunet_id_reference';
  $handler->display->display_options['arguments']['field_author_sunet_id_reference_target_id']['field'] = 'field_author_sunet_id_reference_target_id';
  $handler->display->display_options['arguments']['field_author_sunet_id_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_author_sunet_id_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_author_sunet_id_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_author_sunet_id_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_author_sunet_id_reference_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'working_paper' => 'working_paper',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'case_listing_entity_view');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'faculty',
  );
  $export['gsb_working_paper_listing'] = $view;

  return $export;
}
