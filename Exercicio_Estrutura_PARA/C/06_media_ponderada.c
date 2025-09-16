#include <stdio.h>

// Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
// teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
// que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
// que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
// pela soma dos pesos.


int main(){

    int N;
    double a, b, c, media;


    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        printf("Digite tres numeros: \n");
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);

        media = (a * 2 + b * 3 + c * 5) / 10;

        printf("MEDIA = %.1lf\n", media);
    }
    
    return 0;
}