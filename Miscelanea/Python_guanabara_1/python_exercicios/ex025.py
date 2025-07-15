nome=str(input('Digite eu nome completo: '))
busca = 'silva'
if nome.find(busca)==True:
    print('Você tem silva no nome')
else:
    print('Você não tem silva no nome')

cidade=str(input('Em que cidade você nasceu? '))
print (cidade[:5]=='Santo')

nome=str(input('Qual seu nome completo? ')).strip()
print ('Seu nome tem silva? {}'.format('Silva' in nome.lower()))
