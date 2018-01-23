<?php
/**
 * @file
 * nyhedsbrev.features.inc
 */

/**
 * Implements hook_views_api().
 */
function nyhedsbrev_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nyhedsbrev_node_info() {
  $items = array(
    'nyhedsbrev' => array(
      'name' => t('Nyhedsbrev'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Internt navn'),
      'help' => '',
    ),
  );
  return $items;
}
