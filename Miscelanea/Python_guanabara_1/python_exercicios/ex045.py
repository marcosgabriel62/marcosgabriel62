import random
#Crie um programa que faça o computador jogar Jokenpô com você.
minhaJogada=int(input('JO-KEN-PO!\nDigite sua jogada\n\n[1] - PEDRA\n[2] - PAPEL\n[3] - TESOURA\n\n'))
maquinaJogada=random.randint(1, 3)
jogadas=['pedra', 'papel', 'tesoura']
if (minhaJogada==1 or minhaJogada==2 or minhaJogada==3):
    if minhaJogada==maquinaJogada:
        print('{} x {} - Empate!'.format(jogadas[minhaJogada-1],jogadas[maquinaJogada-1]))
   
    elif minhaJogada==1:
        if minhaJogada==1 and maquinaJogada==2:
            print('{} x {} - você perdeu!'.format(jogadas[minhaJogada-1],jogadas[maquinaJogada-1]))
        elif minhaJogada==1 and maquinaJogada==3:
            print('{} x {} - você ganhou!'.format(jogadas[minhaJogada-1],jogadas[maquinaJogada-1])) 
   
    elif minhaJogada==2:
        if minhaJogada==2 and maquinaJogada==3:
            print('{} x {} - você perdeu!'.format(jogadas[minhaJogada-1],jogadas[maquinaJogada-1]))
        elif minhaJogada==2 and maquinaJogada==1:
            print('{} x {} - você ganhou!'.format(jogadas[minhaJogada-1],jogadas[maquinaJogada-1])) 
  
    elif minhaJogada==3:
        if minhaJogada==3 and maquinaJogada==1:
            print('{} x {} - você perdeu!'.format(jogadas[minhaJogada-1],jogadas[maquinaJogada-1]))
        elif minhaJogada==3 and maquinaJogada==2:
            print('{} x {} - você ganhou!'.format(jogadas[minhaJogada-1],jogadas[maquinaJogada-1])) 
else:
    print('Numero desconhecido')