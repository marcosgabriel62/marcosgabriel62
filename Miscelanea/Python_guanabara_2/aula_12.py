nome = str(input("Digite o seu nome: "))
if nome=='Gustavo':
    print('Que nome bonito!')

elif nome=='Pedro' or nome=='Maria' or nome=='Paulo':
    print('Seu nome é bem popular no Brasil')

elif nome in 'Ana paula jessica alessandra cassia rita':
    print('Belo nome feminino')

else:
    print ('Que nome normal')
print ("Tenha um bom dia Sr. {}".format(nome))
