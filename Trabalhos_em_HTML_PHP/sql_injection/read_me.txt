para poder fazer o teste de sql injection deve ser instalado o XAMPP, rodar o apache e rodar banco sql
O acesso ao banco se dá pelo link http://localhost/phpmyadmin/index.php
deve ser criado um usuario no link http://localhost/phpmyadmin/index.php?route=/server/privileges&viewing_mode=server com login e senha conforme abaixo:

usuario       = marcosgabriel62
senha         = casa12102196

deve ser criado uma database com o nome abaixo:

nome do banco dados = base_teste_sql_injection

assim a pagina de conexão deve ser capaz de se conectar com o banco

além disso você deve criar uma tabela conforme instruções abaixo:

nome da tabela = usuario
nome da coluna 1 = email
nome da coluna 2 = senha

É necessário incluir alguns dados na tabela para que seja possivel testar entrar no sistema com um usuário autêntico.

todos os dados usados até o momento podem ser editados desde que em código você também edite.

O objetivo do exercicio é verificar que é possivel fazer login na aplicação sem informar a senha certa do usuario usando o script malicioso
teoricamente só poderia se logar o usuario que colocar sua senha corretamente porém por não haver tratamento nos dados quando fazemos a consulta no banco de dados 
o mesmo permite a inserção de um script malicioso que permite o usuario fazer login sem a senha.


