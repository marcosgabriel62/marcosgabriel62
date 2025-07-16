valorcasa=int(input('Digite o valor da casa: '))
valorsalario=int(input('Digite o valor do salario: '))
qtdanos=int(input('Digite a quantidade de anos para parcelamento: '))
parcela=((valorcasa/qtdanos)/12)
if parcela<(valorsalario*0.30):
    print('O financiamento foi aprovado e a prestação ficou em R$: {:.2f}'.format(parcela))
else:
    print('O financiamento foi recusado pois o maximo de comprometimento é R$: {:.2f} e a parcela ficou em {:.2f}'.format(valorsalario*0.30, parcela))