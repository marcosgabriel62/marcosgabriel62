<?php
session_start();

function calcular_valor_pizza ($pizza, $valorinformado)
{
	
if ($pizza==='Calabresa')  
{
    echo "<br>";
	$valorfinal = ($valorinformado+($valorinformado*0.15)+0.55);
	return $valorfinal;
}

if ($peperoni==='Peperoni')  
{
    echo "<br>";
	$valorfinal = ($valorinformado+($valorinformado*0.05)+2.50);
	return $valorfinal;
}

if ($pizza==='Portuguesa')  
{
    echo "<br>";
	$valorfinal = ($valorinformado+($valorinformado*0.18)+1.55);
	return $valorfinal;
}

}

echo "Pizza escolhida: " .$_GET['pizza'];
$pizza=$_GET['pizza'];
echo "<br>";
echo "Valor de custo informado: " .$_GET['valorinformado'];
$valorinformado=$_GET['valorinformado'];
echo "<br>";
echo "Valor final do pedido: ";
echo calcular($pizza, $valorinformado);

?>

