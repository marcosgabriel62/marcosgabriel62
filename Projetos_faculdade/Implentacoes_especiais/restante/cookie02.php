<?php

function validaUsurio($nome,$senha) {
if($nome==='lianderson'&& $senha==='123' ){
$pass =1;
}else
{
$pass =0 ;
}
return $pass;
}