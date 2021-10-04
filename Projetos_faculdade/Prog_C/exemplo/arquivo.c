#include<stdio.h>
#include<stdlib.h>
#define Lin 2
#define Col 2
int main(){

    int i, j, Mat[Lin][Col]; 
    char nome[30];
    FILE *arq;

    arq=fopen("matriz.txt", "r");
    fgets(nome, 30, arq);// pega o nome do participante
    for(i=0;i<Lin;i++){
        for(j=0;j<Col;j++){
            fscanf(arq,"%d ", &Mat[i][j]);
            printf("%d ", Mat[i][j]);//testar se a impressão esta correta
    }
    printf("\n");
    }
    fclose(arq); //fechar arquivo
    return 0;
} 
