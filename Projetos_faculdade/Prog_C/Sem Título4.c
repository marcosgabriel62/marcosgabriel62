#include <stdio.h>
#include <stdlib.h>

int comparacao(int valorA, int valorB)
{
    if (valorA - valorB > 0)
    {
        return -1;
    }

    if (valorA - valorB < 0)
    {
        return 1;
    }

    return 0;
}

void adicionar_numero(int valor, int posicao_atual, int *valores)
{
    int posicao_anterior = posicao_atual - 1;

    if (posicao_anterior < 0)
    {
        valores[posicao_atual] = valor;
        return;
    }

    switch (comparacao(valor, valores[posicao_anterior]))
    {
    case -1:
        valores[posicao_atual] = valor;
        return;

    case 0:
        return gerar_e_adicionar_numero(posicao_atual, valores);

    default:
        valores[posicao_atual] = valores[posicao_anterior];

        return adicionar_numero(valor, posicao_anterior, valores);
    }
}

void gerar_e_adicionar_numero(int posicao_atual, int *valores)
{
    int valor = rand() % 100;

    for (int _posicao = posicao_atual; _posicao >= 0; _posicao--)
    {
        if (comparacao(valor, valores[_posicao]) == 0)
        {
            return gerar_e_adicionar_numero(posicao_atual, valores);
        }
    }

    return adicionar_numero(valor, posicao_atual, valores);
}

int main(int argc, char *argv[])
{
    int quantidade_numeros;

    printf("\nInforme a quantidade númeors que serão gerados: ");
    scanf("%d", &quantidade_numeros);

    int numeros_gerados[quantidade_numeros];

    for (int _posicao_atual = 0; _posicao_atual < quantidade_numeros; _posicao_atual++)
    {
        gerar_e_adicionar_numero(_posicao_atual, numeros_gerados);
    }

    printf("\nValores gerados em ordem decrescente");
    for (int _posicao = quantidade_numeros - 1; _posicao >= 0; _posicao--)
    {
        printf("\nposição %.3d:   %d", _posicao + 1, numeros_gerados[_posicao]);
    }
}
