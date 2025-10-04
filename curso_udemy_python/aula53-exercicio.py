"""
Faça uma lista de comprar com listas
O usuário deve ter a possibilidade de
inserir, apagar e listar valores da sua lista
Não permita que o programa quebre com 
erros de índices inexistentes na lista.
"""

import os
import time

lista=[]

def clear_terminal():
    _ = os.system('cls')

try:
    clear_terminal()
    while True:
        opcao=input('A - Adicionar\nB - Apagar\nC - Listar itens/indices\nD - Sair\nDigite a opção: ').upper()

        if opcao=='A':
            clear_terminal()
            material=input('Digite o que você quer incluir na lista: ')
            lista.append(material)
            print(f'{material} incluido na lista!')
            continuar=input('Pressione qualquer tecla para continuar....')
            clear_terminal()
            
        elif opcao=='B':
            clear_terminal()
            indice=input('Digite a posição da lista que você quer apagar: ')
            if indice.isdigit():
                indice_int=int(indice)
                indices = range(len(lista))
                if indice_int in indices:
                    del lista[indice_int]
                    print(f'Item {indice_int} da lista apagado!')
                else:
                    print(f'Digite um numero de indice válido! Não há nenhum item no indice {indice_int}')
            else:
                print('Não foi digitado um numero, tente novamente.')
            continuar=input('Pressione qualquer tecla para continuar....')
            clear_terminal()

        elif opcao=='C':
            clear_terminal()
            indices = range(len(lista))
            for indice in indices:
                print(indice, lista[indice])
            continuar=input('Pressione qualquer tecla para continuar....')
            clear_terminal()

        elif opcao=='D':
            break
   
        else:
            print('Opção inválida! tente novamente!')
            continuar=input('Pressione qualquer tecla para continuar....')
            clear_terminal()

except:
    print('Erro desconhecido')
    