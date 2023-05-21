primos = []

import math

def isPrime(n):
    start = 2;

    while start <= math.sqrt(n):
        if n % start < 1:
            return False;
        start += 1;

    return n > 1;

for x in range(999):
    
    num=x

    contador=1

    while contador <= num:
        if isPrime(num) :
            contador=contador+1
            primos.append(num)
            break
        else:
            break

print (primos)

