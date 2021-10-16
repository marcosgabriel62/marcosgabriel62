<?php
    //reporte_erros(0);
    $usuario ="";
    $senha ="";
    $usuario  = $_GET["usuario"];
    $senha = $_GET["senha"];

    function validaUsuario ($usuario, $senha){
		if ($usuario == 'marcos' && $senha == 'admin'){
			echo "Você está logado!";
			return;
		}
		
	header ("Location: http://localhost/login03.php");
	exit;
	
	}
	validaUsuario($usuario, $senha);
?>

