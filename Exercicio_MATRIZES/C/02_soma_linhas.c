#include <stdio.h>


  
// Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz 
// de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor 
// seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado. 

int main (){


    int M, N;
    double somaLinha;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &M);

    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &N);

    double mat[M][N], vetor[M];

    for (int i = 0; i < M; i++){
        printf("Digite os elementos da %da. linhas: \n", i+1);
        for (int j = 0; j < N; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

      for (int i = 0; i < M; i++){
        somaLinha = 0;
        for (int j = 0; j < N; j++){
            somaLinha = somaLinha + mat[i][j];
        }
        vetor[i] = somaLinha;
    }
    
    printf("VETOR GERADO: \n");
    for (int i = 0; i < M; i++){
        printf("%.1lf\n", vetor[i]);
    }
    
    return 0;
}