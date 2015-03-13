<?php

header('X-XSS-Protection: 0');

$databases = array(
  'default' => array(
    'default' => array(
      'driver' => 'mysql',
      'database' => 'insecured7',
      'username' => 'root',
      'password' => '',
      'host' => 'localhost',
    ),
  ),
);

$update_free_access = FALSE;
$drupal_hash_salt = file_exists('/etc/insecured7.salt') ? file_get_contents('/etc/insecured7.salt') : '';
$base_url = 'http://192.168.33.10';  // NO trailing slash!

ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

$conf['site_name'] = 'InsecureD7';

$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';
drupal_fast_404();
$conf['allow_authorize_operations'] = FALSE;

if (file_exists('settings.local.php')) {
  require 'settings.local.php';
}
