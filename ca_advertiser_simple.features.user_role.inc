<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_advertiser_simple_user_default_roles() {
  $roles = array();

  // Exported role: advertiser admin
  $roles['advertiser admin'] = array(
    'name' => 'advertiser admin',
  );

  return $roles;
}
