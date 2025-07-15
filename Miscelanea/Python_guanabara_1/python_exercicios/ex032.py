ano=int(input('Digite o ano: '))
if ((ano%4==0 and ano%100!=0) or (ano%4!=0 and ano%400==0)):
    print('o ano de {} é bisexto com certeza'.format(ano))
else:
    print('O ano não é bisexto infelizmente')
