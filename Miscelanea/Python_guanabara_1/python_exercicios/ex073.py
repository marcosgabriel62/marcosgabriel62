#Exercício Python 073: Crie uma tupla preenchida com os 20 primeiros colocados da Tabela do Campeonato Brasileiro de Futebol,
#  na ordem de colocação. Depois mostre:
#a) Os 5 primeiros times.
#b) Os últimos 4 colocados.
#c) Times em ordem alfabética. 
#d) Em que posição está o time da Chapecoense.

tabela = ('C​ruzeiro', 'Flamengo', 'Red Bull Bragantino', 'Palmeiras', 'Botafogo', 'Bahia', 'Mirassol', 'Fluminense', 'Atlético Mineiro', 'Corinthians', 'Ceará', 'Internacional', 
          'Grêmio', 'São Paulo', 'Vitória', 'Chapecoense', 'Santos', 'Juventude', 'Fortaleza', 'Sport Recife')

print('Os primeiros 5 times são: ')
for n in range (0,5):
    print('{}º colocado: {}'.format(n+1,tabela[n]))
print('\n')

print('Os ultimos 5 times são: ')
for n in range (15,20):
    print('{}º colocado: {}'.format(n+1,tabela[n]))
print('\n')

tabelaordenada=tuple(sorted(tabela))
print('A tabela ordenada de times é: {}'.format(tabelaordenada))
print('A chapecoense está em {}º lugar'.format(tabela.index('Chapecoense')+1))