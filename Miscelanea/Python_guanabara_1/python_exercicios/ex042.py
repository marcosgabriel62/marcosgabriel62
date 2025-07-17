#Refaça o DESAFIO 035 dos triângulos, acrescentando o recurso de mostrar que tipo de triângulo será formado:
#EQUILÁTERO: todos os lados iguais
#ISÓSCELES: dois lados iguais, um diferente
#ESCALENO: todos os lados diferentes

n1=int(input('Digite o valor da primeira reta: '))
n2=int(input('Digite o valor da segunda reta: '))
n3=int(input('Digite o valor da terceira reta: '))

if n1<n2+n3 and n2<n1+n3 and n3<n1+n2:
    print('os segmentos acima podem gerar um triangulo\n',end='')
    if n1==n2==n3:
        print('o triangulo tem todos os lados iguais portanto EQUILÁTERO')
    elif n1!=n2!=n3:
        print('O triangulo tem todos os lados diferentes portanto ESCALENO')
    else:                                     
        print('O triangulo tem dois lados iguais e um diferente portanto é ISÓCELES')
else:
    print('Os segmentos acima não podem formar um triangulo')

