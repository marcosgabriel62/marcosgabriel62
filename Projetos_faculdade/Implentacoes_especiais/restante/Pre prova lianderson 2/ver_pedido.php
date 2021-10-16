<?php


	session_start();
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
?>
