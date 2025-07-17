#Faça um programa que calcule a soma entre todos os números que são 
#múltiplos de três e que se encontram no intervalo de 1 até 500.

ntotal=int(0)
for n in range (1, 501, 2):
    if n%3==0:
        print(n, end=' ')
        ntotal=ntotal+n
print ('\n{}'.format(ntotal))