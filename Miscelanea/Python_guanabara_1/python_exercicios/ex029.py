velocidade=int(input('Digite a velocidade do carro: '))
if velocidade>80:
    print('Você foi multado!')
    print('A multa vai custar R$: {}'.format((velocidade-80)*7))
else:
    print('Você está dentro do limite, continue assim')