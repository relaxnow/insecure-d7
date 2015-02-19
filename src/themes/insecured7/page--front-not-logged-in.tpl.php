<h1>Welcome to InsecureD7!</h1>
<h2>Please log in.</h2>
<?php
$form = drupal_get_form('user_login');
$form['#action']='/user';
print render($form);
?>
<h2>Or register a new account</h2>
<?php
$form = drupal_get_form('user_register_form');
$form['#action']='/user/register';
print render($form)
?>
