numero=int(input('Digite um numero: '))
print('O numero em binário é: {}'.format(bin(numero)))
print('O numero em octal é: {}'.format(oct(numero)))
print('O numero em hexadecimal é: {}'.format(hex(numero)))

numero = int(input("Digite um número inteiro: "))
print("Escolha a base para conversão:")
print("1 - Binário")
print("2 - Octal")
print("3 - Hexadecimal")
opcao = int(input("Opção: "))

if opcao == 1:
    resultado = bin(numero)
    print(f"O número {numero} em binário é: {resultado}")
elif opcao == 2:
    resultado = oct(numero)
    print(f"O número {numero} em octal é: {resultado}")
elif opcao == 3:
    resultado = hex(numero)
    print(f"O número {numero} em hexadecimal é: {resultado}")
else:
    print("Opção inválida.")