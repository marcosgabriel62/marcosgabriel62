qtdkm=int(input('Digite a km percorrida: '))
qtddias=int(input('Digite quantos dias você ficou com o carro: '))
custodiaria=60
custokm=0.15
precoapagar=(custodiaria*qtddias)+(custokm*qtdkm)
print('você ficou {} dias e rodou {} kms portanto o valor da locação é de R$: {:.2f}'.format(qtddias, qtdkm, precoapagar))