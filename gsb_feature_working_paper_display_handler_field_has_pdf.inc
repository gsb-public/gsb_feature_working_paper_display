<?php

/**
 * @file
 * Contains gsb_feature_working_paper_display_handler_field_has_pdf.
 */

/**
 * Allows the visibility field to be output as a form element.
 */
class gsb_feature_working_paper_display_handler_field_has_pdf extends views_handler_field_field {

  protected $nid;

  /**
   * {@inheritdoc}
   */
  function render_item($count, $item) {
    $out = null;
    if ($item['raw']['value'] != 0) {
      $out =
        '<a href="' . base_path() . 'gsb-cmis/gsb-cmis-download-auth/' .
          $this->nid . '" class="gsb-cmis-download-pdf" target="_blank">' .
          t('PDF') .
        '</a>';
    }
    return $out;
  }

  /**
   * {@inheritdoc}
   */
  function advanced_render($values) {
    $this->nid = $values->nid;
    return parent::advanced_render($values);
  }  

}