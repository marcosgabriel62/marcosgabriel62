#Faça um programa que leia o peso de cinco pessoas. No final, mostre qual foi o maior e o menor peso lidos.

maiorPeso=int(0)
menorPeso=int(1000)
for n in range (1,6):
    pesoPessoa=int(input('Pessoa nº {} digite o seu peso: '.format(n)))

    if pesoPessoa>maiorPeso:
        maiorPeso=pesoPessoa
    if pesoPessoa<menorPeso:
        menorPeso=pesoPessoa

print('A pessoa mais leve pesa {} e a mais pesada {}'.format(menorPeso, maiorPeso))