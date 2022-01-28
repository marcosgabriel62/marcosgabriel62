<?php
	
	#requere que esteja logado como adm
	require_once 'logado_adm.php';
	#requere que esteja conectado ao banco
	require_once '../conexao.php';
	#requere para calcular valores das pizzas
	require_once 'calcular_valor.php';
	
	#limpa campos pois estariam undefined
	$tipo_pizza = "";
	$issqn = "";
	$taxa_entrega = "";
	$valor_informado = "";
	
	/*verifica se os campos estão todos preenchidos, busca no banco se a pizza já existe
	se faltar campos informa campos faltantes, se pizza ja existir informa que já existe e que é impossivel salvar outra
	ao fim limpa os campos caso inclusão seja ok, se não carrega de novo os dados*/
	if(isset ($_POST["submetido"])){
			if(isset($_POST['tipo_pizza']) && isset($_POST['issqn']) && isset($_POST['taxa_entrega']) && isset($_POST['valor_informado'])){
					if ( !empty( $_POST['tipo_pizza']) && !empty( $_POST['issqn']) && !empty( $_POST['taxa_entrega']) && !empty( $_POST['valor_informado']) ) {
							$tipo_pizza = $_POST['tipo_pizza'];
							$issqn = $_POST['issqn'];
							$taxa_entrega = $_POST['taxa_entrega'];
							$valor_informado = $_POST['valor_informado'];
							$sql  = "SELECT tipo_pizza FROM marcos_pizzas WHERE tipo_pizza = '$tipo_pizza';";
							$resultado = $conexao->query($sql);
							if ($resultado->num_rows > 0){
									echo "<script>alert('Pizza já cadastrada, favor verificar!!');</script>";
									$tipo_pizza = $_POST['tipo_pizza'];
							}else{
									$valor_final=(calcularValor($_POST['tipo_pizza'], $_POST['issqn'], $_POST['taxa_entrega'], $_POST['valor_informado']));
									$sql = "INSERT INTO marcos_pizzas(tipo_pizza, issqn, taxa_entrega, valor_informado, valor_final) VALUES('$tipo_pizza','$issqn','$taxa_entrega', '$valor_informado', '$valor_final');" ;   
									$conexao->query($sql);
									echo "<script>alert('Pizza criada com sucesso!');</script>";
									echo "<script>alert('Valor final da pizza: R$: $valor_final');</script>";
									$tipo_pizza = "";
									$taxa_entrega = "";
									$valor_informado = "";
									$issqn = "";
							}
					}else{
							echo "<script>alert('Dados faltantes, impossível criar!!');</script>";
							$tipo_pizza = $_POST['tipo_pizza'];
							$issqn = $_POST['issqn'];
							$taxa_entrega = $_POST['taxa_entrega'];
							$valor_informado = $_POST['valor_informado'];	
					}
			}
	}

# limpa os campos em caso do usuário usar o botão reset	
if(isset ($_POST["reset"])){
			
				$tipo_pizza = "";
				$taxa_entrega = "";
				$valor_informado = "";
				$issqn = "";
		
	}	
?>
	
<html>
	<head>
	<h1 style="text-align: center;">Criar pizza </h1>
		<title>
	        Criar pizza
	        </title>
	</head>
<body>	
<div>
	<form style="text-align: center;" action ="criar_pizza.php" method="post">
	<tr>
		<td>
			<strong>Tipo de pizza:<strong><br>
			</td>
			<td>
				<input type="text" name="tipo_pizza" value="<?php echo $tipo_pizza?>"></input>
		
			</td>
	</tr>
		<tr>	
		<br>
		
	<br>	
	<tr>
		<td>
			<strong>Porcentagem ISSQN:<strong><br>
			</td>
			<td>
				<input type="english_number_format" name="issqn" value="<?php echo $issqn?>"></input>

			</td>
	</tr>
		<tr>	
		<br>
		
	<br>
	<tr>
		<td>
			<strong>Valor da entrega:<strong><br>
			</td>
			<td>
				<input type="english_number_format" name="taxa_entrega" value="<?php echo $taxa_entrega?>"></input>
			</td>
	</tr>
		<tr>	
		<br>	
		
<br>
	<tr>
		<td>
			<strong>Valor de custo:<strong><br>
			</td>
			<td>
				<input type="english_number_format" name="valor_informado" value="<?php echo $valor_informado?>"></input>
			</td>
	</tr>

		
		
	</tr>
		<tr>
		<br>		
		<br>
			<tr>
				<td align="center">
				<input type="submit" name= "resetar" value="Resetar campos">
				</td>
				<br><br>
				
				<td align="center">
				<input type="submit" name= "submetido" value="   Criar pizza   ">
				</td>
		<br>
		<br>	
		
<a href="http://localhost/pizzaria/logoff.php">Logout</a>
<br>
<br>
<a href="http://localhost/pizzaria/adm/menu_adm.php">Voltar ao menu anterior</a>

		
		
		
		
		
		
		
		
		
		
		
	