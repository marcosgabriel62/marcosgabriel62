#Crie um programa que leia dois valores e mostre um menu na tela:
#[ 1 ] somar
#[ 2 ] multiplicar
#[ 3 ] maior
#[ 4 ] novos números
#[ 5 ] sair do programa

import random

escolha=0
sair=False

n1=int(input('Digite o primeiro numero: '))
n2=int(input('Digite o segundo numero: '))

while(sair!=True):

        escolha=int(input('\nDigite sua escolha:\n[ 1 ] - somar\n[ 2 ] - multiplicar\n[ 3 ] - maior\n[ 4 ] - novos números\n[ 5 ] - sair do programa\n'))
        if escolha>0 and escolha<=5:
            if escolha==1:
                resultado=n1+n2
                print('{} + {} = {}'.format(n1, n2, resultado))
                print('===='*10)
            elif escolha==2:
                resultado=n1*n2
                print('{} * {} = {}'.format(n1, n2, resultado))
                print('===='*10)
            elif escolha==3:
                if n1>n2:
                    resultado=n1
                else:
                    resultado=n2
                print('entre {} e {} o maior numero é {}'.format(n1, n2, resultado))
                print('===='*10)

            elif escolha==4:
                n1=int(input('Digite o primeiro numero: '))
                n2=int(input('Digite o segundo numero: '))
            elif escolha==5:
                exit()
                
        else:
            print('Numero não reconhecido')
        