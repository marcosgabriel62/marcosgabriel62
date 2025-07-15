distancia=int(input('Digite a distância da viagem: '))
if distancia<=200:
    print('O custo da viagem será de R$: {}'.format(distancia*0.50))
else:
    print('O custo da viagem será de R$: {}'.format(distancia*0.45))