void trocaValores(int* X, int* Y)
//troca valores
{
	int aux = *X;
	*X = *Y;
	*Y = aux;
}

int main()
{
	int A, B, C, media=0;

	printf("Informe 3 valores inteiros: ");
	scanf("%d %d %d", &A, &B, &C);

	media = (A + B + C) / 3;

	if( A < B) trocaValores(&A, &B);
	if (A < C) trocaValores(&A, &C);
	if (B < C) trocaValores(&B, &C);

	printf("Valores informados: %d :: %d :: %d \nMedia: %d\n", A, B, C, media);

	return(0);
}

