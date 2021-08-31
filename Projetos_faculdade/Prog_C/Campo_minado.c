#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// configuração do tabuleiro
#define _ALTURA_    10
#define _LARGURA_   10
#define _QT_BOMBAS_ 20

// visualização do tabuleiro
#define _ABERTA_   0
#define _FECHADA_  1
#define _BANDEIRA_ 2

// conteúdo das células
#define _BOMBA_   -1

/*
  - estado da célula: int TabVisualiz[_ALTURA_][_LARGURA_];
   * aberta
   * fechada
   * esta com bandeira?

  - informações
   * se possui uma bomba
   * a qt de bombas ao redor
   0 -> 8
   -1 tem bomba!

*/

void InicializaTabuleiro( int TabVisualiz[_ALTURA_][_LARGURA_],
                          int TabConteudo[_ALTURA_][_LARGURA_] )
{
    int L, C;
    int qtBombasAlocadas = 0;
    bool achei = false;

    for(L=0; L < _ALTURA_; L++)
    {
        for(C=0; C < _LARGURA_; C++)
        {
            TabConteudo[L][C] = 0;
        }
    }

    while (qtBombasAlocadas < _QT_BOMBAS_ )
    {
        //printf(" qt bombas: %d\n", qtBombasAlocadas);
        achei = false;
        int X = rand() % (_LARGURA_ - 1);
        int Y = rand() % (_ALTURA_  - 1);

        if(TabConteudo[Y][X] == _BOMBA_)
        {
            achei = true;
        }

        if(!achei)
        {
            TabConteudo[Y][X] = _BOMBA_;
            qtBombasAlocadas++;
        }
    }

    //contagem
    int contaBombas = 0;
    for(L=0; L < _ALTURA_; L++)
    {
        for(C=0; C < _LARGURA_; C++)
        {
            if( TabConteudo[L][C] != _BOMBA_ )
            {
               contaBombas = 0;

               if(L > 0)               if(TabConteudo[L - 1][C] == _BOMBA_) contaBombas++; // cima
               if(L < (_ALTURA_  - 1)) if(TabConteudo[L + 1][C] == _BOMBA_) contaBombas++; // baixo
               if(C < (_LARGURA_ - 1)) if(TabConteudo[L][C + 1] == _BOMBA_) contaBombas++; // direita
               if(C > 0)               if(TabConteudo[L][C - 1] == _BOMBA_) contaBombas++; // esquerda

               TabConteudo[L][C] = contaBombas;
            }
        }

    }

}

void MostraTabuleiro( int TabVisualiz[_ALTURA_][_LARGURA_],
                      int TabConteudo[_ALTURA_][_LARGURA_] )
{
    int L, C;

    // mostra o conteúdo do tabuleiro
    for(L=0; L < _ALTURA_; L++)
    {
        for(C=0; C < _LARGURA_; C++)
        {
            //printf("| %2d ", TabConteudo[L][C]);
            switch( TabConteudo[L][C] )
            {
                case _BOMBA_: printf("| # "); break;
                case 0:       printf("| . "); break;
                default:      printf("| %d ", TabConteudo[L][C]);
                break;
            }
        }
        printf("|\n");
    }
}

int main()
{

 int TabVisualiz[_ALTURA_][_LARGURA_];
 int TabConteudo[_ALTURA_][_LARGURA_];


    srand(time(NULL));
    InicializaTabuleiro (TabVisualiz, TabConteudo);
    MostraTabuleiro(TabVisualiz, TabConteudo);

    printf("\nHello world!\n");
    return 0;
}


