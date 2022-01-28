<?php
	
	session_start();
	
	# verifica se campos de session não estão vazio e se o usuario for user e não adm vai encerrar a sessão dele
	if ( !isset( $_SESSION ['logado'] ) || empty( $_SESSION['permissao']) ) {
	header('Location: http://localhost/pizzaria/logoff.php');
	}else{
		if(($_SESSION['logado'] == true) && ($_SESSION['permissao'] != 'adm')){
		header('Location: http://localhost/pizzaria/logoff.php');
		}
	}
?>
	