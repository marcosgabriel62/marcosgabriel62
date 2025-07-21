#Crie um programa que leia uma frase qualquer e diga se ela é um palíndromo, desconsiderando os espaços.

#Exemplos de palíndromos: APOS A SOPA, A SACADA DA CASA, A TORRE DA DERROTA, O LOBO AMA O BOLO, ANOTARAM A DATA DA MARATONA.
frase=(str(input('Digite sua frase: ')))
frase_sem_espaco=str(frase.replace(" ", ""))
frase_invertida=frase_sem_espaco[::-1]
if frase_sem_espaco==frase_invertida:
    print('É palindromo')
else:
    print('Não é palindromo')


