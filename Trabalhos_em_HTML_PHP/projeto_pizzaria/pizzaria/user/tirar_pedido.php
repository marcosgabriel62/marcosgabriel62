<?php

#requere conexão com o banco e que o usuário esteja logado como user
require_once 'logado_user.php';
require_once '..\conexao.php';

//coloca em tela nome e id da sessão do usuário
echo "Seja bem vindo ";
echo $_SESSION['usuario'] . "<br><br>";

# verifica se há pizzas cadastradas, se não tiver informa o usuário
$sql = "SELECT tipo_pizza, valor_final FROM marcos_pizzas;";
$resultado = $conexao->query($sql);
if ($resultado->num_rows == 0) {
    echo "<script>alert('Nenhuma pizza cadastrada, contate o administrador!');</script>";
}

?>
<html>
	<head>
		<title>
	        Tirar pedido
	        </title>
	</head>
<body>	

<h1 style="text-align: center;">Tirar pedido </h1>

<form action="mostrar_pedido.php" style="text-align: center;" method="post">

<table style="margin: 0px auto; width="100%" border=05">
  <tr>
	<th>  ID  </th>
    <th> Sabor da pizza </th>
    <th> Valor unitário </th>
    <th> Quantidade </th>
  </tr>
  <br>
  
  <?php
	$sql = "SELECT id, tipo_pizza, valor_final FROM marcos_pizzas;";
	$resultado = $conexao->query($sql);
	
	while($coluna=$resultado->fetch_assoc()) {
		
		$id = $coluna["id"];
		$tipo_pizza = $coluna["tipo_pizza"];
		$valor_final = $coluna["valor_final"];
   ?>
		<tr>
			<td><?php echo $id; ?></td>
			<td><?php echo $tipo_pizza; ?></td>
			<td><?php echo "R$: ".$valor_final; ?></td>
			<td><input min="0" type="number" name= "sabor_pizza[<?php echo $tipo_pizza;?>]"></input>
			</td>
		  </tr>
			
	<?php } ?>

</table>

<br>
	<tr>
		<td align="center">
		<input type="submit" name= "fechar_pedido" value="   Fechar pedido   ">
		</td>
	</tr>		
<br>	
</body>
<br>
<a href="http://localhost/pizzaria/logoff.php">Logout</a>
<br>
<br>

</html>

