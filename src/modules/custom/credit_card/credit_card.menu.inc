<?php

function credit_card_menu() {
    $items = array();

    $items['my-credit-card'] = array(
        'page callback' => 'credit_card_page',
        'access callback' => true,
    );
    $items['my-credit-card/validate/%']  = array(
        'page callback' => 'credit_card_validate_page',
        'access callback' => true,
    );
    $items['my-credit-card/set']  = array(
        'page callback' => 'drupal_get_form',
        'page arguments' => array('credit_card_edit_form'),
        'access callback' => true,
    );
    $items['my-credit-card/remove'] = array(
        'page callback' => 'credit_card_remove_page',
        'access callback' => true,
    );

    return $items;
}
