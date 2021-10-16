<?php
session_start();

function calcular_valor_pizza ($tipo_pizza, $valorinformado){
	
if ($tipo_pizza==='Calabresa')  
{
    echo "<br>";
	$valorcalabresa = ($valorinformado+($valorinformado*0.07)+0.75);
	$valorfinal = $valorcalabresa;
	setcookie('valorcalabresa', $valorcalabresa, time()+3600);
	return $valorfinal;
}

if ($tipo_pizza==='Peperoni')  
{
    echo "<br>";
	$valorpeperoni = ($valorinformado+($valorinformado*0.025)+2.58);
	$valorfinal = $valorpeperoni;
	setcookie('valorpeperoni', $valorpeperoni, time()+3600);
	return $valorfinal;
}

if ($tipo_pizza==='Portuguesa')  
{
    echo "<br>";
	$valorportuguesa = ($valorinformado+($valorinformado*0.01)+3.21);
	$valorfinal = $valorportuguesa;
	setcookie('valorportuguesa', $valorportuguesa, time()+3600);
	return $valorfinal;
}

}

$tipo_pizza  = $_GET["tipo_pizza"];
$valorinformado = $_GET["valorinformado"];

echo "O sabor de pizza informado foi: " .$tipo_pizza;
echo "<br>";
echo "<br>";
echo "O valor de custo informado: R$: " .$valorinformado;
echo "<br>";
echo "O valor final da pizza é de R$: " .calcular_valor_pizza($tipo_pizza, $valorinformado);
echo "<br>";
echo "<br>";
echo "deseja cadastrar outra pizza?";
echo "<br>";

?>
<html>
<br>
<a href="http://localhost/prova_lianderson/administrador.php"><button>Nova pizza</button></a>
<br>
<br>
<a href="http://localhost/prova_lianderson/login.php"><button>Voltar a tela principal</button></a>
<br>
<br>
<a href="http://localhost/prova_lianderson/logoff.php">Logout</a>
</html>
