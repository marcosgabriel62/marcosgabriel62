#Exercício Python 070: Crie um programa que leia o nome e o preço de vários produtos. 
# O programa deverá perguntar se o usuário vai continuar ou não. No final, mostre:
#A) qual é o total gasto na compra.
#B) quantos produtos custam mais de R$1000.
#C) qual é o nome do produto mais barato. 

valorProdutoMaisBarato=0
qtdprodutosMaisdeMilReais=0
nomeProdutoMaisBarato=''
nomeProduto=''
valorTotal=0
continuar=True
contador=0

while(continuar==True):
    nomeProduto=str(input('Digite o nome do produto: '))
    valorProduto=int(input('Digite o valor do produto: '))
    valorTotal=valorTotal+valorProduto #soma ao total o valor do produto atual
    contador=+1

    if contador==1:
        valorProdutoMaisBarato=valorProduto
        nomeProdutoMaisBarato=nomeProduto
    
    if valorProduto>1000: #se o produto custa mais de 1000 inclui no contador
        qtdprodutosMaisdeMilReais=+1
    
    if valorProduto<valorProdutoMaisBarato: #inclui o nome do produto mais barato
        valorProdutoMaisBarato=valorProduto
        nomeProdutoMaisBarato=nomeProduto
        print(nomeProdutoMaisBarato)

    resposta=str(input('Você deseja continuar? S/N '))
    resposta=resposta.lower()
    if(resposta=='n' or resposta=='s'):
        if resposta=='n':
            continuar=False
    else:
        print('Resposta inválida')
    
print('O total gasto na compra foi: R$: {}'.format(valorTotal))
print('A quantidade de itens que custam mais de 1000 reais foi: {} itens'.format(qtdprodutosMaisdeMilReais))
print('O nome do produto mais barato é: {}'.format(nomeProdutoMaisBarato))