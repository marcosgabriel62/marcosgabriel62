nomecidade=input('Digite o nome da cidade: ')
nomedividido=nomecidade.split()
if nomedividido[0]=='SANTO':
    print('o nome da cidade começa com SANTO')
else:
    print('o nome da cidade não começa com santo')

cidade=str(input('Em que cidade você nasceu? '))
print (cidade[:5]=='Santo')
