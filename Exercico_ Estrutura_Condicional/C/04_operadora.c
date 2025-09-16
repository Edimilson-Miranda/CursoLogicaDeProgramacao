#include <stdio.h>

// Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
// telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
// ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.

int main (){

    int minutos;
    double valorPago;


    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    valorPago = 50.0;

    if(minutos > 100){
        valorPago = valorPago + 2 * (minutos - 100);
    }

    printf("Valor a pagar: R$ %.2lf\n", valorPago);

    return 0;
}