#include <stdio.h>


  
// Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média 
// aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for 
// digitado, mostrar a mensagem "NENHUM NUMERO PAR" .

int main (){


    int N, soma, contPares;
    double media;


    printf("Quantos elementos vai ter o vetor ? ");
    scanf("%d", &N);


    int vetor[N];

    for (int i = 0; i < N; i++){
           printf("Digite um numero: ");
           scanf("%d", &vetor[i]); 
    }

    soma = 0;
    contPares = 0;

    for (int i = 0; i < N; i++){
            if (vetor[i] % 2 == 0){
                    soma = soma + vetor[i];
                    contPares ++;
            }
    }
    
    if (contPares == 0){
            printf("NENHUM NUMERO PAR \n");
    }
    else{
            media = (double) soma / contPares;
            printf("MEDIA DOS PARES = %.1lf\n", media);
    }
    
    return 0;
}