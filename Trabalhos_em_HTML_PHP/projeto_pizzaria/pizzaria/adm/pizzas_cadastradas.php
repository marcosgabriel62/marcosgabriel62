<?php
# requere estar logado como adm e conecta com o banco
require_once 'logado_adm.php';
require_once '../conexao.php';

/*entra no if só se o usuario tiver usado o botão fazendo um submit pra propria pagina
busca no banco os dados das pizzas e salva num arquivo de texto tudo o que encontrar
*/
if (isset ($_POST["gerar_relatorio"])) {
		
			$sql = "SELECT tipo_pizza, issqn, taxa_entrega, valor_informado, valor_final FROM marcos_pizzas;";
			$resultado = $conexao->query($sql);
			$arquivo = fopen("relatório_pizzas cadastradas.txt", "w");
			$valor_registros=0;
			
			if ($resultado->num_rows > 0) {
					while ($coluna = $resultado->fetch_assoc()) {
						fputs($arquivo, "Sabor da pizza: ".$coluna["tipo_pizza"]."\r\n");
						fputs($arquivo, "ISSQN: ".$coluna["issqn"]."%"."\r\n");
						fputs($arquivo, "Taxa de entrega: R$: ".$coluna["taxa_entrega"]."\r\n");
						fputs($arquivo, "Valor de custo: R$: ".$coluna["valor_informado"]."\r\n");
						fputs($arquivo, "Valor final: R$: ".$coluna["valor_final"]."\r\n");
						fputs($arquivo, "\r\n"."\r\n");	
						$valor_registros++;
					}
				fputs($arquivo, "Fim do arquivo!");		
				fclose($arquivo);	
				echo "<script>alert('Relatório de pizzas gerado! Encontrados $valor_registros registros.');</script>";
			}else {
				echo "<script>alert('Nenhuma pizza encontrada! :(');</script>";
			}
		} 
?>

<html>
<head>
    <h1 style="text-align: center;">Relatório de pizzas cadastradas </h1>
    <title>
        Relatório de pizzas cadastradas
    </title>
</head>
<body>
<div>
	<form style="text-align: center;" action="pizzas_cadastradas.php" method="post">
	<tr>
		<td align="center">
                <input type="submit" name="gerar_relatorio" value="Gerar relatório">
        </td>
	</tr>	
<br>
<br>
<a href="http://localhost/pizzaria/logoff.php">Logout</a>
<br>
<br>
<a href="http://localhost/pizzaria/adm/menu_adm.php">Voltar ao menu anterior</a>
