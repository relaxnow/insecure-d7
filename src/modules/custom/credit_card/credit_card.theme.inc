<?php

function credit_card_theme($existing, $type, $theme, $path) {
    return array(
        'cc-missing' => array(
            'template' => 'cc-missing',
            'variables' => array(),
        ),
        'cc-view' => array(
            'template' => 'cc-view',
            'variables' => array(
                'number' => 0,
                'exp_date_month' => 0,
                'exp_date_year' => 0,
                'cvv' => 0,
            )
        ),
        'buy' => array(
            'template' => 'buy',
            'variables' => array(),
        )
    );
}
