import math
comprimento_cateto_oposto=float(input('Digite o comprimento do cateto oposto: '))
comprimento_cateto_adjacente=float(input('Digite o comprimento do cateto adjacente: '))
comprimento_hipotenusa=math.hypot(comprimento_cateto_oposto,comprimento_cateto_adjacente)
print('O comprimento da hipotenusa é: {:.2f}'.format(comprimento_hipotenusa))