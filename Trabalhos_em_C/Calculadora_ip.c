#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void){
	

	
	setlocale(LC_ALL, "Portuguese");
	
	int octeto[3];
	int octetox[3][8];
	int mascara, bits_emprestados_do_host, i;
	char classe;
	
    	printf ("***********************************************************************************************************");
    	printf ("\n*                                                                                                         *");
    	printf ("\n*                                           Calculadora de IP:                                            *");
    	printf ("\n*                                      Developed by Marcos Koslovski                                      *");
    	printf ("\n*                                                                                                         *");
    	printf ("\n***********************************************************************************************************\n\n");
        printf ("Digite o primeiro octeto: ");
        scanf("%d",&octeto[0]);
  		printf ("\nDigite o segundo octeto: ");
        scanf("%d",&octeto[1]);
        printf ("\nDigite o terceiro octeto: ");
        scanf("%d",&octeto[2]);
        printf ("\nDigite o quarto octeto: ");
        scanf("%d",&octeto[3]);
        printf ("\nDigite a mascara: ");
        scanf("%d",&mascara);
        printf ("\n\n***********************************************************************************************************\n");
        
        //classe pertencente
        
        if ((octeto[0]>=0)&(octeto[0]<=127)){
        	classe='A';
		}	
		if ((octeto[0]>=128)&(octeto[0]<=191)){
			classe='B';	
		}
		if ((octeto[0]>=192)&(octeto[0]<=223)){
			classe='C';	
		}
		
		//começando conversão de decimal para binario
		
		int bin[8]; 
    	int aux;
		
		for (i=0; i<=3; i++)
			{
				for (aux = 7; aux >= 0; aux--)
   					{
     		 			if (octeto[i] % 2 == 0)
     		 			octetox[i][aux]=0;
            			else
             			octetox[i][aux]=1;
             			octeto [i] = octeto[i] / 2;
       				}
			}
				
		for (i=0; i<=3; i++)
			{
				printf ("\n%d octeto em binário:\n", i+1);	
				printf ("\t128 \t64 \t32 \t16 \t8 \t4 \t2 \t1\n");	
				 	
				for (aux = 0; aux<=7; aux++)
					{	
					printf (" \t%d ", octetox[i][aux]);
					}
				printf ("\n\n");		
			}
			
		printf ("\n");	
		//printf("IP informado: %d.%d.%d.%d/%d", octeto[0], octeto[1], octeto[2], octeto[3], mascara);
		printf("Quantidade de BITs, emprestados da parte de Host: %d", bits_emprestados_do_host);
		printf("\nClasse: %c\n",classe);
        

}

