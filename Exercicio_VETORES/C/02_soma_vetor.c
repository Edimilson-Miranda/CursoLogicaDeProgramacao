#include <stdio.h>


  
// Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida: 
// - Imprimir todos os elementos do vetor 
// - Mostrar na tela a soma e a média dos elementos do vetor .

int main (){


    int N;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vetor[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    soma = 0;
    for (int i = 0; i < N; i++){
        soma = soma + vetor[i];
    }
    
    
    media = soma / N;

    printf("\nVALORES = ");
    for (int i = 0; i < N; i++){
        printf("%.1lf ", vetor[i]);
    }
    
    printf("\nSOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", media);

    return 0;
}