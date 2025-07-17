#Faça um programa que mostre na tela uma contagem regressiva para o estouro 
#de fogos de artifício, indo de 10 até 0, com uma pausa de 1 segundo entre eles.

import time
n=int(10)
print ('contagem regressiva: ')
for i in range(11):
    print('{}'.format(n))
    n=n-1
    time.sleep(1)
print('Feliz ano novo!!!')

#solução do guanabara
for cont in range (10, -1, -1):
    print(cont)
    time.sleep(0.5)
print('acabou')
