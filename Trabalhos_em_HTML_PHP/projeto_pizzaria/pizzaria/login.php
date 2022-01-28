<?php

# Inicia a sessão
session_start();

# requere conexão com o banco
require_once 'conexao.php';

/* se tentar logar sem nenhum campo preenchido encerra a sessão, se os campos estiverem ok carrega as 
variaveis e o session de email para poder buscar no banco os dados de usuário*/
if (isset ($_POST["submetido"])) {
    if (!isset($_POST ['email']) || empty($_POST['senha'])) {
        header('Location: http://localhost/pizzaria/logoff.php');
    } else {
        $email = $_POST['email'];
        $senha = $_POST['senha'];
        $_SESSION['usuario'] = $email;
    }

    # Monta a query de busca
    $sql = "SELECT email, senha, tipo FROM acesso WHERE email = '$email' AND senha  = '$senha'";
    $resultado = $conexao->query($sql);

    # Verifica se o número de linha é maior que zero
    if ($resultado->num_rows > 0) {
        while ($coluna = $resultado->fetch_assoc()) {

            # Se perfil adm carrega a tela menu admin
            if ($coluna["tipo"] == "adm") {
                $_SESSION["permissao"] = "adm";
                $_SESSION["logado"] = true;
                header('Location: http://localhost/pizzaria/adm/menu_adm.php');

            # Se perfil usuário comum carrega a tela tirar pedido
            } elseif ($coluna["tipo"] == "user") {
                $_SESSION["permissao"] = "user";
                $_SESSION["logado"] = true;
                header('Location: http://localhost/pizzaria/user/tirar_pedido.php');
            } else {
                header('Location: http://localhost/pizzaria/logoff.php');
            }
        }
    } else {
        header('Location: http://localhost/pizzaria/logoff.php');
    }
}
?>

<html>
    <head>
        <link href="css/login.css" rel="stylesheet">
    <head>

    <body>
        <div class="container">
            <form style="text-align: center;" action="login.php" method="post">
                <h1 style="text-align: center;">Sistema de login da pizzaria </h1>
                <b>Usuario:</b><br>
                    <input type="email" name="email"><br>
                <br>
                <b>Senha:</b><br>
                    <input type="password" name="senha"><br>
                <br>
                <input type=submit name="submetido" value="OK"></form>
            </form>
        </div>
    </body>
</html>

