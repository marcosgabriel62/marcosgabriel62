#Faça um programa que leia 5 valores numéricos e guarde-os em uma lista. 
#No final, mostre qual foi o maior e o menor valor digitado e as suas respectivas posições na lista. 
minhalista=[]
for n in range (0,5):
    numero=int(input('Digite o {}º numero: '.format(n+1)))
    minhalista.append(numero)
menornumero=min(minhalista)
maiornumero=max(minhalista)
print('O menor numero foi {} que estava na posição {}'.format(menornumero, minhalista.index(menornumero)))
print('O maior numero foi {} que estava na posição {}'.format(maiornumero, minhalista.index(maiornumero)))


