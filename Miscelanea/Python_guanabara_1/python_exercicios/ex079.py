#Crie um programa onde o usuário possa digitar vários valores numéricos e cadastre-os em uma lista. 
# Caso o número já exista lá dentro, ele não será adicionado. No final, 
# serão exibidos todos os valores únicos digitados, em ordem crescente. 

minhalista=[]
numero=0
parar=False
contador=0

while(parar==False):

    numero=int(input('Digite o {}º numero: '.format(contador+1)))
    if numero in minhalista:
        print('Numero já está na sua lista. Tente outro número')
    else:
        minhalista.append(numero)
        contador=contador+1

    resposta=(str(input('Deseja continuar? S/N ')))
    resposta=resposta.upper()
    if resposta=='S' or 'N':
        if resposta=='N':
            parar=True
    else:
        print('Resposta invalida!')

print('A sua lista de numeros é: {}'.format(sorted(minhalista)))


