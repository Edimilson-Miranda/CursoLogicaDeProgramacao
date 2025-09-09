#include <stdio.h>

// Fazer um programa para ler a quantidade de glicose
// no sangue de uma pessoa e depois mostrar na tela a
// classificação desta glicose de acordo com a tabela de
// referência ao lado.

int main (){

    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100.0){
        printf("Classificacao: normal \n");
    }else if (glicose <= 140.0){
        printf("Classificacao: elevado \n");
    }else{
        printf("Classificacao: diabetes \n");
    }
    return 0;
}