#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h> 
#define t 20

int main(void)

{
  //seta idioma PT.
  setlocale(LC_ALL, "Portuguese");	
	
  //declaração de variáveis	
  int i;
  float xa [t];
  float ya [t];
  float xb [t];
  float yb [t];
  float xdominante [t];
  float ydominante [t];
  float xdominada [t];
  float ydominada [t];
  float apoio;
  
  //gera o valor de t valores e grava em vetor
  printf("Gerando valores aleatorios dos eixos x e y conforme valor informado em n:\n\n");
  for (i = 0; i < t; i++){
  	apoio = rand() % 1001;
  	xa [i] = apoio/1000;
  	ya [i] = apoio/1000;
  	printf("ponto em x: %f, y: %f\n", xa[i], ya[i]);	
  	}
  
    //cria arquivo CSV
	FILE *destino = fopen("valores_vetor_criado.csv", "w");
    printf("\n\nNovo arquivo de destino foi criado!\n\n");
    
    
    

    //carrega valores de x e y no arquivo .csv
    //desta forma ele carrega no CSV o arquivo mostrando x na primeira coluna e y na segunda coluna
    for (i = 0; i < t; i++){
  	fprintf (destino, "%f; %f\n", xa[i], ya[i] );
  	}
    
  	//encontra dominantes e dominadas
  	int k=0;
  	int f=0;
  	int j=0;
  	for (i=0; i< t; i++)
  		{
  			double ax = xa[i];
  			double ay = ya[i];
  			
  			for(k=i+1; i< t; k++){
  			double bx = xa[k];
  			double by = ya[k];
	  		if(
	  	  	  ((ax[k] < bx[k]) && (ay[i] < by[k]))||	
	          ((ax[i] < bx[k]) && (ay[i] == by[k]))||	
	  	      ((ax[i] == bx[k]) && (ay[i] < by[k]))	
	  	      )
	  		  {	
			  xdominante[f]=xa[i];
			  ydominante[f]=ya[i];	
			  f++;	
		      }
			  
			  if(
	  	  	  ((xa[i] > xb[k]) && (ya[i] > yb[k]))||	
	          ((xa[i] > xb[k]) && (ya[i] == yb[k]))||	
	  	      ((xa[i] == xb[k]) && (ya[i] > yb[k]))	
	  	      )
	  		  {	
			  xdominada[j]=xa[i];
			  ydominada[j]=ya[i];	
			  j++;	
		      }      
		}

    //cria novo arquivo txt
	FILE *destino2 = fopen("dominadas_dominantes_hipervolume.txt", "w");
    printf("Novo arquivo dominantes e dominadas foi criado!\n\n");
    fprintf (destino2, "Dominantes: \n");
    
    for (i=0; i< f; i++)
  		{
  		printf("dominantes: x: %f, y: %f\n", xdominante[i], ydominante[i]);	
		fprintf (destino2, "%f; %f\n", xdominante[i], ydominante[i] );  	
		}
    printf("\n");
    fprintf (destino2, "\n");
    
  //printa na tela as dominadas	
  fprintf (destino2, "Dominadas: \n");		
  for (i=0; i< j; i++)
  		{
  		printf("dominadas: x: %f, y: %f\n", xdominada[i], ydominada[i]);
		fprintf (destino2, "%f; %f\n", xdominada[i], ydominada[i] );   		
		}	
			
  getch();
  return 0;
}
