<?php


/**
 * Calcula o valor final da pizza
 *
 * @param $tipo_pizza
 * @param $issqn
 * @param $taxa_entrega
 * @param $valor_informado
 * @return float|int|mixed
 */
 
function calcularValor($tipo_pizza, $issqn, $taxa_entrega, $valor_informado)
{
    return ($valor_informado + ($valor_informado * ($issqn / 100)) + $taxa_entrega);
}

?>