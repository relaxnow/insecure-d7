<?php

/**
 * Implements hook_submit.
 */
function id7_custom_user_register_form_submit($form, &$form_state) {
    $form_state['redirect'] = 'my-credit-card/set';
}
