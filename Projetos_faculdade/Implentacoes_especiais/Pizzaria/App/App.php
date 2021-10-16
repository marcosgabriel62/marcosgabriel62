<?php
include_once './Atendente.php';
include_once './acesso/Acesso.php';
$acesso = new Acesso();
$acesso->setlogin("lianderson");
$acesso->setSenha("1234");
echo $acesso->Login();

//$usuario = "lianderson";
//$senha = "123";
//echo $acesso->Login($usuario, $senha);
//if($acesso->Login($usuario, $senha)==1)
//{
// echo "Liberado";
// }

//$atendente = new Atendente();
//$atendente->setNome("Lianderson");
//echo $atendente->getNome();
//echo $atendente->Cadastrar("Lianderson",3334747);