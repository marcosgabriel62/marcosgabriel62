#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
2)Escreva  um  c�digo  ANSI  C  que  popule  um  vetor de ?? posi��es com
valores  inteiros aleat�rios e n�o repetidoQs. O valor de ?? deve ser solicitado ao usu�rio.
Ao fim, o vetor dever� ser exibido na tela com seus valores ordenados de forma crescente.
*/
int main()
{

	int N=5, i;

	printf("Informa o tamanho do vetor: ");
	//scanf("%d", &N);
	int Vetor[N];

	printf("\nIniciando o processamento utlizando %d posi��es...", N);

	

	for (i = 0; i < N; i++)
	{
		Vetor[i] = rand() % N;
	}

	for (i = 0; i < N; i++)
	{
		printf("Vetor[%2d] = %2d\n", i, Vetor[i]);
	}


	return(0);

}
