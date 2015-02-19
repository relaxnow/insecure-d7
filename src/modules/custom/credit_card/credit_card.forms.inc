<?php

/**
 * Implements hook_form.
 */
function credit_card_edit_form($form, &$form_state) {
    drupal_set_title('Register your credit card');
    $form['credit_card_number'] = array(
        '#type' => 'textfield',
        '#maxlength'=> 19,
        '#size' => 19,
        '#title' => 'Credit Card Number',
        '#required' => true,
    );

    $form['expiration_date'] = array(
        '#title' => 'Expiration Date',
        '#type' => 'date_select',
        '#date_format' => 'm-Y',
        '#default_value' => date('m-Y', strtotime('+1 year')),
        '#date_year_range' => '-1:+10',
        '#required' => TRUE,
        '#date_label_position' => 'within'
    );

    $form['credit_card_cvv'] = array(
        '#type' => 'textfield',
        '#title' => 'CVV Code',
        '#size' => 4,
        '#maxlength' => 4,
        '#description' => 'Your 3 or 4 digit security code on the back of your card.',
        '#required' => true,
    );

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Submit'),
    );
    $form['#attached']['js'] = array(
        drupal_get_path('module', 'credit_card') . '/credit_card.js',
    );

    return $form;
}

/**
 * Implements hook_submit.
 */
function credit_card_edit_form_submit($form, &$form_state)
{
    $user = user_uid_optional_load();
    db_query(
        "INSERT INTO credit_cards (uid, number, exp_date_month, exp_date_year, cvv)
         VALUES(
            {$user->uid},
            '{$form_state['input']['credit_card_number']}',
            {$form_state['input']['expiration_date']['month']},
            {$form_state['input']['expiration_date']['year']},
            '{$form_state['input']['credit_card_cvv']}'
         )"
    );
    drupal_goto('my-credit-card');
}
