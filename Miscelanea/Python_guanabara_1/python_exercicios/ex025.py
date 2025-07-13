nome=str(input('Digite eu nome completo: '))
busca = 'silva'
if nome.find(busca)==True:
    print('o nome da cidade começa com SANTO')
else:
    print('o nome da cidade não começa com santo')

cidade=str(input('Em que cidade você nasceu? '))
print (cidade[:5]=='Santo')
