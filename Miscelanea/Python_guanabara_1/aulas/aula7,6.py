numero=int(input('Digite um numero para tabuada: '))
for i in range (1,11):
    resposta=numero*i
    print('{}*{}={}'.format(numero, i, resposta))