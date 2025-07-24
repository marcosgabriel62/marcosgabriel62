n=0
cont=0
soma=0
sair=False
while(sair!=True):
    n=int(input('digite um numero: '))
    if n!=999:
        soma=soma+n
        cont=cont+1
    else:
        sair=True
print('A soma de todos os numeros digitados foi: {}'.format(soma))
print('A quantidade de numeros digitados foi: {}'.format(cont))

    