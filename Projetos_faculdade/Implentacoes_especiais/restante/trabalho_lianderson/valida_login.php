<?php
    session_start();
	$usuario ="";
    $senha ="";
	$id_sessao="";
	$usuario  = $_GET["usuario"];
	$senha = $_GET["senha"];
	$_SESSION['usuario'] = $usuario;
	$_SESSION['id_sessao'] = session_id();

    function validaUsuario ($usuario, $senha){
		if ($usuario == 'marcos' && $senha == '1234'){
			header ("Location: http://localhost/trabalho_lianderson/cliente.php");
			return;
		}
		header ("Location: http://localhost/trabalho_lianderson/login.php");
		exit;			
	}
	validaUsuario($usuario, $senha);
	
?>

