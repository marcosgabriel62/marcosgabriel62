#Desenvolva um programa que leia quatro valores pelo teclado e guarde-os em uma tupla. No final, mostre:
#A) Quantas vezes apareceu o valor 9.
#B) Em que posição foi digitado o primeiro valor 3.
#C) Quais foram os números pares.

n1=int(input('Digite o primeiro número: '))
n2=int(input('Digite o segundo número: '))
n3=int(input('Digite o terceiro numero: '))
n4=int(input('Digite o quarto numero: '))

tupla=(n1, n2, n3, n4)

print('o numero 9 apareceu {} vezes'.format(tupla.count(9)))

if tupla.count(3)>0:
    print('O numero 3 apareceu pela primeira vez na posição {}'.format(tupla.index(3)))
for n in range (0,4):
   if tupla[n]%2==0:
      print('o número {} na posição {} é par'.format(tupla[n], n))





