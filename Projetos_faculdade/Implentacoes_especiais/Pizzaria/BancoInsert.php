<?php
$caminho_banco = "193.123.108.138";
$usuario = 'iae';
$senha = 'iae';
$banco_dados = 'iae';

$conexao = new mysqli($caminho_banco,$usuario,$senha,$banco_dados );
$conexao->set_charset("utf8mb4");

if($conexao->connect_error)
{
//echo "Falha na conexao";
die("Falha de conecao".$conexao->connect_error);
}else{
echo "Conectado!";
}
$id = $_GET['id'];
$nome = $_GET['nome_usuario'];
$telefone = $_GET['telefone'];
$endereco = $_GET['endereco_usuario'];

//$sql = "INSERT INTO pessoa(nome,telefone,endereco) VALUES('$nome','$telefone','$endereco');" ;
$sql = "DELETE FROM pessoa WHERE id = '$id'";

if ($conexao->query($sql)===TRUE)
{
echo "Deletado com sucesso!";
} else
{
echo "Erro:"."$sql"."<br>".$conexao->error;
}

?>

<html>
<head>
<title>
Aula 2
</title>
</head>
<body>
<form action = "BancoDelete.php" method="get">
<table width="100%" border=10>
<!-- A tag "table" é usada para definir tabelas. -->
<tr>
<td>
ID: <input type = "text" name="id"> </input>
<br>
</td>
</tr>

<tr>
<!--A tag "tr" que significa "table row" é usada para definir uma LINHA -->
<td>
<!-- "td" significa "Table Data" e define cada uma das células da tabela -->
Nome: <input type = "text" name="nome_usuario"> </input>
<br> <!--quebra-de-linha "br" produz uma quebra de linha em um texto (carriage-return)-->
</td>
</tr>

<tr>
<td>
Telefone: <input type = "text" name="telefone"> </input>
<br>
</td>
</tr>
<tr>
<td>
Endereço: <input type = "text" name="endereco_usuario"> </input>
<br>
</td>
</tr>
<tr>
<td>
<input type = "button" name = "campo7" value = "Pesquisar"> </input>
</td>
<td>
<input type = "button" name = "campo8" value = "Editar"> </input>
</td>
<td>
<input type = "submit" name = "campo9" value = "Enviar"> </input>
</td>
</tr>
</table>
</form>
</body>
</html>




?>