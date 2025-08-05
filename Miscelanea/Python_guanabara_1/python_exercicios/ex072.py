#Crie um programa que tenha uma dupla totalmente preenchida com uma contagem por extenso, 
#de zero até vinte. Seu programa deverá ler um número pelo teclado (entre 0 e 20) e mostrá-lo por extenso.

minha_tupla = ('zero', 'um', 'dois', 'três', 'quatro', 'cinco', 'seis', 'sete', 'oito', 'nove', 'dez', 'onze', 'doze', 'treze', 'quatorze', 'quinze', 'dezesseis', 'dezessete', 'dezoito', 'dezenove', 'vinte')
n1=int(input('Digite um numero: '))
print('O numero {} por extenso é {}'.format(n1, minha_tupla[n1]))
