while True:
    numero_1 = input('Digite o primeiro número: ')
    numero_2 = input('Digite o segundo número: ')
    operacao = input ('Digite o tipo de operação: +, -, /, *: ')
    imprimir_resultado=True

    try:
        numero_1_float=float(numero_1)
        numero_2_float=float(numero_2)
    except:
        print('Não foram digitados numeros válidos')
        imprimir_resultado=False

    try:    
        if operacao == '+':
            resultado = numero_1_float + numero_2_float
        elif operacao == '-':
            resultado = numero_1_float - numero_2_float   
        elif operacao == '/':
            resultado = numero_1_float / numero_2_float
        elif operacao == '*':
            resultado = numero_1_float * numero_2_float
    
    except:
        print('Não foram digitados operadores válidos')
        imprimir_resultado=False

    if imprimir_resultado:
        print(f'{numero_1_float} {operacao} {numero_2_float} = {resultado}')

    sair = input('Quer sair? Digite [s] para sim ou qualquer tecla para continuar: ').lower().startswith('s')
    if sair is True:
        break