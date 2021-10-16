<?php
//error_reporting(0);
$nome ="";
$idade ="";
$nome = $_GET["nome"];
$idade = $_GET["idade"];
$id = $_GET["id"];
$mensagem = $_GET["mensagem"];
$sistema = $_GET["sistema"];
$monitor = $_GET["monitor"];
$selecao = $_GET["selecao"];

if ($selecao==0)
{
echo "Informe um item";
echo "<br>";
//header("Location:http://www.terra.com.br");
exit();

}
echo 'seu id = '.$id ;
foreach($_GET["numero"] as $numero_novo)
{
echo "<br>- " . $numero_novo . "<BR>";
}



?>
<html>
<head>
<head>
<body>
<form action="aula2.php" method="get">
<!-- Hidden esconde o valor do usuário-->

<input type="hidden" name="id" value="12"><br>
Nome: <input type="text" name="nome"><br>
Idade: <input type="text" name="idade"><br>
Mensagem:
<textarea name="mensagem" cols=10 rows=10>
</textarea>
<br>
<strong>Escolha seu S.O:<strong><br>
<br>
<input type="radio" name ="sistema" value="Window">Windows
<input type="radio" name ="sistema" value="Linux">Linux
<input type="radio" name ="sistema" value="MAC">MAC
<br>
<strong>Escolha seu monitor:<strong><br>
<br>
<input type="radio" name ="monitor" value="lgento">lgento
<input type="radio" name ="monitor" value="Sansunga">Sansung
<input type="radio" name ="monitor" value="Dell">Dell
<br>
Escolha seus números:
<br>
<input type="checkbox" name ="numero[]" value="10">10
<input type="checkbox" name ="numero[]" value="20">20
<input type="checkbox" name ="numero[]" value="30">30
<input type="checkbox" name ="numero[]" value="99">99
<br>
<br>
<strong>Selecione:</strong>

<select name ="selecao">
<option value =0>Selecione</option>
<option value =1>1</option>
<option value =2>2</option>
<option value =3>3</option>
<option value =4>4</option>
<option value =5>5</option>
</select>





<br>
<?php
if ($idade>=18)
{
echo "Habilitacao:<input type=text name=nr_habilitacao><br>";
}
?>
<br>
Oi!! <?php echo $nome?> como voce está?
<br>
sua idade e !! <?php echo $idade ?>
<br>
<input type=submit value="OK"> </form>
</form>

</body>
</html>