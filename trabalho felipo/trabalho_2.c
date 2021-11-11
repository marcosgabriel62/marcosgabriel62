/*
Marcos Gabriel Koslovski Santos
Entrega em 07/11/2021
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define t 100

int main(void)

{	
  //declaração de variáveis.
  int i;
  float xa [t];
  float ya [t];
  float xdominante [t];
  float ydominante [t];
  float xdominado [t];
  float ydominado [t];
  float apoio;
  
  //gera os 100 valores aleatórios de x e y e salva em dois vetores.
    printf("Gerando valores aleatorios dos eixos x e y conforme valor informado em n...\n");
    for (i = 0; i < t; i++){
  	apoio = rand() % 1001;
  	xa [i] = apoio/1000;
  	apoio = rand () % 1001;
  	ya [i] = apoio/1000;
  	}
  
    //cria arquivo CSV com os 100 valores randomicos de x e y.
	FILE *destino = fopen("100_valores_x_y_randomicos.csv", "w");
    printf("\nNovo arquivo 100_valores_x_y_randomicos.csv foi criado!\n\n");
    
    /*carrega valores de x e y no arquivo .csv e desta forma ele carrega no CSV 
	o arquivo mostrando x na primeira coluna e y na segunda coluna*/
    for (i = 0; i < t; i++){
  	fprintf (destino, "%f; %f\n", xa[i], ya[i]);
  	}
  	fclose(destino);
     
  	//encontra dominantes e dominadas e salva em dois vetores
  	int j;
  	int valor_a=0;
  	int qtd_dominantes=0;
  	int valor_b=0;
  	int qtd_dominadas=0;
  	
  	for (i=0; i< t; i++)
  		{
  			for(j=0; j< t; j++){
  				
	  		if(
	  	  	  ((xa[i] < xa[j]) && (ya[i] < ya[j]))||	
	          ((xa[i] < xa[j]) && (ya[i] == ya[j]))||	
	  	      ((xa[i] == xa[j]) && (ya[i] < ya[j]))	
	  	      )
	  		  {	
			  valor_a=1;
		      }
		      
			if(
	  	  	  ((xa[i] > xa[j]) && (ya[i] > ya[j]))||	
	          ((xa[i] > xa[j]) && (ya[i] == ya[j]))||	
	  	      ((xa[i] == xa[j]) && (ya[i] > ya[j]))	
	  	      )
	  		  {	
			  valor_b=1;
		      }
		}
		
		if (valor_a==1&&valor_b==0){
		xdominante[qtd_dominantes]=xa[i];
		ydominante[qtd_dominantes]=ya[i];	
		qtd_dominantes++;		
		}
		else{
		xdominado[qtd_dominadas]=xa[i];
		ydominado[qtd_dominadas]=ya[i];
		qtd_dominadas++;		
		}
	
		valor_a=0;
		valor_b=0;
		
	}
    
    //cria dois arquivos csv para receber os valores de dominantes e dominadas
    FILE *destino2 = fopen("dominadas.csv", "w");
    printf("Novo arquivo dominadas.csv foi criado!\n\n");
    
    FILE *destino3 = fopen("dominantes.csv", "w");
    printf("Novo arquivo dominantes.csv foi criado!\n\n");
    
   //printa no arquivo as coordenadas x e y dos pontos dominantes.  
    for (i=0; i< qtd_dominantes; i++)
  		{
		fprintf (destino3, "%f; %f\n", xdominante[i], ydominante[i]);  	
		}
	fclose(destino3);
    
    //printa no arquivo as coordenadas x e y dos pontos dominados. 			
    for (i=0; i< qtd_dominadas; i++)
  		{
		fprintf (destino2, "%f; %f\n", xdominado[i], ydominado[i]);   		
		}	
	fclose(destino2);
	
	
	//ordenando valores para calcular hypervolume
	double x_auxiliar, y_auxiliar;
    for(i = 0; i < qtd_dominantes; i++)
    {
        for(j = 0; j < qtd_dominantes; j++)
        {
            if(ydominante[i] > ydominante[j])
            {
                y_auxiliar = ydominante[i];
                x_auxiliar = xdominante[i];
                ydominante[i] = ydominante[j];
                xdominante[i] = xdominante[j];
                ydominante[j] = y_auxiliar;
                xdominante[j] = x_auxiliar;
            }
        }
    }
    
	//calculando hipervolume usando as dominantes calculadas
	double area_hypervolume = 0;
	double variavel_auxiliar = 0;
	for(i = 0; i < qtd_dominantes; i++)
	{
		if(i == 0)
		{
			variavel_auxiliar = ((1 - xdominante[i]) * (1 - ydominante[i]));
			area_hypervolume = area_hypervolume+variavel_auxiliar;
		}
		else
		{
			variavel_auxiliar = ((1 - xdominante[i]) * (ydominante[i-1] - ydominante[i]));
			area_hypervolume = area_hypervolume+variavel_auxiliar;
		}
	}
	printf("Hipervolume: %f\n", area_hypervolume);
	
  getch();
  return 0;
}
