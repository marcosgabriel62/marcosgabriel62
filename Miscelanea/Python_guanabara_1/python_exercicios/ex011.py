largura=float(input('Digite a largura da parede: '))
altura=float(input('Digite a altura da parede: '))
rendimento=2
tamanhoParede=largura*altura
quantidadeTinta=tamanhoParede/rendimento
print('Para pintar uma parede de {} x {} que tem {} metros quadrados é necessário {:.2f} litros de tinta'.format(altura, largura, tamanhoParede, quantidadeTinta ))