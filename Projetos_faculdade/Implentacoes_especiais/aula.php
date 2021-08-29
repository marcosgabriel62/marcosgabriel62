<?php
/*echo "instrução php";
echo "<br>";
$soma = 2+2;
echo "<br>";
echo $soma;
echo "<br>";
//como declarar uma variavel

echo "<br>";
$numero = 15;
echo "<br>";
$numero_texto = "15";
echo $numero+$numero_texto; 
echo $nome;
*/
echo "valor do parametro nome: " .$_GET['campo1'];
echo "<br>";
echo "valor do parametro telefone: " .$_GET['campo2'];
?>



<html>
	<head>
		<title>
	        Aula 2
	        </title>
	</head>
<body>
<form action="teste.html" method="get">
<table width="100%" border=10>
	<tr>
		<td>
			Nome:	
			<input type="text" name="campo1"> </input>
			<br>
		</td>
	</tr>
	<tr>
		<td>
			Telefone:	<input type="text" name="campo2"> </input>
			<br>
		</td>
	</tr>
	<tr>
		<td>	
			Endereço:	<input type="text" name="campo3"> </input>
			<br>
		</td>
	</tr>

</table>

<table width="100%" border=10>
<tr>
	<td>
		nome:
	</td>
	<td>
		<input type="text" name="campo1"></input>
		</td>
</tr>	

<tr>
	<td>
		telefone:
	</td>
	<td>
		<input type="text" name="campo2"></input>
		</td>
</tr>

<tr>
	<td>
		Endereço:
	</td>
	<td>
		<input type="text" name="campo3"></input>
		</td>
</tr>

<tr>
	<td>
		Exemplo com campo preenchido:
	</td>
	<td>
		<input type="text" name="campo3" placeholder="Inserir"></input>
		</td>
</tr>

<tr>
	<td>
		<input type="button" name="campo4" value="Botão"></input>
		</td>
		<td>
		<input type="button" name="campo5" value="Botão1"></input>
		</td>
		<td>
		<input type="submit" value="enviar" ></input>
		</td>
		
</tr>


	
</table>
</form>	
</body>

</html>