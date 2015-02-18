<?php

function id7_custom_menu() {
    $items = array();

    $items['place-order'] = array(
        'page callback' => 'id7_custom_place_order_page',
        'access callback' => true,
    );
    $items['cc'] = array(
        'page callback' => 'id7_custom_count_click_page',
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
