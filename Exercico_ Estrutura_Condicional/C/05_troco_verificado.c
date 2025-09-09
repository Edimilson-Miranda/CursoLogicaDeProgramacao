#include <stdio.h>

// Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
// O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
// e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
// ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
// valor restante conforme exemplo.

int main (){

    double preco, dinheiroRecebido, troco, resto;
    int qtdComprada;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &qtdComprada);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    if(dinheiroRecebido >= (preco * qtdComprada)){
        troco = dinheiroRecebido - preco * qtdComprada;
        printf("TROCO = %.2lf\n", troco);
    }
    else{
        resto = preco * qtdComprada - dinheiroRecebido;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf\n", resto);
    }

    return 0;
}