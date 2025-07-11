import random
nomes = []
aleatorio = []
for i in range (1,6):
    nomes.append(input('Digite o {} nome: '.format(i)))
random.shuffle(nomes)
print('O escolhido foi: {}'.format(nomes))