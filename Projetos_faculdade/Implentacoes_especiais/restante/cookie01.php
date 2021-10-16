<?php
include './cookie02.php';
setcookie('nome','Lianderson',time()+(86400*30),"/");
$valido = validaUsurio("lianderson","123");
if ($valido==0)
{
echo "usuário não autorizado";
}
else
{
	
echo "autorizado";
}
?>