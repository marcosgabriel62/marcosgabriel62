
#include<stdio.h>

/*
#include<stdio.h>

/*
2)Escreva  um  código  ANSI  C  que  popule  um  vetor de ?? posições com
valores  inteiros aleatórios e não repetidos. O valor de ?? deve ser solicitado ao usuário.
Ao fim, o vetor deverá ser exibido na tela com seus valores ordenados de forma crescente.
*/
int main()
{

	int N, i;

	printf("Informa o tamanho do vetor: ");
	scanf("%d", &N);
	
	int Vetor[N];

	printf("\nIniciando o processamento utlizando %d posições...", N);

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

