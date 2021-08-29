// **********************************************************************
// FACULDADE DOM BOSCO DE PORTO ALEGRE
// Programa de leitura de matrizes 
//
// Marcos Gabriel Koslovski Santos
//
// marcos.koslovski@stemac.com.bt
// **********************************************************************
#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define FALSE 0
#define TRUE 1


// **********************************************************************
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
// **********************************************************************
FILE *AbreArquivoTXT(const char *nome)
{
    FILE *arq;
    arq = fopen (nome,"rt");
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo %s...\n", nome);
        return NULL;
    }
    printf("Arquivo %s aberto!\n", nome);
    return arq;
}

// **********************************************************************
void LeTamanhoTXT(FILE *arq, int *largura, int *altura)
{
    //printf("lendo largura e altura...");
    fscanf(arq,"%d", largura);
    fscanf(arq,"%d", altura);
    printf("Largura: %d  -  Altura %d",*largura, *altura );

}

// **********************************************************************
void LeDadosTXT(FILE *arq, char *V, int qtd)
{
    int i, dado;
    for (i=0; i< qtd; i++)
    {
        fscanf(arq, "%d", &dado);
        V[i] = (char) dado; // coloca o dado no vetor, convertendo para
                            // o caracter de codigo ASCII "dado"
        //printf("%3c", V[i]);
    }

}
// **********************************************************************
int main()
{
    FILE *Arquivo;
    char nomeArquivo[] = "/Users/Pinho/ArquivosCodeBlocks/Imagens/1.txt";
    int largura, altura;
    char * VetorDeEntrada;

    Arquivo = AbreArquivoTXT(nomeArquivo);
    if (!Arquivo)
        return 1;
    LeTamanhoTXT(Arquivo, &largura, &altura);

    // Aloca um vetor com o tamanho necessario
    int QtdDeDados = largura * altura;
    VetorDeEntrada = (char*) malloc (sizeof (char) * QtdDeDados);
    if (VetorDeEntrada == NULL)
    {
        printf("Faltou memoria!");
        return 2;
    }
    LeDadosTXT(Arquivo, VetorDeEntrada, QtdDeDados);
    // Neste ponto do codigo, o VetorDeEntrada tem os dados lidos do arquivo
    char *VetorCompactado;
    VetorCompactado = CompactaVetor(VetorDeEntrada, QtdDeDados);

    printf("FIM.");
    free(VetorDeEntrada);
    return 0;

}
