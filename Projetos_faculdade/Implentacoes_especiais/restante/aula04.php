http://dontpad.com/liandersonfranco

<?php



//error_reporting(1);
 //echo "instrução PHP";
 //$soma  =  2+2;
 //echo "<br>";
 //echo $soma;
 // como declarar uma variavel
//$nome = "Lianderson";
//echo  $nome;
//$numero        = 15;
//$numero_texto  = "15";
//echo "<br>";
//echo  $numero+$numero_texto;
//$calculo  =  $numero + 25;
//print $calculo;
///================================
$nome     = $_GET['nome_usuario'];
$telefone = $_GET['telefone'];

echo "<br>";
echo "valor do parametro nome".$nome;
echo "<br>";
echo "valor do parametro Telefone".$telefone;
// um constante


define("NOME"," VALOR DA CONSTANTE");
echo "<br>";
echo NOME;
$soma =1;

$soma -=1;
//Concatenação de string
$texto  = "Hoje vai chover";
$texto .= " Muito";
echo "<br>";
echo  $texto;


if (1==='1')         // diferente
{
    echo "<br>";
    echo  "1 igual 1";
}else
{
    echo  "1 diferente 1";
    
}    
$a = 1;
$b=  1;      

echo  $a/$b ==1 ? "O resultado é == 1": "O resultado é != 1";
echo "<br>";

function calcular($a,$b){
   $soma = $a+$b; 
  return $soma;  
}
echo "<br>";
//echo calcular(100, 100);
?>
<html>
    <form action="teste">
        <input type="text" name="nome" value="<?php echo calcular(100, 100);?>" />
        <table border="1">
            <thead>
                <tr>
                    <th>Valor</th>
                    <th>Valor2</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><?php echo calcular(120, 10);?></td>
                    <td><?php echo calcular(12, 80);?></td>
                </tr>
                <tr>
                    <td><?php echo $texto;?></td>
                    <td><?php echo calcular(120, 10);?></td>
                </tr>
            </tbody>
        </table>

    </form>
</html>