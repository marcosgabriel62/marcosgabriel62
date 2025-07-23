# Melhore o jogo do DESAFIO 028 onde o computador vai "pensar" em um número entre 0 e 10. 
# Só que agora o jogador vai tentar adivinhar até acertar, 
# mostrando no final quantos palpites foram necessários para vencer.

import random
acertou=False
cont=0
numero_aleatorio = random.randint(1,10)
while (acertou!=True):
    numero_escolhido=(int(input('Digite o numero escolhido: ')))
    if numero_escolhido!=numero_aleatorio:
        cont=cont+1
        print ('Que pena, você errou! Tente novamente!')
    elif numero_escolhido==numero_aleatorio:
        acertou=True
print ('Parabens! você acertou na {}º tentativa'.format(cont+1))