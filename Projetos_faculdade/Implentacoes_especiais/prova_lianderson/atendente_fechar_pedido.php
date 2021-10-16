<?php
	session_start();
	
	function cookies (){
	setcookie('qtd_calabresa', $_POST['qtd_calabresa']);
	setcookie('qtd_peperoni', $_POST['qtd_peperoni']);
	setcookie('qtd_portuguesa', $_POST['qtd_portuguesa']);
	}
	
	function mostrar_pedido (){
	echo 'Seguem dados do pedido realizado!';
	echo '<br><br>';
	echo 'Quantidade de pizzas de calabresa: ' . htmlspecialchars($_COOKIE["qtd_calabresa"]);
	echo '<br>';
	echo 'Quantidade de pizzas de peperoni: ' . htmlspecialchars($_COOKIE["qtd_peperoni"]);
	echo '<br>';
	echo 'Quantidade de pizzas portuguesas: ' . htmlspecialchars($_COOKIE["qtd_portuguesa"]);
	echo '<br><br>';
	}
	
	function tenho_que_mandar_coca(){
	
	if (($_COOKIE ["qtd_calabresa"]+$_COOKIE ["qtd_peperoni"]+$_COOKIE ["qtd_portuguesa"])>=3){
		echo 'Enviar uma coca cola!';
		echo '<br>';
		echo '<br>';
	}
	}
	
	function calcular(){
	$valorcalabresa= $_COOKIE['valorcalabresa'];
	$valorpeperoni = $_COOKIE['valorpeperoni'];
	$valorportuguesa = $_COOKIE['valorportuguesa'];
	$qtd_calabresa= $_COOKIE['qtd_calabresa'];
	$qtd_peperoni = $_COOKIE['qtd_peperoni'];
	$qtd_portuguesa = $_COOKIE['qtd_portuguesa'];
	$valorfinal = (($valorcalabresa*$qtd_calabresa)+($valorpeperoni*$qtd_peperoni)+($valorportuguesa*$qtd_portuguesa));
	echo 'O valor final do pedido é: R$: ';
	echo $valorfinal;
	echo '<br>';
	if (($_COOKIE ["qtd_calabresa"]+$_COOKIE ["qtd_peperoni"]+$_COOKIE ["qtd_portuguesa"])>=15){
	$bonusatendente=$valorfinal*0.05;
	echo '<br>';
	echo 'Valor do bônus é: R$: ';
	echo $bonusatendente;
	}
	}
	
	cookies();
	mostrar_pedido();
	tenho_que_mandar_coca();
	calcular();
?>
<html>
<br>
<a href="http://localhost/prova_lianderson/login.php"><button>Voltar a tela principal</button></a>
<br>
<br>
<a href="http://localhost/prova_lianderson/logoff.php">Logoff</a>