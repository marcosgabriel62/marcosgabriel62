<?php
	session_start();
	echo 'Informações salvas!';
	echo '<br>';
	echo "Id da sessão: ";
	echo $_SESSION["id_sessao"];
	echo '<br>';
	echo "Nome do usuário: ";
	echo $_SESSION['usuario'];
	echo '<br>';
	echo 'Nome cadastrado: ' . htmlspecialchars($_COOKIE["nome"]);
	echo '<br>';
	echo 'Logradouro cadastrado: ' . htmlspecialchars($_COOKIE["logradouro"]);
	echo '<br>';
	echo 'Numero cadastrado: ' . htmlspecialchars($_COOKIE["numero"]);
	echo '<br>';
	echo 'CEP cadastrado: ' . htmlspecialchars($_COOKIE["cep"]);
	echo '<br>';
	echo 'CPF cadastrado: ' . htmlspecialchars($_COOKIE["cpf"]);
	echo '<br>';
	echo 'RG cadastrado: ' . htmlspecialchars($_COOKIE["rg"]);
	echo '<br>';
	echo 'Data de nascimento cadastrada: ' . htmlspecialchars($_COOKIE["data_de_nascimento"]);
	echo '<br>';
	echo 'Sexo cadastrado: ' . htmlspecialchars($_COOKIE["tipo_sexo"]);
	echo '<br>';
	echo 'Observações gerais cadastradas: ' . htmlspecialchars($_COOKIE["observacoes_gerais"]);
	echo '<br>';
	echo 'Preferencias de navegador cadastradas: ' . htmlspecialchars($_COOKIE["navegador"]);
	echo '<br>';
?>



