<?php

function id7_custom_menu() {
    $items = array();

    $items['place-order'] = array(
        'page callback' => 'id7_custom_place_order_page',
        'access callback' => true,
    );
    $items['my-vouchers'] = array(
        'page callback' => 'id7_custom_my_vouchers_page',
        'access callback' => true,
    );
    $items['my-credit-card'] = array(
        'page callback' => 'id7_custom_my_credit_card_page',
        'access callback' => true,
    );
        $items['my-credit-card/validate/%']  = array(
            'page callback' => 'id7_custom_my_credit_card_validate_page',
            'access callback' => true,
        );
        $items['my-credit-card/set']  = array(
            'page callback' => 'drupal_get_form',
            'page arguments' => array('id7_custom_credit_card_edit_form'),
            'access callback' => true,
        );
        $items['my-credit-card/remove'] = array(
            'page callback' => 'id7_custom_credit_card_remove_page',
            'access callback' => true,
        );

//    $items['all-vouchers'] = array(
//        'page callback' => 'id7_vouchers_all',
//        'access callback' => true,
//    );
//
//    $items['disable-user'] = array(
//        'page callback' => 'id7_disable_user',
//        'access callback' => true,
//    );

    return $items;
}
