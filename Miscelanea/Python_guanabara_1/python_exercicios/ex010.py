dinheiro_na_carteira=int(input('Digite quanto dinheiro você tem na carteira: '))
cotacao_dolar=3.27
dinheiro_em_dolar=dinheiro_na_carteira/cotacao_dolar
print('Você consegue com {} reais comprar {:.2f} dolares'.format(dinheiro_na_carteira, dinheiro_em_dolar))
