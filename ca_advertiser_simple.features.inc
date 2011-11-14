<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_advertiser_simple_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_advertiser_simple_imagecache_default_presets() {
  $items = array(
    'ca_simple_advertiser' => array(
      'presetname' => 'ca_simple_advertiser',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '310',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ca_simple_advertiser_25' => array(
      'presetname' => 'ca_simple_advertiser_25',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '227',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ca_simple_advertiser_half' => array(
      'presetname' => 'ca_simple_advertiser_half',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '220',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ca_simple_advertiser_sidebar' => array(
      'presetname' => 'ca_simple_advertiser_sidebar',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '230',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ca_simple_advertiser_thumb' => array(
      'presetname' => 'ca_simple_advertiser_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function ca_advertiser_simple_node_info() {
  $items = array(
    'ca_simple_advertiser' => array(
      'name' => t('Advertiser'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_advertiser_simple_views_api() {
  return array(
    'api' => '2',
  );
}
