<?php
	session_start();
	setcookie('qtd_calabresa', $_POST['qtd_calabresa']);
	setcookie('qtd_peperoni', $_POST['qtd_peperoni']);
	setcookie('qtd_portuguesa', $_POST['qtd_portuguesa']);
	
	function mostrar_pedido (){
	
	echo 'Pedido realizado!';
	echo '<br>';
	echo 'Quantidade de pizzas de calabresa: ' . htmlspecialchars($_COOKIE["qtd_calabresa"]);
	echo '<br>';
	echo 'Quantidade de pizzas de peperoni: ' . htmlspecialchars($_COOKIE["qtd_peperoni"]);
	echo '<br>';
	echo 'Quantidade de pizzas portuguesas: ' . htmlspecialchars($_COOKIE["qtd_portuguesa"]);
	echo '<br>';
	
	if (($_COOKIE ["qtd_calabresa"]+$_COOKIE ["qtd_peperoni"]+$_COOKIE ["qtd_portuguesa"])>=3){
		echo 'Enviar uma coca cola';
	}
	}
	logar();
	
?>
