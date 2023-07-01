<?php

# Inicia a sessão
session_start();

# requere conexão com o banco
require_once 'conexao.php';

/* se tentar logar sem nenhum campo preenchido encerra a sessão, se os campos estiverem ok carrega as 
variaveis e o session de email para poder buscar no banco os dados de usuário*/
if (isset ($_POST["submetido"])) {
    if (!isset($_POST ['email']) || empty($_POST['password'])) {
        header('Location: http://localhost/login.php');
    } else {
        $email = $_POST['email'];
        $password = $_POST['password'];
        $_SESSION['senha'] = $password;
    }

    # Monta a query de busca
    $sql = "SELECT email, senha FROM usuario WHERE email = '$email' AND senha  = '$password'";
    $resultado = $conexao->query($sql);

    # Verifica se o número de linha é maior que zero
    if ($resultado->num_rows > 0) {
        while ($coluna = $resultado->fetch_assoc()) {
                header('Location: http://localhost/acesso_liberado.php');
        }
    } else {
        header('Location: http://localhost/acesso_negado.php');
    }
}
?>

<html>
    <body>
        <div class="container">
            <form style="text-align: center;" action="login.php" method="post">
                <h1 style="text-align: center;">Sistema de login para teste de<br>SQL INJECTION: Login não imune a SQLi </h1>
                <b>Usuario:</b><br>
                    <input type="email" name="email" required="required"/>
                <br>
                <br>
                <b>Senha:</b><br>
                    <input type="password" name="password"/>
                <br>
                <br>
                <b>Esqueceu sua senha?</b><br>
                <input type="checkbox" name="remember_me" value="Remember me"/>
                <br>
                <br>
                <input type=submit name="submetido" value="OK">
                <br><br><a href="http://localhost/login_imune.php">Ir para imune?</a>
            </form>
        </div>
    </body>
</html>
