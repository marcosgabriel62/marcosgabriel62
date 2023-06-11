para poder fazer o teste de sql injection deve ser instalado apache e rodar um servidor e um banco sql
deve ser criado um usuario com login e senha igual o do documento conexão considerando a mesma senha do documento conexão, uma database igual a do documento conexão e 
uma tabela de usuario com login e senha a sua preferencia.
O objetivo do exercicio é verificar que é possivel fazer login na aplicação sem informar a senha certa do usuario usando o script malicioso
teoricamente só poderia se logar o usuario que colocar sua senha corretamente porém por não haver tratamento nos dados quando fazemos a consulta no banco de dados 
o mesmo permite a inserção de um script malicioso que permite o usuario fazer login sem a senha.