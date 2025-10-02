"""
Faça uma lista de comprar com listas
O usuário deve ter a possibilidade de
inserir, apagar e listar valores da sua lista
Não permita que o programa quebre com 
erros de índices inexistentes na lista.
"""

import os

lista=[]

try:
    while True:
        opcao=input(20*'*'+'\n' + 'Digite a opção:\nA - adicionar\nB - Apagar\nC - Listar itens/indices\n' + 20*'*' + '\n').upper()

        if opcao=='A':
            material=input('Digite o que você quer incluir na lista: ')
            lista.append(material)
            print(f'{material} incluido na lista!')

        elif opcao=='B':
            indice=input('Digite a posição da lista que você quer apagar')
            indice_int=int(indice)
            indices = range(len(lista))
            if indice_int in indices:
                del lista[indice_int]
                print('Item apagado!')
            else:
                print('Digite um indice válido')

        elif opcao=='C':
            indices = range(len(lista))
            for indice in indices:
                print(indice, lista[indice])
            
        else:
            print('Opção inválida! tente novamente!')


except:
    print('Erro desconhecido')