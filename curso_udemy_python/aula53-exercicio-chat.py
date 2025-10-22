import os

lista = []

def clear_terminal():
    os.system('cls' if os.name == 'nt' else 'clear')

def pause():
    input('Pressione Enter para continuar...')

def adicionar():
    clear_terminal()
    material = input('Digite o que você quer incluir na lista: ')
    lista.append(material)
    print(f'{material} incluído na lista!')
    pause()
    clear_terminal()

def apagar():
    clear_terminal()
    if not lista:
        print("A lista está vazia, nada para apagar.")
    else:
        print("Lista atual:")
        for i, item in enumerate(lista):
            print(f"{i} - {item}")
        indice = input('Digite a posição da lista que você quer apagar: ')
        if indice.isdigit():
            indice_int = int(indice)
            if 0 <= indice_int < len(lista):
                removido = lista.pop(indice_int)
                print(f'Item "{removido}" apagado da lista!')
            else:
                print(f'Índice {indice_int} inválido.')
        else:
            print('Você deve digitar um número válido.')
    pause()
    clear_terminal()

def listar():
    clear_terminal()
    if lista:
        print("Itens da lista:")
        for i, item in enumerate(lista):
            print(f"{i} - {item}")
    else:
        print("A lista está vazia.")
    pause()
    clear_terminal()

def menu():
    while True:
        print("==== Lista de Compras ====")
        opcao = input(
            "A - Adicionar\n"
            "B - Apagar\n"
            "C - Listar itens\n"
            "D - Sair\n"
            "Digite a opção: "
        ).upper()

        if opcao == 'A':
            adicionar()
        elif opcao == 'B':
            apagar()
        elif opcao == 'C':
            listar()
        elif opcao == 'D':
            print("Saindo do programa...")
            break
        else:
            print("Opção inválida, tente novamente!")
            pause()
            clear_terminal()

if __name__ == "__main__":
    clear_terminal()
    menu()