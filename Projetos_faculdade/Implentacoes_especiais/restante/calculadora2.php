<?php

function calcular ($valora, $valorb, $operacao)
{
	
if ($operacao==='1')         // soma
{
    echo "<br>";
	$valorretorno = $valora+$valorb;
	return $valorretorno;
}

if ($operacao==='2')         // subtração
{
    echo "<br>";
	$valorretorno = $valora-$valorb;
	return $valorretorno;
}

if ($operacao==='3')         // divisao
{
    echo "<br>";
	$valorretorno = $valora/$valorb;
	return $valorretorno;
}

if ($operacao==='4')         // multiplicação
{
    echo "<br>";
	$valorretorno = $valora*$valorb;
	return $valorretorno;
}
}


echo "valor do primeiro numero: " .$_GET['numero1'];
$valora=$_GET['numero1'];
echo "<br>";
echo "valor segundo numero: " .$_GET['numero2'];
$valorb=$_GET['numero2'];
echo "<br>";
echo "digite a operacao: " .$_GET['numero3'];
$operacao=$_GET['numero3'];
echo "<br>";
echo calcular($valora, $valorb, $operacao);
?>

