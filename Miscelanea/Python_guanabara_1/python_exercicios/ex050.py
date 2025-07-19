#Desenvolva um programa que leia seis números inteiros e mostre a soma apenas daqueles que forem pares. 
#Se o valor digitado for ímpar, desconsidere-o.

somanumeros=int(0)

for n in range (1,7):
    numero=int(input('Digite o {}º numero: '.format(n)))
    if numero%2==0:
        somanumeros=somanumeros+numero
print('A soma de todos os pares é: {}'.format(somanumeros))