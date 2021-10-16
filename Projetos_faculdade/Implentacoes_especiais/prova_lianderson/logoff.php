<?php
    session_start();

    function logoff (){
		
		session_destroy();
		
		setcookie('valorcalabresa', null, -1);	
		setcookie('valorpeperoni', null, -1);	
		setcookie('valorportuguesa', null, -1);	
		setcookie('qtd_calabresa', null, -1);	
		setcookie('qtd_peperoni', null, -1);	
		setcookie('qtd_portuguesa', null, -1);	
		
		header ("Location: http://localhost/prova_lianderson/login.php");
		exit;	
	}
	
	logoff();
	
?>