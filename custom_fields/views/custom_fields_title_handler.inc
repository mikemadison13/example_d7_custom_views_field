<?php

class custom_fields_title_handler extends entity_views_handler_field_text {
  /**
   * This handler works for both standard content and solr index powered views
   * Values for Content are found in $values->nid
   * Values for SOLR Indexes are found in $values->entity
   * @param $values
   * @return string 
   * @author Mike Madison
   */
  public function render($values) {
    if (isset($values->nid)) {
      $node = node_load($values->nid);
      return _customTitle($node);
    } 
    elseif (isset($values->entity)) {
      $node = node_load($values->entity);
      return _customTitle($node);
    }
  }
}