<?php

session_start();
echo session_id();
echo $_SERVER['REMOTE_ADDR'];

echo "<pre>";
print_r($_SERVER);
echo "</pre>";