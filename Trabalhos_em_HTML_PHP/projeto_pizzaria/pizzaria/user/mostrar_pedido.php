<?php

#requere conexão com o banco e que o usuário esteja logado como user
require_once 'logado_user.php';
require_once '..\conexao.php';

$valor=0;
$qtd_final=0;
$valor_final=0;
$bonusatendente=0;
		
foreach ($_POST['sabor_pizza'] as $tipo_pizza => $v){	
	if($v>0){
			echo 'Sabor da pizza: '.$tipo_pizza;
			echo '<br>';
			echo 'Quantidade da pizza: '.$v;
			echo '<br>';
			$sql = "SELECT valor_final FROM marcos_pizzas WHERE tipo_pizza = '$tipo_pizza';";
			$resultado = $conexao->query($sql);	
			$coluna = $resultado->fetch_assoc();
			$valor_da_pizza = $coluna['valor_final'];
			$valor_total_linha = $valor_da_pizza * $v;
			echo 'Valor das pizzas: R$: '.$valor_total_linha;
			$valor_final=$valor_final+$valor_total_linha;
			$qtd_final=$qtd_final+$v;
			echo '<br><br>';	
	}	
}

if ($qtd_final>0){				
	echo 'Valor final do pedido: R$: '.$valor_final.'<br>';	
	echo 'Quantidade total de pizzas: '.$qtd_final.' pizzas'.'<br>';
	if ($qtd_final>=3){
		echo 'enviar uma coca-cola!'.'<br>';
	}		
	if ($qtd_final>=15){
		$bonusatendente=$valor_final*0.05;
		echo 'Valor do bônus do atendente é: R$: '.$bonusatendente.'<br>';
	}
}else{
	echo 'Pedido foi fechado sem nenhuma pizza.'.'<br><br>'. 'Para incluir pizzas retorne a pagina anterior.'.'<br>';
}	
			
echo '<br>';
	
?>
		<a href="http://localhost/pizzaria/user/tirar_pedido.php">Voltar ao menu anterior</a>
		<br>
        <br>
        <a href="http://localhost/pizzaria/logoff.php">Logout</a>
        
        