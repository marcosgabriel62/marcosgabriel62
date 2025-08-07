expressao = str(input('Digite a expressão com parênteses: '))
parentesesabertos = list()
parentesesfechados = list()
for c in expressao:
    if c == '(':
        parentesesabertos.append(c)
    elif c == ')':
        parentesesfechados.append(c)
if len(parentesesabertos) == len(parentesesfechados):
    print(f'A expressão está correta! Você abriu e fechou {len(parentesesabertos)} parênteses.')
else:
    print(f'A expressão está incorreta! Você abriu {len(parentesesabertos)} parênteses, '
          f'porém fechou {len(parentesesfechados)}.')