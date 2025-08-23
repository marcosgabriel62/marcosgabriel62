#Exercício Python 087: Aprimore o desafio anterior, mostrando no final: 
#A) A soma de todos os valores pares digitados.
#B) A soma dos valores da terceira coluna.
#C) O maior valor da segunda linha.

matriz = []
numero = []
somapares=0
soma3coluna=0
maiorvalorlinha2=0

for c1 in range(0, 3):
    for c2 in range(0, 3):
        numero.append(int(input(f'valor para posição [{c1, c2}]: ')))

        if int%2==0:
            somapares=soma+numero
        if c2==2:
            soma3coluna=soma3coluna+numero
        if c1==1:
            if int(numero)>maiorvalorlinha2:
                maiorvalorlinha2=numero   
                 
    matriz.append(numero[:])
    numero.clear()

print('-'*23, end='')
for c1 in range(0, 3):
    print()
    for c2 in range(0, 3):
        print(f'  [{matriz[c1][c2]:^3}]', end='')
print()
print('-'*23)
print('A soma de todos os numeros pares digitados é: {}'.format(somapares))
print('A soma de todos os valores da terceira coluna é: {}'.format(soma3coluna))
print('o maior valor da segunda linha é: '.format(maiorvalorlinha2))