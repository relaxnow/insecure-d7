<?php $card = credit_card_get_card_row_for_user(); if (empty($card)): echo theme('cc-missing'); else: ?>
<form action="place-order" method=post>
    <input type="hidden" name="destination" value="<?= current_path() ?>" />
    <select name="quantity" class="form-select">
        <option value=10>10 credits - €5,-</option>
        <option value=10>100 credits - €45,-</option>
        <option>500 credits - €199,-</option>
    </select>
    <input type="submit" class="form-submit" value="Buy" />
</form>
<?php endif; ?>
