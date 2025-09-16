#include <stdio.h>


// Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
// Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
// se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
// apenas NULO.


int main (){

    int N, x;


    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);


    for (int i = 1; i <= N; i++){
        
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x == 0){
            printf("NULO\n");
        }
        else if(x % 2 == 0){
            if (x < 0){
                printf("PAR NEGATIVO\n");
            }
            else{
                printf("PAR POSITIVO\n");
            }
            
        }
        else if (x < 0){
            printf("IMPAR NEGATIVO\n");
        }
        else{
            printf("IMPAR POSITIVO\n");
        }
        
    }
    

    return 0;
}