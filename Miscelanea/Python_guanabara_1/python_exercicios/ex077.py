tupla = ('aprender te deixa mais inteligente todos os dias')
tuplaseparada=tupla.split(' ')
for p in tuplaseparada:
    print('\nNa palavra {} temos: '.format(p.upper()))
    for letra in p:
        if letra in 'aeiou':
            print (letra, end=' ')