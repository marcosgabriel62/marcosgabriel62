#include <stdio.h>
#include <stdlib.h>

#define Height 5
#define Width 5

int main ()
{

	int Matriz[Height][Width];
	int acumulador = 0;
	int L, C;
	
	for (L=0; L<Height; L++)
	{
		for(C=0; C<Width; C++)
		{
		Matriz[L][C] = acumulador;
		acumulador++;	
		}		
	}
	
	for (L=0; L<Height; L++)
	{
		for(C=0; C<Width; C++)
		{
		printf("%2d " , Matriz [L][C]);
		}
		printf("\n");		
	}
	
	return 0;

}
