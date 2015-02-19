<?php $card = credit_card_get_card_row_for_user(); if (empty($card)): echo theme('cc-missing'); else: ?>
<form action="place-order" method=post>
    <input type="hidden" name="destination" value="<?= current_path() ?>" />
    <select name="quantity" class="form-select">
        <option value="10">10 credits - €5,-</option>
        <option value="100">100 credits - €50,-</option>
        <option value="500">500 credits - €250,-</option>
    </select>
    <input type="submit" class="form-submit" value="Buy" />
</form>
<?php endif; ?>
