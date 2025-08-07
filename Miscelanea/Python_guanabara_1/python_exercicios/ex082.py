#Crie um programa que vai ler vários números e colocar em uma lista. 
#Depois disso, crie duas listas extras que vão conter apenas os valores pares e os valores ímpares digitados, 
#respectivamente. Ao final, mostre o conteúdo das três listas geradas.

listainicial=[]
listapares=[]
listaimpares=[]
sair=False
numero=0
cont=0
resposta=''

while(sair==False):
    numero=int(input('Digite o {} numero: '.format(cont+1)))
    cont=cont+1
    listainicial.append(numero)
    if numero%2==0:
        listapares.append(numero)
    else:
        listaimpares.append(numero)

    resposta=input('Digite S para continuar: ').strip().upper()
    if resposta!='S':
            sair=True

print('A lista de todos os numeros é: {}'.format(listainicial))
print('A lista de todos os pares é: {}'.format(listapares))
print('A lista de todos os impares é {}'.format(listaimpares))
