#Refaça o DESAFIO 009, mostrando a tabuada de um número que o usuário escolher, só que agora utilizando um laço for.

numero=int(input('Digite o numero para tabuada: '))
for n in range (1, 11):
    print('{} x {} == {}\n'.format(n, numero, n*numero))

