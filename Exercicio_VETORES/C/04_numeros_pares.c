#include <stdio.h>

 
// Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na 
// tela todos os números pares, e também a quantidade de números pares. 

int main (){


    int N, qtePares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vetor[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    qtePares = 0;

    printf("\nNUMEROS PARES: \n");

    for (int i = 0; i < N; i++){
        if (vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
            qtePares ++;
        }
        
    }

    printf("\nQUANTIDADE DE PARES = %d\n", qtePares);
    
    
    return 0;
}