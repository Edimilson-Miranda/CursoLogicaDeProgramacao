#include <stdio.h>

// Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
// Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
// conforme exemplo

int main (){


    int N, x, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    dentro = 0;
    fora = 0;

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &x);

       if (x >= 10 && x <= 20){
            dentro ++;
       }
       else{
            fora ++;
       }
       
    }

    printf("DENTRO %d\n", dentro);
    printf("FORA %d\n", fora);
    
    return 0;
}