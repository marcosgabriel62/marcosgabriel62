<?php

# realiza conexão com o banco

$caminho_banco = "localhost";
$usuario       = 'marcosgabriel62';
$senha         = 'casa12102196';
$banco_dados   = 'base_teste_sql_injection';
$conexao  =  new mysqli($caminho_banco,$usuario,$senha,$banco_dados );
$conexao->set_charset("utf8mb4");
?>
