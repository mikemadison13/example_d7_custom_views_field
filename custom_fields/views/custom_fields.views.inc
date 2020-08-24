<?php
/**
 * Implements Hook Views Data Alter
 * Defines overrides to views $data to allow custom fields to be returned in the views ui
 * Note: Should allow for both Search API and Non-Search API Views
 * @param array $data of views fields and data
 * @author Mike Madison
 */
function custom_fields_views_data_alter(&$data) {
  /**
    * Defines a custom title field to be reused on views, node displays, and search results
    * For resources guides, it will link directly to the node
    * For presentations and case studies it will link to attached files (if any) and display
    * the file size.
    * For all nodes it will include the flag functionality to add/remove to Field Kits
  */
  $data['node']['custom_fields_title'] = array(
    'group' => t('Custom Fields'),
    'title' => t('Customized Title'),
    'help' => t('Modified title field that includes customz link based on content type and the Field Kit toggle link.'),
    'real field' => 'title',
    'type' => 'string',
    'field' => array(
      'handler' => 'custom_fields_title_handler',
      'type' => 'string',
      'click sortable' => TRUE,
    ),
  );
  /**
    * See custom_fields_title definition above
    * This version of the field is for the search indexed views
  */ 
  $data['search_api_index_content_index']['custom_fields_title'] = array(
    'group' => t('Custom Fields'),
    'title' => t('Customized Title'),
    'help' => t('Modified title field that includes customz link based on content type and the Field Kit toggle link.'),
    'real field' => 'title',
    'type' => 'string',
    'field' => array(
      'handler' => 'custom_fields_title_handler',
      'type' => 'string',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'SearchApiViewsHandlerArgumentString',
    ),
    'filter' => array(
      'handler' => 'SearchApiViewsHandlerFilterText',
    ),
    'sort' => array(
      'handler' => 'SearchApiViewsHandlerSort',
    ),
  );
}