#include <stdio.h>

// (adaptado de URI 1038)
// Uma lanchonete possui vários produtos. Cada produto possui um código
// e um preço. Você deve fazer um programa para ler o código e a
// quantidade comprada de um produto (suponha um código válido), e daí
// informar qual o valor a ser pago, com duas casas decimais, conforme
// tabela de produtos ao lado.

int main (){

    int codigo, quantidade;
    double valorPago;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    if (codigo == 1){
        valorPago = 5.0 * quantidade;
    }
    else if(codigo == 2){
        valorPago = 3.50 * quantidade;
    }
    else if(codigo == 3){
        valorPago = 4.80 * quantidade;
    }
    else if(codigo == 4){
        valorPago = 8.90 * quantidade;
    }
    else if(codigo == 5){
        valorPago = 7.32 * quantidade;
    }

    printf("Valor a pagar: R$ %.2lf", valorPago);

    return 0;
}