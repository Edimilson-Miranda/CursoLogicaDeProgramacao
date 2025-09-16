#include <stdio.h>

  
// Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um 
// terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima 
// o vetor C gerado.

int main (){


    int N;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &N);

    int a[N], b[N], c[N];

    printf("Digite os valores do vetor A: \n");
    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    printf("Digite os valores do vetor B: \n");
    for (int i = 0; i < N; i++){
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < N; i++){
        c[i] = a[i] + b[i];
    }

    printf("VETOR RESULTANTE: \n");
    for (int i = 0; i < N; i++){
        printf("%d\n", c[i]);
    }
    
    
    return 0;
}