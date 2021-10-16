<?php
    session_start();
    $usuario ="";
    $senha ="";
	$usuario  = $_GET["usuario"];
	$senha = $_GET["senha"];
	$_SESSION['usuario'] = $usuario;
	$_SESSION['privilegios'] = $privilegios;
	$_SESSION['logado'] = $logado;

    function logar ($usuario, $senha){
		
		if ($usuario == 'marcosgabriel62@gmail.com' && $senha == '1234'){
			header ("Location: http://localhost/pre_prova_lianderson/administrador.php");
			$privilegios=true;
			$logado=true;
			return;
		}
		
		if ($usuario == 'marcos.koslovski@stemac.com.br' && $senha == '1234'){	
		header ("Location: http://localhost/pre_prova_lianderson/atendente.php");
		$logado=true;
		return;
		}
		header ("Location: http://localhost/pre_prova_lianderson/login.php");
		$logado=false;
		exit;	
	}
	
	logar($usuario, $senha);
	
?>