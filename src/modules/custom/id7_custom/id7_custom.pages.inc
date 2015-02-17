<?php

function id7_custom_my_credit_card_page() {

    $card_row = id7_custom_get_card_row_for_user();

    if (empty($card_row)) {
        drupal_goto('my-credit-card/set');
        return '';
    }

    return theme('cc-view', $card_row);
}

function id7_custom_my_credit_card_validate_page() {
    if (db_query('SELECT * FROM credit_cards WHERE number=' . arg(2))->rowCount() === 1) {
        header("HTTP/1.1 400 Bad Request");
    }
}

function id7_custom_credit_card_remove_page() {
    db_query('DELETE FROM credit_cards WHERE uid=' . user_uid_optional_load()->uid);
    drupal_goto('my-credit-card/set');
}

function id7_custom_my_vouchers_page() {
    $html = theme('buy');
    $fh = fopen(drupal_realpath(file_default_scheme() . '://vouchers.csv'), 'r');

    $html .= <<<HTML
<table>
    <thead>
        <tr>
            <th>Voucher Nr</th>
            <td>Credits</td>
        </tr>
    </thead>
    <tbody>
HTML;

    fgetcsv($fh);
    while ($line = fgetcsv($fh)) {
        $voucherNr = $line[1];
        $voucherCredits = $line[2];

        $html .= "<tr><td>$voucherNr</td><td>$voucherCredits</td></tr>";
    }

    $html .= <<<HTML
    </tbody>
</table>
HTML;

    return $html;
}


