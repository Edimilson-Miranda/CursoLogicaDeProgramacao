#include <stdio.h>

  
// Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela 
// o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento, 
// considerando a primeira posição como 0 (zero). 

int main (){

    int N, posicaoMaior;
    double maior;

    printf("Quanto numeros voce vai digitar? ");
    scanf("%d", &N);

    double vetor[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    maior = vetor[0];
    posicaoMaior = 0;

    for (int i = 0; i < N; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
            posicaoMaior = i;
        }
        
    }

    printf("\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n", posicaoMaior);
    
    
    return 0;
}