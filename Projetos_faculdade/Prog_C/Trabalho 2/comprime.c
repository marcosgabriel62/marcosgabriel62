#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h> 

void main()
{ 	
	//seta idioma PT.
	setlocale(LC_ALL, "Portuguese");
	
	//abre arquivo com a matriz.
    FILE *origem = fopen("arquivo.txt", "rt");
    printf("O Arquivo de origem foi aberto!\n\n");
    
    //l� altura e largura da matriz.
    int largura, altura;
    fscanf(origem,"%d", &altura);
    fscanf(origem,"%d", &largura);
    printf("Altura %d / Largura: %d\n\n", altura, largura );
    
    //calcula qual dever� ser o tamanho do vetor para carregar os dados da matriz.
	int QtdDeDados = altura * largura;
	printf ("Quantidade de dados na matriz: %d\n\n", QtdDeDados);
	
	//l� dados da matriz e popula o vetor com estes dados. Caso encontre valor menor que 0 ou maior que 255 para e informa o valor.
	printf("Vetor gerado atrav�s da matriz: ");
	int i, j, valor[QtdDeDados], t=0; 
	for(i=0;i<altura;i++){
        for(j=0;j<largura;j++){
            fscanf(origem,"%d; ", &valor[t]);
            if ((valor[t]<=255)&&(valor[t]>=0)){	
            printf("%d ", valor[t]);
            t++;
			}
			else{	
			printf("\n\nHouston, temos um problema. H� um valor na matriz fora do intervalo toler�vel. \n\nValor: %d\n \nA execu��o falhou\n\n", valor[t]);
			system("pause");
			return;
			}
		}
    }
    
	/*caso n�o encontre nenhuma inconsist�ncia na matriz do arquivo a aplica��o sai do "for"
	e cria o novo arquivo onde ser� carregado matriz compactada.*/
    FILE *destino = fopen("comprimido.txt", "w");
    printf("\n\nNovo arquivo de destino foi criado!\n\n");
	
	
	/*verifica se o numero seguinte do vetor � igual ao atual. se for o contador recebe ++, se n�o for imprime na tela e salva no documento
    a contagem at� o momento e o numero que estava sendo contado.
    
    Sei que ficou uma gabiarra da porra mas foi o melhor que consegui fazer...
    
	*/
    int a;
    int cont;
    for (a=-1; a<QtdDeDados; a++){
    	
    	if (valor[a+1]==valor[a]){
    	cont++;
    	}
    	
    	if (valor[a+1]!=valor[a]){
    	fprintf (destino, "(%d, %d)\n", cont, valor[a-1]);
    	printf ("(%d, %d)\n", cont, valor[a-1]);
		cont=1;	
		}

		}

	printf("\nDados acima salvos no arquivo!\n\n");
	system("pause");
	return;
	}
	


    
    
    
    


    
    
