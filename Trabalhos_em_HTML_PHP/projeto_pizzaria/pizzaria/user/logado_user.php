<?php

session_start();

if (!isset($_SESSION ['logado']) || empty($_SESSION['permissao'])) {
    header('Location: http://localhost/pizzaria/logoff.php');
} else {
    if (($_SESSION['logado'] == true) && ($_SESSION['permissao'] != 'user')) {
        header('Location: http://localhost/pizzaria/logoff.php');
    }
}
?>