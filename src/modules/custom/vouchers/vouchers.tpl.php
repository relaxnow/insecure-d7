<?= theme('buy') ?>
<table>
    <thead>
        <tr>
            <th>Number</th>
            <td>Credits</td>
        </tr>
    </thead>
    <tbody>
        <?php foreach($rows as $row): ?>
            <tr><td><?=$row['nr']?></td><td><?=$row['credits']?></td></tr>";
        <?php endforeach ?>
    </tbody>
</table>
