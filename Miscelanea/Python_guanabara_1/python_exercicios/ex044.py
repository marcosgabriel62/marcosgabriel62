#Exercício Python 044: Elabore um programa que calcule o valor a ser pago por um produto, 
#considerando o seu preço normal e condição de pagamento:
#à vista dinheiro/cheque: 10% de desconto
#à vista no cartão: 5% de desconto
#em até 2x no cartão: preço formal
#3x ou mais no cartão: 20% de juros

valorNormal=float(input('Digite o valor normal do produto: '))
formaPagamento=int(input('\nDigite\n1 - à vista, dinheiro ou cheque\n2 - À vista no cartão de crédito\n3 - Em até 2x no cartão\n4 - 3x ou mais no cartão\n\n'))
if formaPagamento==1:
    print('Você selecionou a opção {} portanto o valor ficou {}'.format(formaPagamento,valorNormal*0.90))
elif formaPagamento==2:
    print('Você selecionou a opção {} portanto o valor ficou {}'.format(formaPagamento,valorNormal*0.95))
elif formaPagamento==3:
    print('Você selecionou a opção {} portanto o valor ficou {}'.format(formaPagamento,valorNormal))
elif formaPagamento==4:
    print('Você selecionou a opção {} portanto o valor ficou {}'.format(formaPagamento,valorNormal*1.20))
