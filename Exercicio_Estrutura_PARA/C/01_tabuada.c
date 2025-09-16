#include <stdio.h>

// Problema "tabuada"
// Ler um número inteiro N, daí mostrar na tela a tabuada 
// de N para 1 a 10, conforme exemplo.

int main (){


    int N, produto;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    for(int i = 1; i <= 10; i++){
        produto = N * i;
        printf("%d x %d = %d\n", N, i, produto);
    }
    return 0;
}
