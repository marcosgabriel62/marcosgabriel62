#minha solução
from datetime import date
dataNascimento=int(input('Digite a data de nascimento: '))
dataAtual=date.today().year
if (dataAtual-dataNascimento)>18:
    print('Você está {} ano(os) atrasado'.format((dataAtual-dataNascimento)-18))
elif (dataAtual-dataNascimento)<18:
    print('Você está {} ano(os) adiantado'.format(abs(((dataAtual-dataNascimento)-18))))
elif (dataAtual-dataNascimento)==18:
    print('Está em tempo de você se alistar')
