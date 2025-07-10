while anwser == 1:

    print('calculo de imc')
    peso=input('digite seu peso: ')
    altura=input('digite sua altura: ')
    altura=float(altura)
    peso=float(peso)
    imc = peso/(altura*altura)

    if imc<18.5: 
        print('seu imc é: ', imc, "magro")

    if imc>=18.5 and imc<25: 
        print('seu imc é: ', imc, "saudável")

    if imc>=25 and imc<30: 
        print('seu imc é: ', imc, "sobrepeso")

    if imc>=30 and imc<35: 
        print('seu imc é: ', imc, "obeso 1")

    if imc>=35 and imc<40: 
        print('seu imc é: ', imc, "obeso 2")

    if imc>=40: 
        print('seu imc é: ', imc, "obeso 3")

    resposta=input("deseja refazer? 1 para sim e 0 para não ")
