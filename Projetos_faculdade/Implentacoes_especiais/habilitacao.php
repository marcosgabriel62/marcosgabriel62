<?php   
	$nome  ="";
    $idade  ="";
	$numero  ="";
    $nome  = $_GET["nome"];
    $idade = $_GET["idade"];
	$numero = $_GET["numero"];
	
?>

<html>    
	<head> 
		<title>Habilitação</title>	
	</head>
	<body>
		<form action="habilitacao.php" method="get">
			Nome: <input type="text" name="nome" value="<?php echo $nome?>"</input><br>
			Idade: <input type="text" name="idade" value= "<?php echo $idade?>"</input><br>
			<?php
			if ($idade>=18)
			{
				echo "Habilitacao:<input type=text name=numero value = $numero></input><br>"; 
			}
			?>
			<input type=submit value="OK"> 
			</form>
	</body>
</html>