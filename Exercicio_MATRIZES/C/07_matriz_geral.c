#include <stdio.h>


 
// Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as 
// seguintes ações: 
// a) calcular e imprimir a soma de todos os elementos positivos da matriz. 
// b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha. 
// c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna. 
// d) imprimir os elementos da diagonal principal da matriz. 
// e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir 
// a matriz alterada.

int main(){



    int N, linhas, colunas;
    double soma;

    printf("Qual a ordem da matriz ? ");
    scanf("%d", &N);


    double mat[N][N];


    for (int i = 0; i < N; i++){
         for (int j = 0; j < N; j++){
               printf("Elemento [%d, %d]: ", i, j);
               scanf("%lf", &mat[i][j]);
         }
    }

    soma = 0;
    for (int i = 0; i < N; i++){
         for (int j = 0; j < N; j++){
               if (mat[i][j] > 0){
                   soma = soma + mat[i][j];
               }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma);

    printf("\nEscolha uma linha: ");
    scanf("%d", &linhas);
    printf("LINHA ESCOLHIDA: ");
    for (int j = 0; j < N; j++){
          printf("%.1lf ", mat[linhas][ j]);
    }
    
    printf("\n");
    printf("\nEscolha uma coluna: ");
    scanf("%d", &colunas);

    printf("COLUNA ESCOLHIDA: ");
    for (int i = 0; i < N; i++){
          printf("%.1lf ", mat[i][ colunas]);
    }

    printf("\n");
    printf("\nDIAGONAL PRINCIPAL: ");
    for (int i = 0; i < N; i++){
          printf("%.1lf ", mat[i][i]);
    }

    for (int i = 0; i < N; i++){
         for (int j = 0; j < N; j++){
               if (mat[i][j] < 0){
                   mat[i][j] = mat[i][j] * mat[i][j];
               }
        }
    }
    
    printf("\n");
    printf("\nMATRIZ ALTERADA: ");
    for (int i = 0; i < N; i++){
         for (int j = 0; j < N; j++){
              printf("%.1lf ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;

}