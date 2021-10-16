<?php

session_start();

	$tipopizza  = $_GET["tipopizza"];
	$valor = $_GET["valor"];

function preco_Pizza ($tipopizza, $valor){
	
if ($tipopizza == 'Calabresa'){
		$valor_final=(valor+(valor*0.15)+0.55);		
			return;
		}	
if ($tipopizza == 'Peperoni'){
		$valor_final=(valor+(valor*0.05)+1.55);		
			return;
		}			

if ($tipopizza == 'Portuguesa'){
		$valor_final=(valor+(valor*0.18)+2.50);
				
}
}
	preco_Pizza($tipopizza, $valor);
	
	echo $valor_final;
?>	


