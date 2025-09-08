#include <stdio.h>

// Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
// combustível gasto por este carro ao percorrer tal distância. Seu programação
// deve mostrar o consumo médio do carro, com três casa decimais.

int main (){

    int distanciaPercorrida;
    double combustivelGastos, consumo;

    printf("Distancia percorrida: ");
    scanf("%d", &distanciaPercorrida);

    printf("Combustivel gasto: ");
    scanf("%lf", &combustivelGastos);

    consumo = distanciaPercorrida / combustivelGastos;

    printf("CONSUMO MEDIO = %.3lf\n", consumo);

    return 0;
}