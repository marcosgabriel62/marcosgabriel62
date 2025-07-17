from datetime import date
#A Confederação Nacional de Natação precisa de um programa que leia o ano de nascimento de um atleta e mostre sua categoria, de acordo com a idade:
#Até 9 anos: MIRIM
#Até 14 anos: INFANTIL
#Até 19 anos: JÚNIOR
#Até 25 anos: SÊNIOR
#Acima de 25 anos: MASTER

dataNascimento=int(input('Digite a data de nascimento: '))
dataAtual=date.today().year
idade=dataAtual-dataNascimento
if idade<=9:
    print('O atleta tem {} anos portanto está na categoria MIRIM'.format(idade))
elif idade<=14:
    print('O atleta tem {} anos portanto está na categoria INFANTIL'.format(idade))
elif idade<=19:
    print('O atleta tem {} anos portanto está na categoria JUNIOR'.format(idade))
elif idade<=25:
    print('O atleta tem {} anos portanto está na categoria SENIOR'.format(idade))
elif idade>25:
    print('O atleta tem {} anos portanto está na categoria MASTER'.format(idade))