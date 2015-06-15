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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_has_pdf' => 'field_has_pdf',
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
  /* Field: Content: Author & Co-Authors */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['label'] = '';
  $handler->display->display_options['fields']['field_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authors']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_authors']['settings'] = array(
    'view_mode' => 'existing_node_teaser',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_authors']['delta_offset'] = '0';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_of_publication']['id'] = 'field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['table'] = 'field_data_field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['field'] = 'field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_year_of_publication']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_publication']['alter']['text'] = '[field_authors][field_year_of_publication]';
  $handler->display->display_options['fields']['field_year_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_publication']['settings'] = array(
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
  /* Sort criterion: Content: Year (field_year_of_publication) */
  $handler->display->display_options['sorts']['field_year_of_publication_value']['id'] = 'field_year_of_publication_value';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['table'] = 'field_data_field_year_of_publication';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['field'] = 'field_year_of_publication_value';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['order'] = 'DESC';
  /* Sort criterion: Content: Month (field_month) */
  $handler->display->display_options['sorts']['field_month_value']['id'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['table'] = 'field_data_field_month';
  $handler->display->display_options['sorts']['field_month_value']['field'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['order'] = 'DESC';
  /* Sort criterion: Content: Day (field_pub_date_day) */
  $handler->display->display_options['sorts']['field_pub_date_day_value']['id'] = 'field_pub_date_day_value';
  $handler->display->display_options['sorts']['field_pub_date_day_value']['table'] = 'field_data_field_pub_date_day';
  $handler->display->display_options['sorts']['field_pub_date_day_value']['field'] = 'field_pub_date_day_value';
  $handler->display->display_options['sorts']['field_pub_date_day_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author &amp; Co-Authors (field_authors) */
  $handler->display->display_options['relationships']['field_authors_value']['id'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_authors_value']['table'] = 'field_data_field_authors';
  $handler->display->display_options['relationships']['field_authors_value']['field'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_authors_value']['label'] = 'Field Authors';
  $handler->display->display_options['relationships']['field_authors_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['relationship'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['label'] = 'Faculty';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Has PDF */
  $handler->display->display_options['fields']['field_has_pdf']['id'] = 'field_has_pdf';
  $handler->display->display_options['fields']['field_has_pdf']['table'] = 'field_data_field_has_pdf';
  $handler->display->display_options['fields']['field_has_pdf']['field'] = 'field_has_pdf';
  $handler->display->display_options['fields']['field_has_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_has_pdf']['alter']['text'] = '[nid]';
  $handler->display->display_options['fields']['field_has_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_has_pdf']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Author & Co-Authors */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['label'] = '';
  $handler->display->display_options['fields']['field_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authors']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_authors']['settings'] = array(
    'view_mode' => 'existing_node_teaser',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_authors']['delta_offset'] = '0';
  /* Field: Content: Month */
  $handler->display->display_options['fields']['field_month']['id'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['table'] = 'field_data_field_month';
  $handler->display->display_options['fields']['field_month']['field'] = 'field_month';
  $handler->display->display_options['fields']['field_month']['label'] = '';
  $handler->display->display_options['fields']['field_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_month']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_month']['alter']['text'] = ', [field_month] ';
  $handler->display->display_options['fields']['field_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_month']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Day */
  $handler->display->display_options['fields']['field_pub_date_day']['id'] = 'field_pub_date_day';
  $handler->display->display_options['fields']['field_pub_date_day']['table'] = 'field_data_field_pub_date_day';
  $handler->display->display_options['fields']['field_pub_date_day']['field'] = 'field_pub_date_day';
  $handler->display->display_options['fields']['field_pub_date_day']['label'] = '';
  $handler->display->display_options['fields']['field_pub_date_day']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_date_day']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pub_date_day']['alter']['text'] = ' [field_pub_date_day]';
  $handler->display->display_options['fields']['field_pub_date_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_date_day']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_of_publication']['id'] = 'field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['table'] = 'field_data_field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['field'] = 'field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_year_of_publication']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_publication']['alter']['text'] = '[field_authors][field_month][field_pub_date_day][field_year_of_publication]';
  $handler->display->display_options['fields']['field_year_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_publication']['settings'] = array(
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Field: Display on Profile (field_profile_visibility) */
  $handler->display->display_options['filters']['field_profile_visibility_value']['id'] = 'field_profile_visibility_value';
  $handler->display->display_options['filters']['field_profile_visibility_value']['table'] = 'field_data_field_profile_visibility';
  $handler->display->display_options['filters']['field_profile_visibility_value']['field'] = 'field_profile_visibility_value';
  $handler->display->display_options['filters']['field_profile_visibility_value']['relationship'] = 'field_authors_value';
  $handler->display->display_options['filters']['field_profile_visibility_value']['value'] = array(
    1 => '1',
  );
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author &amp; Co-Authors (field_authors) */
  $handler->display->display_options['relationships']['field_authors_value']['id'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_authors_value']['table'] = 'field_data_field_authors';
  $handler->display->display_options['relationships']['field_authors_value']['field'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_authors_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
  /* Filter criterion: Content: Stanford GSB Affiliations or Initiatives (field_centers_research_programs) */
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['id'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['table'] = 'field_data_field_centers_research_programs';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['field'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['operator_id'] = 'field_centers_research_programs_tid_op';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['label'] = 'CIRCLE';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['operator'] = 'field_centers_research_programs_tid_op';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['identifier'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    241 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    201 => 0,
    221 => 0,
    216 => 0,
    226 => 0,
    231 => 0,
    246 => 0,
    236 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
  );
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['vocabulary'] = 'centers_research_programs';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['error_message'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Working Papers';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: EVA Field Form */
  $handler = $view->new_display('entity_view', 'EVA Field Form', 'eva_field_form');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_year' => 'field_year',
    'field_profile_visibility' => 'field_profile_visibility',
    'edit_node_modal' => 'edit_node_modal',
    'delete_node_modal' => 'delete_node_modal',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_visibility' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node_modal' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node_modal' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: GSB: Modal node add link */
  $handler->display->display_options['header']['gsb_node_modal_add_link']['id'] = 'gsb_node_modal_add_link';
  $handler->display->display_options['header']['gsb_node_modal_add_link']['table'] = 'gsb__global';
  $handler->display->display_options['header']['gsb_node_modal_add_link']['field'] = 'gsb_node_modal_add_link';
  $handler->display->display_options['header']['gsb_node_modal_add_link']['bundle'] = 'working_paper';
  $handler->display->display_options['header']['gsb_node_modal_add_link']['text'] = 'Create a new working paper';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no working papers for this faculty.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author &amp; Co-Authors (field_authors) */
  $handler->display->display_options['relationships']['field_authors_value']['id'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_authors_value']['table'] = 'field_data_field_authors';
  $handler->display->display_options['relationships']['field_authors_value']['field'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_authors_value']['label'] = 'Field Authors';
  $handler->display->display_options['relationships']['field_authors_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['relationship'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_person_fac_single_ref_target_id']['label'] = 'Faculty';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_of_publication']['id'] = 'field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['table'] = 'field_data_field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['field'] = 'field_year_of_publication';
  $handler->display->display_options['fields']['field_year_of_publication']['label'] = 'Publication Year';
  $handler->display->display_options['fields']['field_year_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_publication']['settings'] = array(
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
  /* Field: Field: Display on Profile */
  $handler->display->display_options['fields']['field_profile_visibility']['id'] = 'field_profile_visibility';
  $handler->display->display_options['fields']['field_profile_visibility']['table'] = 'field_data_field_profile_visibility';
  $handler->display->display_options['fields']['field_profile_visibility']['field'] = 'field_profile_visibility';
  $handler->display->display_options['fields']['field_profile_visibility']['relationship'] = 'field_authors_value';
  $handler->display->display_options['fields']['field_profile_visibility']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_visibility']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_profile_visibility']['use_form_element'] = TRUE;
  /* Field: Content: Edit link (in modal) */
  $handler->display->display_options['fields']['edit_node_modal']['id'] = 'edit_node_modal';
  $handler->display->display_options['fields']['edit_node_modal']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_modal']['field'] = 'edit_node_modal';
  $handler->display->display_options['fields']['edit_node_modal']['label'] = '';
  $handler->display->display_options['fields']['edit_node_modal']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link (in modal) */
  $handler->display->display_options['fields']['delete_node_modal']['id'] = 'delete_node_modal';
  $handler->display->display_options['fields']['delete_node_modal']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node_modal']['field'] = 'delete_node_modal';
  $handler->display->display_options['fields']['delete_node_modal']['label'] = '';
  $handler->display->display_options['fields']['delete_node_modal']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Year (field_year_of_publication) */
  $handler->display->display_options['sorts']['field_year_of_publication_value']['id'] = 'field_year_of_publication_value';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['table'] = 'field_data_field_year_of_publication';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['field'] = 'field_year_of_publication_value';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'faculty' => 'faculty',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'faculty',
  );
  $handler->display->display_options['show_on'] = 'form';
  $export['gsb_working_paper_listing'] = $view;

  $view = new view();
  $view->name = 'working_paper_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Working Paper Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'content-pane-listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'views_content_pane';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_year_of_publication|field_year_of_publication_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'views_content_pane';
  /* Relationship: Content: Author &amp; Co-Authors (field_authors) */
  $handler->display->display_options['relationships']['field_authors_value']['id'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_authors_value']['table'] = 'field_data_field_authors';
  $handler->display->display_options['relationships']['field_authors_value']['field'] = 'field_authors_value';
  $handler->display->display_options['relationships']['field_authors_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Year (field_year_of_publication) */
  $handler->display->display_options['sorts']['field_year_of_publication_value']['id'] = 'field_year_of_publication_value';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['table'] = 'field_data_field_year_of_publication';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['field'] = 'field_year_of_publication_value';
  $handler->display->display_options['sorts']['field_year_of_publication_value']['order'] = 'DESC';
  /* Sort criterion: Content: Month (field_month) */
  $handler->display->display_options['sorts']['field_month_value']['id'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['table'] = 'field_data_field_month';
  $handler->display->display_options['sorts']['field_month_value']['field'] = 'field_month_value';
  $handler->display->display_options['sorts']['field_month_value']['order'] = 'DESC';
  /* Sort criterion: Content: Day (field_pub_date_day) */
  $handler->display->display_options['sorts']['field_pub_date_day_value']['id'] = 'field_pub_date_day_value';
  $handler->display->display_options['sorts']['field_pub_date_day_value']['table'] = 'field_data_field_pub_date_day';
  $handler->display->display_options['sorts']['field_pub_date_day_value']['field'] = 'field_pub_date_day_value';
  $handler->display->display_options['sorts']['field_pub_date_day_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  /* Filter criterion: Field: Faculty Name (field_person_fac_single_ref) */
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['id'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['table'] = 'field_data_field_person_fac_single_ref';
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['field'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['relationship'] = 'field_authors_value';
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['group'] = 2;
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['expose']['operator_id'] = 'field_person_fac_single_ref_target_id_op';
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['expose']['label'] = 'Faculty Author';
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['expose']['operator'] = 'field_person_fac_single_ref_target_id_op';
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['expose']['identifier'] = 'field_person_fac_single_ref_target_id';
  $handler->display->display_options['filters']['field_person_fac_single_ref_target_id']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Academic Area (field_academic_area_unlimited) */
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['id'] = 'field_academic_area_unlimited_tid';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['table'] = 'field_data_field_academic_area_unlimited';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['field'] = 'field_academic_area_unlimited_tid';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['operator_id'] = 'field_academic_area_unlimited_tid_op';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['label'] = 'Academic Areas';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['operator'] = 'field_academic_area_unlimited_tid_op';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['identifier'] = 'field_academic_area_unlimited_tid';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['vocabulary'] = 'academic_area';
  $handler->display->display_options['filters']['field_academic_area_unlimited_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Additional Topics (field_business_insight_topic) */
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['id'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['table'] = 'field_data_field_business_insight_topic';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['field'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['operator_id'] = 'field_business_insight_topic_tid_op';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['label'] = 'Additional Topics';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['operator'] = 'field_business_insight_topic_tid_op';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['identifier'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['vocabulary'] = 'business_insight_topic';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Stanford GSB Affiliations or Initiatives (field_centers_research_programs) */
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['id'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['table'] = 'field_data_field_centers_research_programs';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['field'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['operator_id'] = 'field_centers_research_programs_tid_op';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['label'] = 'CIRCLE';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['operator'] = 'field_centers_research_programs_tid_op';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['identifier'] = 'field_centers_research_programs_tid';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    201 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['vocabulary'] = 'centers_research_programs';
  $handler->display->display_options['filters']['field_centers_research_programs_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Keywords (field_tag) */
  $handler->display->display_options['filters']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['filters']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tag_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator_id'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['identifier'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
  );
  $handler->display->display_options['filters']['field_tag_tid']['vocabulary'] = 'tag';

  /* Display: Working Paper Filters */
  $handler = $view->new_display('panel_pane', 'Working Paper Filters', 'working_paper_filters_pane');
  $handler->display->display_options['pane_title'] = 'Working Papers: Multiple Criteria';
  $handler->display->display_options['pane_category']['name'] = 'Customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'title' => '',
    'field_person_fac_single_ref_target_id' => '',
    'field_first_name_value' => '',
    'field_last_name_value' => '',
    'field_academic_area_unlimited_tid' => '',
    'field_business_insight_topic_tid' => '',
    'field_region_tid' => '',
    'field_centers_research_programs_tid' => '',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.field_cta_action',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node IDs',
    ),
  );
  $export['working_paper_filters'] = $view;

  return $export;
}
