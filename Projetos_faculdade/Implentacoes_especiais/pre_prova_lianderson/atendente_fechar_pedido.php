<?php
	session_start();
	setcookie('qtd_calabresa', $_POST['qtd_calabresa']);
	setcookie('qtd_peperoni', $_POST['qtd_peperoni']);
	setcookie('qtd_portuguesa', $_POST['qtd_portuguesa']);
	
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
	}
	}
	   
	mostrar_pedido();
	tenho_que_mandar_coca();
		
?>
