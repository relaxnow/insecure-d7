<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function insecured7_form_install_configure_form_alter(&$form, $form_state) {

    $form['site_information']['site_name']['#default_value'] = 'Insecured7';
    $form['site_information']['site_mail']['#default_value'] = 'boy@ibuildings.nl';

    $form['admin_account']['account']['name']['#default_value'] = 'admin';
    $form['admin_account']['account']['mail']['#default_value'] = 'boy@ibuildings.nl';

    $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Rome';
    $form['server_settings']['site_default_country']['#default_value'] = 'IT';

    $form['update_notifications']['update_status_module']['#default_value'] = array(1 => FALSE, 2 => FALSE);

    return $form;
}

/**
 * Implements hook_install_tasks().
 */
function insecured7_install_tasks() {
    return array(
        'insecured7_install_theme' => array(
            'display_name' => st('Install Default Theme'),
        ),
        'insecured7_links' => array(
            'display name' => st('Install Links page'),
        ),
    );
}

/**
 * Install default themes.
 */
function insecured7_install_theme() {
    // Any themes without keys here will get numeric keys and so will be enabled,
    // but not placed into variables.
    $enable = array(
        'bootstrap',
        'theme_default' => 'insecured7',
        'admin_theme' => 'seven',
    );
    theme_enable($enable);

    foreach ($enable as $var => $theme) {
        if (!is_numeric($var)) {
            variable_set($var, $theme);
        }
    }

    // Disable the default Bartik theme.
    theme_disable(array('bartik'));
}

function insecured7_links() {
    $node = new stdClass();
    $node->title = "Links";
    $node->type = "links_page";
    node_object_prepare($node); // Sets some defaults. Invokes hook_prepare() and hook_node_prepare().
    $node->language = LANGUAGE_NONE; // Or e.g. 'en' if locale is enabled
    $node->uid = 1;
    $node->status = 1; //(1 or 0): published or not
    $node->promote = 0; //(1 or 0): promoted to front page
    $node->comment = 0; // 0 = comments disabled, 1 = read only, 2 = read/write
    $node->body[$node->language][0]['value']   = <<<BODY
https://play.google.com/store/apps/details?id=com.incorporateapps.teleport&hl=en|Get the App for Android!
https://itunes.apple.com/us/app/teleporter-console/id858342907?mt=8|Get the App for iOS!
https://owasp.org|Open Web Application Security Project
BODY;
    $node->body[$node->language][0]['summary'] = $node->body[$node->language][0]['value'];
    $node->body[$node->language][0]['format'] = 'plain_text';
    $submitted = 'node-submitted';
    $node->$submitted = 0;

    $node = node_submit($node); // Prepare node for saving
    node_save($node);
    //drupal_set_message( "Node with nid " . $node->nid . " saved!\n");
    $form_state['redirect']  = 'SOME WHERE';
}
