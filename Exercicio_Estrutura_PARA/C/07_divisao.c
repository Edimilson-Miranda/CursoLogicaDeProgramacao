#include <stdio.h>


// Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
// segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.

int main (){


    int N;
    double x, y, divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        printf("Entre com o numerador: ");
        scanf("%lf", &x);

        printf("Entre com o denominador: ");
        scanf("%lf", &y);


        if (y == 0){
            printf("DIVISAO IMPOSSIVEL \n");
        }
        else{
            divisao = x / y;
            printf("DIVISAO = %.2lf\n", divisao);
        }
        
    }
    
    return 0;
}