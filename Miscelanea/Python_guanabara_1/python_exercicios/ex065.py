#Crie um programa que leia vários números inteiros pelo teclado. No final da execução, 
# mostre a média entre todos os valores e qual foi o maior e o menor valores lidos. 
#O programa deve perguntar ao usuário se ele quer ou não continuar a digitar valores.

n=0
soma=0
cont=0
maior=0
menor=0
sair=False

while(sair!=True):
    n=int(input('digite um numero: '))
    cont=cont+1
    soma=soma+n

    if cont==1:
        maior = menor = n

    if n>maior:
        maior=n

    if n<menor:
        menor=n
                
    resposta=input('Deseja informar outro numero? S/N ')
    resposta=resposta.upper()    
    if resposta=='S' or resposta=='N':
        if resposta=='N':
            sair=True
    else:
        print('Resposta inválida')

print('A soma de todos os numeros digitados foi: {}'.format(soma))
print('A quantidade de numeros digitados foi: {}'.format(cont))
print('A média dos numeros digitados foi: {}'.format(soma/cont))