<?php

// My Credit Card
function credit_card_page() {

    $card_row = credit_card_get_card_row_for_user();

    if (empty($card_row)) {
        drupal_goto('my-credit-card/set');
        return '';
    }

    return theme('cc-view', $card_row);
}

function credit_card_validate_page() {
    $query = db_select('credit_cards', 'cc');
    $query->addField('cc', 'number');
    $query->condition('number', arg(2));
    $result = $query->execute()->rowCount();

    if ($result >= 1) {
        drupal_add_http_header('Status', '400 Bad Request');
    }
}

function credit_card_remove_page() {
    db_query('DELETE FROM credit_cards WHERE uid=' . user_uid_optional_load()->uid);
    drupal_goto('my-credit-card/set');
}
