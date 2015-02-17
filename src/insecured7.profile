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
    );
}

/**
 * Install default themes.
 */
function insecured7_install_theme() {
    // Any themes without keys here will get numeric keys and so will be enabled,
    // but not placed into variables.
    $enable = array(
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

function insecured7_homepage() {

}
