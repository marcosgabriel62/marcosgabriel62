#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int idx(int Plano, int Linha, int Coluna, int N)
{
	return Linha * N + Coluna + (N * N * Plano);	
}

void Tabulacao(int Plano)
{
	int k;
	for(k=0; k<Plano; k++)
	{
		printf("\t");
	}
}

void MostraTela(int *cubo, int N)
{
	int P, L, C;
	
	for(P=0; P<N; P++)
	{
		printf("\n");
		Tabulacao( P );
		printf("Plano %d\n", P);
		
		
		for(L=0; L<N; L++)
		{
			Tabulacao( P );
			for(C=0; C<N; C++)
			{
				printf(" %2d ", cubo[idx(P, L, C, N)]);
			}
			printf("\n");
		}
		
		
	}
}


int main(int argc, char *argv[]) 
{
	int N = 4;
	int L=0, C=0, P=0;
	int diagPrincipal=0, diagSecundaria=0;

	int *cubo = (int*)malloc( N * N * N * sizeof(int) );
	if ( cubo == NULL )
	{
		printf("\nErro alocando memoria!\n");
		exit( EXIT_FAILURE );
	}
	
	// preenche o cubo, visoa frontal
	// esq para a direita, cima para baixo,
	// frente para a parte traseira.
	int cont=0;
	for(P=0; P<N; P++)
		for(L=0; L<N; L++)
			for(C=0; C<N; C++)
			{
				cubo[idx(P, L, C, N)] = ++cont;
			}

	MostraTela(cubo, N);
	
	//calcula a soma das diagonais
	int k;
	for(P=0; P<N; P++) // navega plano a plano
	{
		diagPrincipal=0; diagSecundaria=0;
		for(k=0; k<N; k++)	
		{
			// visao FRONTAL
			diagPrincipal  += cubo[ idx(P, k, k,     N) ];
			diagSecundaria += cubo[ idx(P, k, N-k-1, N) ];
			
			//visao SUPERIOR
			
			// visao LATERAL
		}
	
	printf("Plano[%d] Princ: %d\n", P, diagPrincipal);
	printf("Plano[%d] Secun: %d\n", P, diagSecundaria);		
	}
	

	/*
		3 = 0 2
		5 = 1 1
		7 = 2 0
		
		1 = 0 0
		5 = 1 1
		9 = 2 2
	*/
	
	

	return 0;
}

