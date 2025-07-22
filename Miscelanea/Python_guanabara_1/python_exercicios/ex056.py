#Desenvolva um programa que leia o nome, idade e sexo de 4 pessoas. No final do programa, 
#mostre: a média de idade do grupo, qual é o nome do homem mais velho e quantas mulheres têm menos de 20 anos.

somaIdades=0
maiorIdadeHomem=0
mulheresComMenosDe20=0
somaIdades=0


for n in range (1,5):
    nome=str(input('Pessoa nº {} digite seu nome: '.format(n)))
    idade=int(input('Pessoa nº {} digite o sua idade: '.format(n)))
    sexo=str(input('Pessoa nº {} digite seu sexo: M/F: '.format(n)))

    if sexo=='F' and idade<20:
        mulheresComMenosDe20=mulheresComMenosDe20+1

    if sexo=='M' and idade>maiorIdadeHomem:
        nomeMaisVelho=nome
        idadeMaisVelho=idade

    somaIdades=somaIdades+idade

print('A idade média do grupo é: {} anos'.format(somaIdades/4))
print('O nome do homem mais velho é {} e sua idade é {} anos'.format(nomeMaisVelho, idadeMaisVelho))
print('Existem {} mulheres com menos de 20 anos'.format(mulheresComMenosDe20))