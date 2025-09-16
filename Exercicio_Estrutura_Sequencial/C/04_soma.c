
#include <stdio.h>

 
// Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes 
// números.

int main (){
    int x, y, soma;

    printf("Vamos fazer uma soma de dois numeros inteiro: \n");

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    fseek(stdin, 0, SEEK_END);

    soma = x + y;

    printf("SOMA = %d\n", soma);

    return 0;


}