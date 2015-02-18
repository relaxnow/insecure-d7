<?php

function id7_custom_place_order_page() {
    $quantity = $_POST['quantity'];
    $destination = $_POST['destination'];
    drupal_set_message("Your new voucher for $quantity credits is ABC123");
    drupal_goto($destination);
}

function id7_custom_count_click_page() {
    drupal_goto($_GET['d']);
}
