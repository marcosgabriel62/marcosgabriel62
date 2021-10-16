<?php
session_start();

function calcular_valor_pizza ($tipo_pizza, $valorinformado){
	
if ($tipo_pizza==='Calabresa')  
{
    echo "<br>";
	$valorfinal = ($valorinformado+($valorinformado*0.15)+0.55);
	return $valorfinal;
}

if ($tipo_pizza==='Peperoni')  
{
    echo "<br>";
	$valorfinal = ($valorinformado+($valorinformado*0.05)+2.50);
	return $valorfinal;
}

if ($tipo_pizza==='Portuguesa')  
{
    echo "<br>";
	$valorfinal = ($valorinformado+($valorinformado*0.18)+1.55);
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


?>

