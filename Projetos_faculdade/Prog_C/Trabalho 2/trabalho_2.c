#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define t 100

int main(void)

{
  int i;
  float x [t];
  float y [t];
  float apoio;
  
  //gera 100 valores e grava em vetor
  printf("Gerando 100 valores aleatorios dos eixos x e y:\n\n");
  
  for (i = 0; i < t; i++)
  {
  	apoio = rand() % 101;
  	x [i] = apoio/100;
  	apoio = rand () % 101;
  	y [i] = apoio/100;
  	printf("ponto em x: %f, y: %f\n", x[i], y[i]);
  }
  


  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  getch();
  return 0;
}
