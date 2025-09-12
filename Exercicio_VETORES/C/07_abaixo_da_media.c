#include <stdio.h>

// Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida, 
// mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos 
// os elementos do vetor que estejam abaixo da média, com uma casa decimal cada. 


int main (){


    int N;
    double media, soma;


    printf("Quantos elementos vai ter o vetor ? ");
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

    printf("\nMEDIA DO VETOR = %.3lf\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA: \n");
    for (int i = 0; i < N; i++){
        if (vetor[i] < media){
            printf("%.1lf\n", vetor[i]);
        }
        
    }
    
    
    return 0;
}
