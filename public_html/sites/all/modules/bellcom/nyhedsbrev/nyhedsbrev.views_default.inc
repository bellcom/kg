<?php
/**
 * @file
 * nyhedsbrev.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nyhedsbrev_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nyhedsbrevs_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyhedsbrevs feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Brødtekst';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Inkluder nyheder */
  $handler->display->display_options['fields']['field_inkluder_nyheder']['id'] = 'field_inkluder_nyheder';
  $handler->display->display_options['fields']['field_inkluder_nyheder']['table'] = 'field_data_field_inkluder_nyheder';
  $handler->display->display_options['fields']['field_inkluder_nyheder']['field'] = 'field_inkluder_nyheder';
  $handler->display->display_options['fields']['field_inkluder_nyheder']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inkluder_nyheder']['delta_offset'] = '0';
  /* Felt: Indhold: Inkluder nyheder (field_inkluder_nyheder:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_inkluder_nyheder';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Felt: Indhold: Nyhedsbrev overskrift */
  $handler->display->display_options['fields']['field_nyhedsbrev_overskrift']['id'] = 'field_nyhedsbrev_overskrift';
  $handler->display->display_options['fields']['field_nyhedsbrev_overskrift']['table'] = 'field_data_field_nyhedsbrev_overskrift';
  $handler->display->display_options['fields']['field_nyhedsbrev_overskrift']['field'] = 'field_nyhedsbrev_overskrift';
  $handler->display->display_options['fields']['field_nyhedsbrev_overskrift']['element_type'] = '0';
  $handler->display->display_options['fields']['field_nyhedsbrev_overskrift']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_nyhedsbrev_overskrift']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_nyhedsbrev_overskrift']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nyhedsbrev_overskrift']['type'] = 'text_plain';
  /* Felt: Indhold: Udgivelsesdato */
  $handler->display->display_options['fields']['field_udgivelsesdato']['id'] = 'field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['table'] = 'field_data_field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['field'] = 'field_udgivelsesdato';
  $handler->display->display_options['fields']['field_udgivelsesdato']['label'] = '';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_type'] = '0';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_udgivelsesdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udgivelsesdato']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_udgivelsesdato']['settings'] = array(
    'format_type' => 'html5_tools_iso8601',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nyhedsbrev' => 'nyhedsbrev',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Nyhedsbrev fra KG.dk';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'field_nyhedsbrev_overskrift';
  $handler->display->display_options['row_options']['link_field'] = 'nid';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'field_nyhedsbrev_overskrift';
  $handler->display->display_options['row_options']['date_field'] = 'field_udgivelsesdato';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['path'] = 'nyhedsbrev.rss';
  $translatables['nyhedsbrevs_feed'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('forfatter'),
    t('Brødtekst'),
    t('Inkluder nyheder'),
    t('Inkluder nyheder (field_inkluder_nyheder:delta)'),
    t('.'),
    t(','),
    t('Nyhedsbrev overskrift'),
    t('Navn'),
    t('Nid'),
    t('node/[nid]'),
    t('Feed'),
  );
  $export['nyhedsbrevs_feed'] = $view;

  return $export;
}
