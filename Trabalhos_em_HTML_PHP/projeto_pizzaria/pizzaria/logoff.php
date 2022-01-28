<?php
session_start();

#destroi a sessão e volta pra tela de login

function logoff()
{
    session_destroy();
    header("Location: http://localhost/pizzaria/login.php");
    exit;
}

logoff();
?>