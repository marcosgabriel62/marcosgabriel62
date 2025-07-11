import random
nomes = []
for i in range (1,6):
    nomes.append(input('Digite o {} nome: '.format(i)))
escolhido=random.choice(nomes)
print('O escolhido foi: {}'.format(escolhido))