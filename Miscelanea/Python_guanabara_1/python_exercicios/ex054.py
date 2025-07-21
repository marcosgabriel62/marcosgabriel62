#Crie um programa que leia o ano de nascimento de sete pessoas. No final, 
#mostre quantas pessoas ainda não atingiram a maioridade e quantas já são maiores.
from datetime import datetime
ano_atual = datetime.now().year
maiordeIdade=int(0)
menordeIdade=int(0)
for n in range (1,8):
    ano_nasc=int(input('Pessoa nº {} digite o ano de nascimento: '.format(n)))
    idade=ano_atual-ano_nasc
    if idade>=18:
        maiordeIdade=maiordeIdade+1
    elif idade<18:
        menordeIdade=menordeIdade+1
print('{} pessoas são maiores de idade\n{} pessoas são menores de idade'.format(maiordeIdade, menordeIdade))