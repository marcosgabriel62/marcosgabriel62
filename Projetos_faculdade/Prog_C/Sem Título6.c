#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
    int Matriz[N][N];
    int L, C;

    for(L=0; L<N; L++)
    {
        for(C=0; C<N; C++)
        {
            Matriz[L][C] = 0;
        }
    }

    for(L=0; L<N; L++)
    {
        Matriz[L][L] = 1;
        Matriz[L][N-L-1] = 1;
    }

    for(L=0; L<N; L++)
    {
        for(C=0; C<N; C++)
        {
            printf(" %3d ", Matriz[L][C]);
        }
        printf("\n");
    }



    return 0;
}

