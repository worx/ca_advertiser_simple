<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_advertiser_simple_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ca_simple_advertiser';
  $strongarm->value = 0;
  $export['comment_anonymous_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_simple_advertiser';
  $strongarm->value = '0';
  $export['comment_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ca_simple_advertiser';
  $strongarm->value = '3';
  $export['comment_controls_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_simple_advertiser';
  $strongarm->value = '4';
  $export['comment_default_mode_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ca_simple_advertiser';
  $strongarm->value = '1';
  $export['comment_default_order_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ca_simple_advertiser';
  $strongarm->value = '50';
  $export['comment_default_per_page_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ca_simple_advertiser';
  $strongarm->value = '0';
  $export['comment_form_location_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ca_simple_advertiser';
  $strongarm->value = '1';
  $export['comment_preview_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ca_simple_advertiser';
  $strongarm->value = '1';
  $export['comment_subject_field_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_simple_advertiser';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-1',
    'path' => '3',
  );
  $export['content_extra_weights_ca_simple_advertiser'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_simple_advertiser';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ca_simple_advertiser'] = $strongarm;

  return $export;
}
