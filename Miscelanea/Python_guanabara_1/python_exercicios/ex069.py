#Crie um programa que leia a idade e o sexo de várias pessoas. A cada pessoa cadastrada, 
# o programa deverá perguntar se o usuário quer ou não continuar. No final, mostre:
#A) quantas pessoas tem mais de 18 anos.
#B) quantos homens foram cadastrados.
#C) quantas mulheres tem menos de 20 anos. 
pessoas_maiores_18=0
homens=0
mulheres_menores_vinte=0
sair=False
while(sair==False):
    idade=int(input('Digite sua idade: '))
    sexo=input('Digite seu sexo: M/F: ')

    if idade>18:
        pessoas_maiores_18+=1
    
    if sexo=='m':
        homens+=1
    
    if sexo=='f' and idade<=20:
        mulheres_menores_vinte+=1

    resposta=input('Deseja incluir mais uma pessoa? S/N ')
    resposta=resposta.lower()
    if resposta=='n':
        sair=True

print('O numero de pessoas maiores de 18 é: {}'.format(pessoas_maiores_18))
print('O numero de homens é: {}'.format(homens))
print('O numero de mulheres menores de 20 é: {}'.format(mulheres_menores_vinte))