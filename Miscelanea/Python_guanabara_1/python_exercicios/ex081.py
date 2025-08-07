#Crie um programa que vai ler vários números e colocar em uma lista. Depois disso, mostre:
#A) Quantos números foram digitados.
#B) A lista de valores, ordenada de forma decrescente.
#C) Se o valor 5 foi digitado e está ou não na lista.

minhalista=[]
numero=0
parar=False
contador=0

while(parar==False):

    numero=int(input('Digite o {}º numero: '.format(contador+1)))
    minhalista.append(numero)
    contador=contador+1

    resposta=(str(input('Deseja continuar? S/N ')))
    resposta=resposta.upper()
    if resposta=='S' or 'N':
        if resposta=='N':
            parar=True
    else:
        print('Resposta invalida!')

print('A sua lista de numeros é: {}'.format(sorted(minhalista, reverse=True)))
print('A quantidade de numeros incluidas foi: {}'.format(contador))
if 5 in minhalista:
    print('O numero 5 foi digitado e está na lista')
else:
    print('O numero 5 não foi digitado e não está na lista')

