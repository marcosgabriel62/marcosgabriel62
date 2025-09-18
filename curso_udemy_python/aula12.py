nome='Marcos'
altura=1.70
peso=75
imc=peso/(altura*altura)
print(imc)
linha_1 = f'{nome} tem {altura:.2f} de altura e seu imc é {imc:.2f}'
print(linha_1)
print('{} tem {:.2f} de altura e seu imc é {:.2f}'.format(nome, altura, imc))