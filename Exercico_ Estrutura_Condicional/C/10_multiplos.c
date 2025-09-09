#include <stdio.h>

// (adaptado de URI 1044)
// Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
// números podem ser digitados em qualquer ordem.

int main (){

    int x, y;


    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x % y == 0 || y % x == 0){
        printf("Sao multiplos \n");
    }
    else{
        printf("Nao sao multiplos \n");
    }
    return 0;
}