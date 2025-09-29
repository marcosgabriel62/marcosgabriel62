"""
Faça um jogo para o usuário adivinhar qual
a palavra secreta.
- Você vai propor uma palavra secreta
qualquer e vai dar a possibilidade para
o usuário digitar apenas uma letra.
- Quando o usuário digitar uma letra, você 
vai conferir se a letra digitada está
na palavra secreta.
    - Se a letra digitada estiver na
    palavra secreta; exiba a letra;
    - Se a letra digitada não estiver
    na palavra secreta; exiba *.
Faça a contagem de tentativas do seu
usuário.
"""

sair=True
palavra_secreta='p'
cont=0

while sair==True:
    palavra_usuario = input('Digite sua sugestão: ').lower()
    if len(palavra_usuario)==1 and palavra_usuario.isalpha:
        if palavra_usuario==palavra_secreta:
            sair=False
        cont+=1
    else:
        print('A palavra informada tem mais de uma letra, favor verificar')

print(f'A palavra correta era {palavra_secreta}')
print(f'Você acertou após {cont} tentativas')

#solução do professor

import os

palavra_secreta = 'perfume'
letras_acertadas = ''
numero_tentativas = 0

while True:
    letra_digitada = input('Digite uma letra: ')
    numero_tentativas += 1

    if len(letra_digitada) > 1:
        print('Digite apenas uma letra.')
        continue

    if letra_digitada in palavra_secreta:
        letras_acertadas += letra_digitada

    for letra_secreta in palavra_secreta:
        if letra_secreta in letras_acertadas:
            print(letra_secreta)
        else:
            print('*')