#include <stdio.h>


// Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
// fatorial de N.

int main (){


    int N, fat;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    fat = 1;

    for (int i = 1; i <= N; i++){
            fat = fat * i;
    }

    printf("FATORIAL = %d\n", fat);
    
    return 0;
}