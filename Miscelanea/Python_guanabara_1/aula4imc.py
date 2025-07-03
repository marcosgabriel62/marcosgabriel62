print('calculo de imc')
peso=input('digite seu peso: ')
altura=input('digite sua altura: ')
altura=float(altura)
peso=float(peso)
imc = peso/altura*altura

if imc>=81 and imc<90: 
    print('seu imc é: ', imc, "obeso")

if imc>=90: 
    print('seu imc é: ', imc, "morbido")