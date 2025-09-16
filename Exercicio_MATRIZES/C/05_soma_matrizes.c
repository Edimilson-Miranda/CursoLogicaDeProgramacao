#include <stdio.h>

 
// Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas 
// cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma 
// dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.

int main (){


    int M, N;



    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &M);

    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &N);

    int a[M][N];
    int b[M][N];
    int c[M][N];

    printf("Digite os valores da matriz A: \n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("Elemento [%d, %d] ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Digite os valores da matriz B: \n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("Elemento [%d, %d]: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
                c[i][j] = a[i][j] + b[i][j];
        }
    }


    printf("MATRIZ SOMA: \n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
                printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}