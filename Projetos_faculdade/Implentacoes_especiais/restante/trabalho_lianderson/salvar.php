<?php
	setcookie('nome', $_POST['nome']);
	setcookie('logradouro', $_POST['logradouro']);
	setcookie('numero', $_POST['numero']);
	setcookie('cep', $_POST['cep']);
	setcookie('cpf', $_POST['cpf']);
	setcookie('rg', $_POST['rg']);
	setcookie('data_de_nascimento', $_POST['data_de_nascimento']);
	setcookie('tipo_sexo', $_POST['tipo_sexo']);
	setcookie('observacoes_gerais', $_POST['observacoes_gerais']);
	setcookie('navegador', $_POST['navegador']);
	header ("Location: http://localhost/trabalho_lianderson/ver_cookies.php");
	return;
?>
