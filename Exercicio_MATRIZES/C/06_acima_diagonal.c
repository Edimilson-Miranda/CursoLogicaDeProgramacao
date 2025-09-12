#include <stdio.h>


 
// Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N 
// contendo números inteiros. Mostrar a soma dos elementos acima da 
// diagonal principal. Um exemplo de números acima da diagonal 
// principal é mostrado ao lado (no caso as células com fundo cinza). 

int main (){


    int N, soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];


    for (int i = 0; i < N; i++){
         for (int j = 0; j < N; j++){
                printf("Elemento [%d, %d]: ", i, j);
                scanf("%d", &mat[i][j]);
         } 
    }

    soma = 0;
    for (int i = 0; i < N; i++){
         for (int j = 0; j < N; j++){
                if (i < j ){
                    soma = soma + mat[i][j];
                }
         } 
    }
    
    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", soma);
    
    return 0;
}