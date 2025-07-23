#Faça um programa que leia o sexo de uma pessoa, mas só aceite os valores 'M' ou 'F'. 
#Caso esteja errado, peça a digitação novamente até ter um valor correto.

sexoIsCorrect=False
while(sexoIsCorrect!=True):
    sexo=input('Digite seu sexo: M para masculino e F para feminino: ')
    sexo=sexo.upper()
    if sexo=='M' or sexo=='F':
        print('O seu sexo é {}'.format(sexo))
        sexoIsCorrect=True
    else:
        print('Você digitou algo diferente do sexo, favor verificar')
    