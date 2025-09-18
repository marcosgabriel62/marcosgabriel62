
"""
Exercício
Peça ao usuário para digitar seu nome
Peça ao usuário para digitar sua idade
Se nome e idade foram digitados:
Exiba:
Seu nome é {nome}
Seu nome invertido é {nome invertido}
Seu nome contém (ou não) espaços
Seu nome tem {n} letras
A primeira letra do seu nome é {letra}
A última letra do seu nome é {letra}
Se nada for digitado em nome ou idade:
exiba "Desculpe, você deixou campos vazios."
"""

#minha solução
nome=input('Digite seu nome: ')
idade=input('Digite sua idade: ')
if nome!='':
    print(f'Seu nome é {nome}')
    print(f'Seu nome invertido é {nome[::-1]}')
    if ' ' in nome:
        print('Seu nome contém espaços')
    print(f'Seu nome contem {len(nome.replace(' ',''))} letras')
    print(f'A primeira letra do seu nome é {nome[0]}')
    ultimaletra=len(nome)-1
    print(f'A ultima letra do seu nome é {nome[ultimaletra]}')
else:
    print('Você deixou campos vazios')
   
#solução do professor:

nome = input('Digite o seu nome: ')
idade = input('Digite sua idade: ')

if nome and idade:
    print(f'Seu nome é {nome}')
    print(f'Seu nome invertido é {nome[::-1]}')

    if ' ' in nome:
        print('Seu nome contém espaços')
    else:
        print('Seu nome NÃO contém espaços')

    print(f'Seu nome tem {len(nome)} letras')
    print(f'A primeira letra do seu nome é {nome[0]}')
    print(f'A última letra do seu nome é {nome[-1]}')
else:
    print("Desculpe, você deixou campos vazios.")

    

    
