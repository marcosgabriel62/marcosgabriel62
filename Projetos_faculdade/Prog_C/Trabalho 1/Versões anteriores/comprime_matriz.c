
// FACULDADE DOM BOSCO DE PORTO ALEGRE
// Programa de leitura de matrizes 

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define FALSE 0
#define TRUE 1

FILE *AbreArquivoTXT(const char *nome)
{
    FILE *arq;
    arq = fopen (nome,"rt");
    printf("Arquivo %s aberto!\n", nome);
    return arq;
}

void LeTamanhoTXT(FILE *arq, int *largura, int *altura)
{
    printf("lendo largura e altura...");
    fscanf(arq,"%d", largura);
    fscanf(arq,"%d", altura);
    printf("Largura: %d  -  Altura %d",*largura, *altura );

}

void LeDadosTXT(FILE *arq, char *V, int qtd)
{
	FILE *pont_arq;
	pont_arq = fopen("comprimido.txt", "w");
    int i, dado;
    for (i=0; i< qtd; i++)
    {
        fscanf(arq, "%d", &dado);
        V[i] = (char) dado; 
                            
        fprintf("%3c", V[i]);
        
    }

}

char *CompactaVetor(char *VetorDeEntrada, int QtdDeDados)
{
    char *VetorTemp;
    // inicialmente, pode alocar um vetor igual ao da entrada
    VetorTemp = (char*) malloc (sizeof (char) * QtdDeDados);

    // No final redimensiona o vetor.
    char *VetorFinal;

    VetorFinal = VetorTemp; // isto devera ser alterado
    // e retorna
    return VetorFinal;
} 



int main()
{
    FILE *Arquivo;
    char nomeArquivo[] = "1.txt";
    int largura, altura;
    char * VetorDeEntrada;

    Arquivo = AbreArquivoTXT(nomeArquivo);
    if (!Arquivo)
        return 1;
    LeTamanhoTXT(Arquivo, &largura, &altura);

    int QtdDeDados = largura * altura;
    VetorDeEntrada = (char*) malloc (sizeof (char) * QtdDeDados);
    if (VetorDeEntrada == NULL)
    {
        printf("Faltou memoria!");
        return 2;
    }
    
    LeDadosTXT(Arquivo, VetorDeEntrada, QtdDeDados);
    char *VetorCompactado;
    VetorCompactado = CompactaVetor(VetorDeEntrada, QtdDeDados);

    printf("\nFIM.");
    
    free(VetorDeEntrada);
    
    return 0;
    





}
