para poder fazer o teste de sql injection deve ser instalado apache e rodar um servidor e um banco sql
O banco deve ter database, usuário e senha assim como na pagina conexão.php
tabela usuario, email e senha bem como dados nessas tabelas também devem ser criados
caso tenha duvidas veja na internet tutoriais de como configurar o banco sql do xampp
O objetivo do exercicio é verificar que é possivel fazer login na aplicação sem informar a senha certa do usuario usando o script malicioso
teoricamente só poderia se logar o usuario que colocar sua senha corretamente porém por não haver tratamento nos dados quando fazemos a consulta no banco de dados 
o mesmo permite a inserção de um script malicioso que permite o usuario fazer login sem a senha.
a pagina também conta com uma opção de login protegido onde o script malicioso não funciona.