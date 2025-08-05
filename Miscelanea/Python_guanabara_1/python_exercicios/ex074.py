#Crie um programa que vai gerar cinco números aleatórios e colocar em uma tupla. Depois disso, mostre a 
#listagem de números gerados e também indique o menor e o maior valor que estão na tupla.

import random
n1=0
ram=0
nr=(random.randint(0, 1000), random.randint(0, 1000), random.randint(0, 1000), random.randint(0, 1000), random.randint(0, 1000))
print(nr)
print(min(nr))
print(max(nr))