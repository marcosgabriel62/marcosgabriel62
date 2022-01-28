<?php

require_once 'logado_adm.php';
require_once '../conexao.php';
require_once 'calcular_valor.php';

$tipo_pizza = "";
$taxa_entrega = "";
$valor_informado = "";
$valor_final = "";
$issqn = "";

# valida campos antes de fazer busca no banco, se não estiver ok ou dados faltantes abre script alert
if ((isset ($_POST["buscar"])) && (isset($_POST['tipo_pizza']))) {
    if (!empty($_POST['tipo_pizza'])) {

        $tipo_pizza = $_POST['tipo_pizza'];
        $sql = "SELECT tipo_pizza, issqn, taxa_entrega, valor_informado, valor_final FROM marcos_pizzas WHERE tipo_pizza = '$tipo_pizza';";
        $resultado = $conexao->query($sql);

        if ($resultado->num_rows > 0) {
            while ($coluna = $resultado->fetch_assoc()) {
                $issqn = $coluna["issqn"];
                $taxa_entrega = $coluna["taxa_entrega"];
                $valor_informado = $coluna["valor_informado"];
                $valor_final = $coluna["valor_final"];
            }
        } else {
            echo "<script>alert('Nenhuma pizza encontrada! :(');</script>";
        }
    } else {
        echo "<script>alert('Favor informar o tipo da pizza!');</script>";
    }
}

# valida campos antes de fazer busca no banco, se não estiver ok ou dados faltantes abre script alert
if (isset ($_POST["alterar"])) {

    if (isset($_POST['tipo_pizza']) && isset($_POST['issqn']) && isset($_POST['taxa_entrega']) && isset($_POST['valor_informado'])) {
        if (!empty($_POST['tipo_pizza']) && !empty($_POST['issqn']) && !empty($_POST['taxa_entrega']) && !empty($_POST['valor_informado'])) {
			
			/*faz busca no banco pra se certificar que pizza existe
			se existir altera, se não existir abre script alert avisando que não existe
			se tiver dados basicos faltando na hora de editar avisa que não vai ser possivel editar via script alert*/
            $tipo_pizza = $_POST['tipo_pizza'];
            $issqn = $_POST['issqn'];
            $taxa_entrega = $_POST['taxa_entrega'];
            $valor_informado = $_POST['valor_informado'];
            $sql = "SELECT tipo_pizza FROM marcos_pizzas WHERE tipo_pizza = '$tipo_pizza';";
            $resultado = $conexao->query($sql);

            if ($resultado->num_rows > 0) {

                # Chamando a função calcularValor
                $valor_final = calcularValor($_POST['tipo_pizza'], $_POST['issqn'], $_POST['taxa_entrega'], $_POST['valor_informado']);

                $sql = $sql = "UPDATE marcos_pizzas set tipo_pizza='$tipo_pizza', issqn ='$issqn', taxa_entrega='$taxa_entrega', valor_informado='$valor_informado', valor_final='$valor_final'  WHERE tipo_pizza = '$tipo_pizza';";
                $conexao->query($sql);

                echo "<script>alert('Pizza alterada com sucesso!');</script>";

                $tipo_pizza = "";
                $taxa_entrega = "";
                $valor_informado = "";
                $valor_final = "";
                $issqn = "";
            } else {
                echo "<script>alert('Pizza não encontrada!');</script>";
                $tipo_pizza = $_POST['tipo_pizza'];
                $issqn = $_POST['issqn'];
                $taxa_entrega = $_POST['taxa_entrega'];
                $valor_informado = $_POST['valor_informado'];
            }
        } else {
            echo "<script>alert('Campos faltantes!');</script>";
            $tipo_pizza = $_POST['tipo_pizza'];
            $issqn = $_POST['issqn'];
            $taxa_entrega = $_POST['taxa_entrega'];
            $valor_informado = $_POST['valor_informado'];
        }
    }
}

# valida campos antes de fazer busca no banco, se não encontrar ou tiver campo vazio informa que não vai ser possível excluir 
if (isset ($_POST["excluir"])) {
    if (isset($_POST['tipo_pizza'])) {
        if (!empty($_POST['tipo_pizza'])) {

            $tipo_pizza = $_POST['tipo_pizza'];
            $sql = "SELECT tipo_pizza FROM marcos_pizzas WHERE tipo_pizza = '$tipo_pizza';";
            $resultado = $conexao->query($sql);

            if ($resultado->num_rows > 0) {
                $sql = "DELETE FROM marcos_pizzas WHERE tipo_pizza = '$tipo_pizza';";
                $conexao->query($sql);

                echo "<script>alert('Pizza excluida com sucesso!');</script>";

                $tipo_pizza = "";
                $taxa_entrega = "";
                $valor_informado = "";
                $valor_final = "";
                $issqn = "";
            } else {
                echo "<script>alert('Dados não encontrados, favor verificar!!');</script>";
            }
        } else {
            echo "<script>alert('Campos faltantes, favor verificar!!');</script>";
        }
    }
}

# limpa campos no caso do usuário usar o botao de resetar os campos
if (isset ($_POST["reset"])) {

    $tipo_pizza = "";
    $taxa_entrega = "";
    $valor_informado = "";
    $valor_final = "";
    $issqn = "";
}
?>

<html>
<head>
    <h1 style="text-align: center;">Buscar, alterar e exluir pizzas </h1>
    <title>
        Alteração de pizza
    </title>
</head>
<body>
<div>
    <form style="text-align: center;" action="buscar_alterar_excluir_pizza.php" method="post">
        <tr>
            <td>
                <strong>Tipo de pizza:<strong><br>
            </td>
            <td>
                <input type="text" name="tipo_pizza" value="<?php echo $tipo_pizza ?>"></input>

            </td>
        </tr>
        <tr>
            <br>

            <br>
        <tr>
            <td>
                <strong>Porcentagem ISSQN:<strong><br>
            </td>
            <td>
                <input type="english_number_format" name="issqn" value="<?php echo $issqn ?>"></input>

            </td>
        </tr>
        <tr>
            <br>

            <br>
        <tr>
            <td>
                <strong>Valor da entrega:<strong><br>
            </td>
            <td>
                <input type="english_number_format" name="taxa_entrega" value="<?php echo $taxa_entrega ?>"></input>
            </td>
        </tr>
        <tr>
            <br>

            <br>
        <tr>
            <td>
                <strong>Valor de custo:<strong><br>
            </td>
            <td>
                <input type="english_number_format" name="valor_informado"
                       value="<?php echo $valor_informado ?>"></input>
            </td>
        </tr>
        <tr>
            <br>
            <br>
            <td>
                <strong>Valor final da pizza:<strong><br>
            </td>
            <td>
                <input class="form-control" id="disabledInput" type="text" placeholder="<?php echo $valor_final ?>"
                       disabled="">
            </td>
        </tr>
        <tr>
            <br>


        </tr>
        <tr>
            <br>
        <tr>
            <td align="center">
                <input type="submit" name="buscar" value="Pesquisar pizza">
            </td>
            <br><br>

            <td align="center">
                <input type="submit" name="alterar" value="   Alterar pizza   ">
            </td>
            <br><br>

            <td align="center">
                <input type="submit" name="reset" value=" Limpar campos ">
            </td>
            <br><br>

            <td align="center">
                <input type="submit" name="excluir" value="   Excluir pizza   ">
            </td>
            <td align="center">
        </tr>
        <br>
        <br>

        <a href="http://localhost/pizzaria/logoff.php">Logout</a>
        <br>
        <br>
        <a href="http://localhost/pizzaria/adm/menu_adm.php">Voltar ao menu anterior</a>