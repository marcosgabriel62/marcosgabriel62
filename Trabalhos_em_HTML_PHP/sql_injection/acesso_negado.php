<html>
 <head>
 <h1 style="text-align: left;">Acesso negado</h1>
 </head>
 <?php
session_start();
echo "Senha usada pelo usuário: ";
echo $_SESSION['senha'] . "<br><br>";
?>
 <body>
 <a href="http://localhost/index.php">Voltar a tela inicial</a>
 <br>
 <a href="http://localhost/login_imune.php">Login imune</a>
 <br>
 <a href="http://localhost/login.php">Login não imune</a>
 </body>
</html>