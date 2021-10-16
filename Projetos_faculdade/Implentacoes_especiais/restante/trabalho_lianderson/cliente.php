<?php
session_start();

//coloca em tela nome e id da sessão do usuário
echo "Nome do usuário: " . $_SESSION['usuario'] . "<br>";
echo "Id da sessão: " . $_SESSION['id_sessao'] . "<br>";


?>
<html>
	<head>
		<title>
	        Formulário de cadastro
	        </title>
	</head>
<body>	
<div>
	<form action ="salvar.php" method="post">
	<h1>Formulário de cadastro</h1>
	<table border="3">
		<tr>
			<td>
				<strong>Nome:<strong><br>
			</td>
			<td>
				<input type="text" name="nome"></input>
			</td>
		</tr>

		<tr>
			<td>
				<strong>Logradouro:<strong><br>
			</td>
			<td>
				<input type="text" name="logradouro"></input>
			</td>
		</tr>
		<tr>
		
		<tr>
			<td>
				<strong>Numero:<strong><br>
			</td>
			<td>
				<input type="text" name="numero"></input>
			</td>
		</tr>
		<tr>
		
		<tr>
			<td>
				<strong>CEP:<strong><br>
			</td>
			<td>
				<input type="text" name="cep"></input>
			</td>
		</tr>
		<tr>
		
		<tr>
			<td>
				<strong>CPF:<strong><br>
			</td>
			<td>
				<input type="text" name="cpf"></input>
			</td>
		</tr>
		<tr>
		
		<tr>
			<td>
				<strong>RG:<strong><br>
			</td>
			<td>
				<input type="text" name="rg"></input>
			</td>
		</tr>
		<tr>
		
		<tr>
				<td>
					<strong>Data de nascimento:<strong><br>
				</td>
				<td align="center">
					<input type="date" name="data_de_nascimento">
				</td>
		</tr>
		
		<tr>
			<td>
				<strong>Sexo:<strong><br>
			</td>
		
		<td>
				<input type="radio" value="masculino" name="tipo_sexo">
		  		Masculino<br>

		  		<input type="radio" value="feminino" name="tipo_sexo">
		  		Feminino<br>
				
				<input type="radio" value="Não binário" name="tipo_sexo">
		  		Não binário
				
			</td>
		</tr>		
		<tr>
				<td>
					<strong>Observações gerais<strong><br>
				</td>
				<td align="center">
					<textarea  name="observacoes_gerais" rows="4"></textarea>
				</td>
			</tr>
			<tr>
			<td>
					<strong>Navegador preferencial:<strong><br>
				</td>
				<td>
					<input type="checkbox" name ="navegador" value="Mozila">
					Mozila Firefox<br>
					<input type="checkbox" name ="navegador" value="Edge">
					Microsoft Edge<br>
					<input type="checkbox" name ="navegador" value="Thor">
					Thor<br>
					<input type="checkbox" name ="navegador" value="Opera">
					Opera
				</td>
			</tr>	
			<tr>
				<td align="center">
					<input type="submit" value="Enviar">
				</td>
				<td align="center">
					<input type="reset" value="Resetar informações">
				</td>
			</tr>		
			</td>
		</tr>
</table>
</form>	
</body>

</html>