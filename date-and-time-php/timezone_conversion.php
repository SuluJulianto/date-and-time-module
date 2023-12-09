<?php

date_default_timezone_set('Asia/Jakarta');

$current_time_indonesia = time();

echo "Time in seconds since epoch: " . $current_time_indonesia . "\n";

echo "\nCurrent date and time: " . date("r", $current_time_indonesia) . "\n";

echo "\nFormatting the current date and time: " . date("y-m-d-H-i", $current_time_indonesia) . "\n";

echo "\nCurrent Year: " . date("Y", $current_time_indonesia) . "\n";
echo "Current Month of the year: " . date("F", $current_time_indonesia) . "\n";
echo "Day of the month: " . date("d", $current_time_indonesia) . "\n";
echo "Day of the week: " . date("w", $current_time_indonesia) . "\n";
?>
