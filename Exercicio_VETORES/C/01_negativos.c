#include <stdio.h>

// Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros 
// e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.

int main (){

    int N;
    

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vetor[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("NUMEROS NEGATIVOS: \n");
    for (int i = 0; i < N; i++){
        if (vetor[i] < 0){
            printf("%d\n", vetor[i]);
        }
        
    }
    
    
    return 0;
}