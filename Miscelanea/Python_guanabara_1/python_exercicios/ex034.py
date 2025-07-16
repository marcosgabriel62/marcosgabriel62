salarioantigo=int(input('Digite o salario atual: '))
if salarioantigo>1250:
    salarionovo=salarioantigo*1.10
else:
    salarionovo=salarioantigo*1.15
print ('O novo salario do colaborador é: R$: {}'.format(salarionovo))