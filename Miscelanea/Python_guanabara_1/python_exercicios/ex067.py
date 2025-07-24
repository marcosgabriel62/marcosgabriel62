#Faça um programa que mostre a tabuada de vários números, um de cada vez, para cada valor digitado pelo usuário. 
#O programa será interrompido quando o número solicitado for negativo. 
sair=False
while(sair==False):
    n1=float(input('Digite o numero que você quer fazer a tabuada: '))
    if n1>0 and n1<=10:
        for n in range (1,11):
            print('{} x {} = {}'.format(n,round(n1),round(n*n1)))
    elif n1>10:
        print('Digite um número entre 1 e 10')
    
    if n1<0:
        sair=True 
print('Programa terminado')