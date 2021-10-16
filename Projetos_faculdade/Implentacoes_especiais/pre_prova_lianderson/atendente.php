<?php
session_start();

//coloca em tela nome e id da sessão do usuário
echo "Seja bem vindo ";
echo $_SESSION['usuario'] . "<br>";


?>

<html>
	<head>
		<title>
	        Realizar pedido de pizza
	        </title>
	</head>
<body>	
<div>
	<form action ="atendente_fechar_pedido.php" method="post">
	<h1>Pizzas e quantidades de pizza: </h1>
	Informe as quantidades de pizza deste pedido:
	<table border="3">
		<tr>
			<td>
				<strong>Calabresa:<strong><br>
			</td>
			<td>
				<input type="number_format" name="qtd_calabresa"></input>
			</td>
		</tr>

		<tr>
			<td>
				<strong>Peperoni:<strong><br>
			</td>
			<td>
				<input type="number_format" name="qtd_peperoni"></input>
			</td>
		</tr>
		<tr>
		
		<tr>
			<td>
				<strong>Portuguesa:<strong><br>
			</td>
			<td>
				<input type="number_format" name="qtd_portuguesa"></input>
			</td>
		</tr>
		<tr>
		</table>
		
		<br>
		
		<tr>
			<td align="center">
				<input type="reset" value="Resetar informações">
				</td>
				<br><br>
				<td align="center">
				<input type="submit" value="Realizar pedido">
			</td>
		</tr>
		
		