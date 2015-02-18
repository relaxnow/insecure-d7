<?php

function credit_card_cc_masking($number) {
    return substr($number, 0, 4) . str_repeat("X", strlen($number) - 8) . substr($number, -4);
}

function credit_card_get_card_row_for_user() {
    global $user;
    return db_query('SELECT * FROM credit_cards WHERE uid=' . $user->uid)->fetchAssoc();
}
