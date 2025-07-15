import random
numero_escolhido=(int(input('Digite o numero escolhido: ')))
numero_aleatorio = random.randint(1,5)
if numero_escolhido==numero_aleatorio:
    print ('Parabens! você acertou!')
else:
    print ('Que pena, você errou!')