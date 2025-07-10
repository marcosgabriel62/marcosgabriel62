valor=float(input('Digite o valor a receber desconto: '))
desconto=5
valordoDesconto=valor*(desconto/100)
valorcomDesconto=valor-valordoDesconto
print('O valor com desconto é de {:.2f}'.format(valorcomDesconto))