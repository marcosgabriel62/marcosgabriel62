#include <stdio.h>

int main (void)
{
	float num1, num2, num3;
	int cont, num_maior, num_medio, num_menor;
	
	do{
	printf("Informe um numero 1: ");
	scanf(" %f", &num1);
		if (num1==(int)num1){
		cont=1;
		}	
	}while(cont==0);
	cont=0;
	
	do{
	printf("Informe um numero 2: ");
	scanf(" %f", &num2);
		if (num2==(int)num2){
		cont=1;
		}	
	}while(cont==0);
	cont=0;
	
	do{
	printf("Informe um numero 3: ");
	scanf(" %f", &num3);
		if (num3==(int)num3){
		cont=1;
		}	
	}while(cont==0);
	
	if ((num1>num2)&&(num1>num3)){
		num_maior=num1;
			if (num2>num3){
			num_medio=num2;
			num_menor=num3;	
			}
			else
			{
			num_medio=num3;
			num_menor=num2;	
			}
		}
			
	if ((num2>num1)&&(num2>num3)){
		num_maior=num2;
			if (num3>num1){
			num_medio=num3;
			num_menor=num1;	
			}
			else
			{
			num_medio=num1;
			num_menor=num3;	
			}
		}	
		
		
	if ((num3>num1)&&(num3>num2)){
		num_maior=num3;
			if (num2>num1){
			num_medio=num2;
			num_menor=num1;	
			}
			else
			{
			num_medio=num1;
			num_menor=num2;	
			}
		}
	
	printf("Os valores em ordem decrescente sao: %d %d %d\n", num_maior, num_medio, num_menor);
	
	
    system ("pause");
}
