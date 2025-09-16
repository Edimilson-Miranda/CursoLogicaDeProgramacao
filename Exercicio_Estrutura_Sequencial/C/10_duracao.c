#include <stdio.h>

// Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
// formato horas:minutos:segundos.

int main (){

    int duracao, resto, horas, minutos, segundos;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    resto = duracao % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d",horas, minutos, segundos);

    return 0;
}