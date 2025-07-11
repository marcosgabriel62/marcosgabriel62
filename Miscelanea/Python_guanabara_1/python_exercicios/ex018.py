import math
angulo=float(input('Digite o angulo: '))
angulo=math.radians(angulo)
seno=math.sin(angulo)
cosseno=math.cos(angulo)
tangente=math.tan(angulo)
print('Para o angulo de {:.2f} temos\n{:.2f} seno\n{:.2f} cosseno\n{:.2f} tangente'.format(angulo, seno, cosseno, tangente))