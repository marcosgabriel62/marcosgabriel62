#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h> 

void LeTamanhoArquivo(FILE *source, int *largura, int *altura)
{

    fscanf(source,"%d", largura);
    fscanf(source,"%d", altura);
    printf("Largura: %d  /  Altura %d\n\n",*largura, *altura );
}


void main()
{ 
	setlocale(LC_ALL, "Portuguese");
	
	int largura, altura;
    FILE *source = fopen("arquivo.txt", "rt");
    FILE *destination = fopen("comprimido.txt", "w");
    printf("Arquivo aberto!\n\n");
    printf("Novo arquivo criado!\n\n");
	LeTamanhoArquivo(source, &largura, &altura);
	int QtdDeDados = largura * altura;
	printf ("Quantidade de dados na matriz: %d\n\n", QtdDeDados);
	
	int i, j, valor[QtdDeDados], t=0; 
	for(i=0;i<altura;i++){
        for(j=0;j<largura;j++){
            fscanf(source,"%d; ", &valor[t]);
            if ((valor[t]<=255)&&(valor[t]>=0)){	
            printf("%d ", valor[t]);
            t++;
			}
			else{
			printf("\n\nHá um valor na matriz fora do intervalo tolerável. \n\nValor: %d\n \nA execução falhou", valor);
			return;
			}
		}
    }
    
    int a;
    int cont;
    printf("\n\n");
    
    for (a=-1; a<QtdDeDados; a++){
    	
    	if (valor[a+1]==valor[a]){
    	cont++;
    	}
    	
    	if (valor[a+1]!=valor[a]){
    	fprintf (destination, "(%d, %d)\n", cont, valor[a-1]);
    	printf ("(%d, %d)\n", cont, valor[a-1]);
		cont=1;	
		}

		}

	printf("\nDados acima salvos no arquivo!\n");
	
	}
	


    
    
    
    


    
    
