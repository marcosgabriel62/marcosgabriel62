import bisect
numeros = []

for i in range(5):
    n = int(input('Digite um numero: '))
    pos = bisect.bisect(numeros, n)  # Encontra a posição correta
    bisect.insort(numeros, n)        # Insere na posição correta
    print('Número {} incluso na posição {}'.format(n, pos))

print('Números digitados: {}'.format(numeros))