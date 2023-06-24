para poder fazer o teste de sql injection deve ser instalado apache e rodar um servidor e um banco sql
deve ser criado um usuario com login e senha conforme abaixo:

usuario       = marcosgabriel62
senha         = casa12102196

deve ser criado uma database com o nome abaixo:

nome do banco dados   = base_teste_sql_injection

assim a pagina de conexão deve ser capaz de se conectar com o banco

além disso você deve criar uma tabela usuário com colunas login e senha para que seja possivel testar entrar no sistema com um usuário autêntico.

O objetivo do exercicio é verificar que é possivel fazer login na aplicação sem informar a senha certa do usuario usando o script malicioso
teoricamente só poderia se logar o usuario que colocar sua senha corretamente porém por não haver tratamento nos dados quando fazemos a consulta no banco de dados 
o mesmo permite a inserção de um script malicioso que permite o usuario fazer login sem a senha.

você pode usar login e senha de acesso ao banco como preferir desde que o arquivo de conexão com o banco e o banco tenham os mesmos dados de usuário e senha para que a conexão seja possível.
