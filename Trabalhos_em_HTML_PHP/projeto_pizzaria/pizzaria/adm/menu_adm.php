<?php
	
	#requere que o usuario esteja logado como adm
	require_once 'logado_adm.php';
	
	# coloca em tela nome e id da sessão do usuário
	echo "Seja bem vindo ";
	echo $_SESSION['usuario'] . "<br><br>";
	
?>

<html>
	<head>
	<strong>Menu do administrador</strong><br>
		<title>
	        Menu do adm
	        </title>
	</head>
<body>	
<div>
		<br>
<a href="http://localhost/pizzaria/adm/criar_pizza.php">Criar pizzas</a>
		<br>
		<br>
<a href="http://localhost/pizzaria/adm/buscar_alterar_excluir_pizza.php">Buscar, alterar e exluir pizzas</a>
		<br>
		<br>
<a href="http://localhost/pizzaria/adm/pizzas_cadastradas.php">Relatório de pizzas cadastradas</a>
		<br>
		<br>
<a href="http://localhost/pizzaria/logoff.php">Logout</a>
		<br>

		
		
		
		
		
		
		
		
		
		
	