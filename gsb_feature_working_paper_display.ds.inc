<?php
/**
 * @file
 * gsb_feature_working_paper_display.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_working_paper_display_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_listing';
  $ds_view_mode->label = 'Teaser listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_listing'] = $ds_view_mode;

  return $export;
}
