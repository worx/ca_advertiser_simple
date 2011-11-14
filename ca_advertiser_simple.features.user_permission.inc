<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_advertiser_simple_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_simple_advertiser content
  $permissions['create ca_simple_advertiser content'] = array(
    'name' => 'create ca_simple_advertiser content',
    'roles' => array(
      '0' => 'webmaster',
    ),
  );

  // Exported permission: delete any ca_simple_advertiser content
  $permissions['delete any ca_simple_advertiser content'] = array(
    'name' => 'delete any ca_simple_advertiser content',
    'roles' => array(
      '0' => 'webmaster',
    ),
  );

  // Exported permission: delete own ca_simple_advertiser content
  $permissions['delete own ca_simple_advertiser content'] = array(
    'name' => 'delete own ca_simple_advertiser content',
    'roles' => array(
      '0' => 'webmaster',
    ),
  );

  // Exported permission: edit any ca_simple_advertiser content
  $permissions['edit any ca_simple_advertiser content'] = array(
    'name' => 'edit any ca_simple_advertiser content',
    'roles' => array(
      '0' => 'webmaster',
    ),
  );

  // Exported permission: edit own ca_simple_advertiser content
  $permissions['edit own ca_simple_advertiser content'] = array(
    'name' => 'edit own ca_simple_advertiser content',
    'roles' => array(
      '0' => 'webmaster',
    ),
  );

  return $permissions;
}
