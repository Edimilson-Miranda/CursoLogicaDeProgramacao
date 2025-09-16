#include <stdio.h>


// Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
// números lidos. Em caso de empate, mostrar apenas uma vez.

int main (){

    int num1, num2, num3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &num1);

    printf("Segundo valor: ");
    scanf("%d", &num2);

    printf("Terceiro valor: ");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3){
        menor = num1;
    }else if(num2 < num3){
        menor = num2;
    }else {
        menor = num3;
    }

    printf("Menor = %d\n", menor);


    return 0;
}

