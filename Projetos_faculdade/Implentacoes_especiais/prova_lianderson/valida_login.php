<?php
    session_start();
    $usuario ="";
    $senha ="";
	$usuario  = $_GET["usuario"];
	$senha = $_GET["senha"];
	$_SESSION['usuario'] = $usuario;

    function logar ($usuario, $senha){
		
		if ($usuario == 'marcosgabriel62@gmail.com' && $senha == '1234'){
			header ("Location: http://localhost/prova_lianderson/administrador.php");
			return;
		}
		
		if ($usuario == 'marcos.koslovski@stemac.com.br' && $senha == '1234'){	
		header ("Location: http://localhost/prova_lianderson/atendente.php");
		return;
		}
		header ("Location: http://localhost/prova_lianderson/login.php");
		exit;	
	}
	
	logar($usuario, $senha);
	
?>