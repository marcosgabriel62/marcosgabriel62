#Faça um programa que jogue par ou ímpar com o computador. O jogo só será interrompido quando o jogador perder, 
#mostrando o total de vitórias consecutivas que ele conquistou no final do jogo. 
import random
n1=0
n2=0
cont=0
par_ou_impar=''
parar=False
while (parar==False):
    par_ou_impar=input('Digite se você quer par ou impar: ')
    par_ou_impar=par_ou_impar.lower()
    if par_ou_impar=='par' or par_ou_impar=='impar':
        n1=int(input('Digite um numero par ou impar de 1 a 5: '))
        n2=random.randint(1, 5)

        if n1>=1 and n1<=5:
            if ((n1+n2)%2==0) and par_ou_impar=='par':
                print('Você venceu pois jogou {} e a maquina jogou {}'.format(n1, n2))
                cont=cont+1

            if (n1+n2)%2!=0 and par_ou_impar=='impar':
                print('Você venceu pois jogou {} e a maquina jogou {}'.format(n1, n2))
                cont=cont+1

            if ((n1+n2)%2==0) and par_ou_impar=='impar':
                print('Você perdeu pois jogou {} e a maquina jogou {}'.format(n1, n2))
                print('Você perdeu após ganhar {} partidas seguidas'.format(cont))
                parar=True  

            if (n1+n2)%2!=0 and par_ou_impar=='par':
                print('Você perdeu pois jogou {} e a maquina jogou {}'.format(n1, n2))
                print('Você perdeu após ganhar {} partidas seguidas'.format(cont))
                parar=True
        
        else:
            print('Numero inválido, tente novamente')
    else:
        print('digite par ou impar e tente novamente')

   
        

