
#include<stdio.h>

/*
#include<stdio.h>

/*
2)Escreva  um  c�digo  ANSI  C  que  popule  um  vetor de ?? posi��es com
valores  inteiros aleat�rios e n�o repetidos. O valor de ?? deve ser solicitado ao usu�rio.
Ao fim, o vetor dever� ser exibido na tela com seus valores ordenados de forma crescente.
*/
int main()
{

	int N, i;

	printf("Informa o tamanho do vetor: ");
	scanf("%d", &N);
	
	int Vetor[N];

	printf("\nIniciando o processamento utlizando %d posi��es...", N);

    srand(time(NULL));

	for (i = 0; i < N; i++)
	{
		Vetor[i] = rand() % N;
	}

    printf("\n");
	for (i = 0; i < N; i++)
	{
		printf("Vetor[%2d] = %2d\n", i, Vetor[i]);
	}


	return(0);

}

