<?php
$start_time = microtime(true);
if( strpos(file_get_contents("./lists.csv"),"123.194.235.37") !== false) {
        
}

$end_time = microtime(true);

echo "[php] File check finished in " .($end_time - $start_time) * 1000 . "ms\n";