#include <stdio.h>
#include <string.h>

  
// Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na 
// tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, 
// bem como os nomes dessas pessoas caso houver. 

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");    
}

int main (){

    int N, cont;
    double soma, media, porcentagem;


    printf("Quantas pessoas serao digitadas ? ");
    scanf("%d", &N);

    char nomes[N][50];
    double alturas[N];
    int idades [N];

    for (int i = 0; i < N; i++){
        printf("Dados da %da pessoa: \n", i + 1 );
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        ler_texto(nomes[i], 50);
        printf("Idades: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }
    
    soma = 0;
    for (int i = 0; i < N; i++){
        soma = soma + alturas[i];
    }

    media = soma / N;
    printf("\nAlturas media: %.2lf\n", media);

    cont = 0;

    for (int i = 0; i < N; i++){
        if (idades[i] < 16){
            cont ++;
        }
        
    }

    porcentagem = (double) cont * 100.0 / N;

   printf("Pessoas com menos de 16 anos: %.1lf%%\n", porcentagem);
   for (int i = 0; i < N; i++){
        if (idades[i] < 16){
            printf("%s\n", nomes[i]);
        }
        
   }
    
    
    return 0;
}
