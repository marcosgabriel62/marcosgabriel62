"""
Faça um programa que peça ao usuário para digitar um número inteiro,
informe se este número é par ou ímpar. Caso o usuário não digite um número
inteiro, informe que não é um número inteiro.
"""
numero_str=input('Digite um numero: ')

try:
    numero_int=int(numero_str)
    if numero_int % 2 == 0:
        print(f'O numero {numero_int} é par')
    else:
        print(f'O numero {numero_int} é impar')

except:
    print('Não foi digitado um numero inteiro')


