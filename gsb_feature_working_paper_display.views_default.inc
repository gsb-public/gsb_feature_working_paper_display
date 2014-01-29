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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_link_document' => 'field_link_document',
  );
  $handler->display->display_options['row_options']['separator'] = '|';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_link_document']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_document']['alter']['text'] = '<a href="[field_link_document-url]" alt="PDF">PDF</a>';
  $handler->display->display_options['fields']['field_link_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_document']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_document']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_author']['delta_offset'] = '0';
  /* Field: Field: Graduation Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year']['alter']['text'] = '[field_author], [field_year]';
  $handler->display->display_options['fields']['field_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Field: Graduation Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Working Papers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'show-more-less show-more-less-num-3 show-more-less-min-5';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'faculty',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Listing */
  $handler = $view->new_display('panel_pane', 'Listing', 'working_paper_list');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 1,
      'secondary_label' => 'Narrow your results',
    ),
    'term_node_tid_depth' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'term_node_tid_depth_1' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_search_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'gsb_wysiwyg_text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 1;
  $handler->display->display_options['pager']['options']['use_go_to_top_text'] = 'Back to the Top';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser_listing';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Academic Area';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'academic-area';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    61 => 0,
    56 => 0,
    71 => 0,
    66 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    91 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    136 => 0,
    141 => 0,
    146 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'academic_area';
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Additional Topics';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'topics';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    61 => 0,
    56 => 0,
    71 => 0,
    66 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    91 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    136 => 0,
    141 => 0,
    146 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'business_insight_topic';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '10';
  /* Filter criterion: Content: Search field (field_search_field) */
  $handler->display->display_options['filters']['field_search_field_value']['id'] = 'field_search_field_value';
  $handler->display->display_options['filters']['field_search_field_value']['table'] = 'field_data_field_search_field';
  $handler->display->display_options['filters']['field_search_field_value']['field'] = 'field_search_field_value';
  $handler->display->display_options['filters']['field_search_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_search_field_value']['group'] = 1;
  $handler->display->display_options['filters']['field_search_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['operator_id'] = 'field_search_field_value_op';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['operator'] = 'field_search_field_value_op';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_search_field_value']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'Other';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['gsb_working_paper_listing'] = $view;

  return $export;
}
