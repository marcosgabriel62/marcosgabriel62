#crie um programa que leia duas notas de um aluno e calcule sua média, mostrando uma mensagem no final, de acordo com a média atingida:
#Média abaixo de 5.0: REPROVADO
#Média entre 5.0 e 6.9: RECUPERAÇÃO
#Média 7.0 ou superior: APROVADO

n1=int(input('Digite a primeira nota: '))
n2=int(input('Digite a segunda nota: '))
media=int((n1+n2)/2)
if media<5:
    print ('A nota do aluno foi {} portanto ele está reprovado'.format(media))
elif ((media>=5) and (media<7)):
    print('A media do aluno foi {} portanto ele está de recuperação'.format(media))
elif media>=7:
    print('A media do aluno foi {} portanto ele está aprovado'.format(media))