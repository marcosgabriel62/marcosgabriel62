<?php    
	$nome  ="";
    $idade  ="";
    $nome  = $_GET["nome"];
    $idade = $_GET["idade"];
?>

<html>    
	<head>    
	<head>
<body>
<form action="aula_05.php" method="get">
Nome: <input type="text" name="nome"><br>
Idade: <input type="text" name="idade"><br>
<?php
if ($idade>=18)
{
	$nome  = $_GET["nome"];
    $idade = $_GET["idade"];
	echo "Habilitacao:<input type=text name=nr_habilitacao><br>"; 
}
?>

<br>
<input type=submit value="OK"> </form>
</form>
</body>
</html>