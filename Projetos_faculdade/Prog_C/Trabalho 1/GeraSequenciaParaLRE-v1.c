// **********************************************************************
// PUCRS/FACIN
// Programa para geracao de dados repetidos em um vetor
//
// Marcio Sarroglia Pinho
//
// pinho@pucrs.br
// **********************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef int BOOL;

#define FALSE 0
#define TRUE 1
#define TAM_MAX 1000

// **********************************************************************
char *CompactaVetor(char *VetorDeEntrada, int QtdDeDados)
{
    char *VetorTemp;
    // inicialmente, pode alocar um vetor igual ao da entrada
    VetorTemp = (char*) malloc (sizeof (char) * QtdDeDados);

    // No final redimensiona o vetor. // isto devera ser alterado
    char *VetorFinal;
    VetorFinal = VetorTemp;

    // e retorna
    return VetorFinal;
}

// **********************************************************************
void GeraDadosRepetidos(char *V)
{
    int posInicial, posFinal, i;
    int QtdDeDados;
    int acabou = FALSE;
    unsigned char c;
    posInicial = 0;
    while(!acabou)
    {
        QtdDeDados = 10 + rand() % 50; // gera um numero entre 10 e 59
        posFinal = posInicial + QtdDeDados - 1;
        if (posFinal >= TAM_MAX)
        {
            // se não cabe mais...
            posFinal = TAM_MAX-1;
            acabou = TRUE;
        }
        c = rand() % 256; // gera o caracter que sera repetido (0-255)
        // coloca o caracter no vetor
        for(i=posInicial;i<=posFinal; i++)
            V[i] = c;

        printf("Inicio: %d  -  Fim: %d -  Caracter: %u\n",  posInicial, posFinal, c);
        posInicial = posFinal + 1;
    }
}

// **********************************************************************
int main()
{
    char * VetorDeEntrada;

    VetorDeEntrada =  (char*) malloc (sizeof (char) * TAM_MAX); // aloca memoria
    GeraDadosRepetidos(VetorDeEntrada);
    // Neste ponto do codigo, o VetorDeEntrada deve ter os dados com repeticoes
    char *VetorCompactado;
    VetorCompactado = CompactaVetor(VetorDeEntrada, TAM_MAX);

    printf("FIM.");
    free(VetorDeEntrada);
    free(VetorCompactado);
    return 0;

}