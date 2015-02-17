<?php $card = id7_get_card_row_for_user(); if (empty($card)): echo theme('cc-missing'); else: ?>
<form action="buy" method=post>
    <select name="quantity" class="form-select">
        <option value=10>10 credits - €5,-</option>
        <option value=10>100 credits - €45,-</option>
        <option>500 credits - €199,-</option>
    </select>
    <input type="submit" class="form-submit" value="Buy" />
</form>
<?php endif; ?>
