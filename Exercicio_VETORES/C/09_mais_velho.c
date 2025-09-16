#include <stdio.h>
#include <string.h>

// Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes 
// devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome 
// da pessoa mais velha.

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");    
}



int main (){


    int N, maior, posicao_maior;


    printf("Quantas pessoas voce vai digitar ? ");
    scanf("%d", &N);

    int idades[N];
    char nomes[N][50];

    for (int i = 0; i < N; i++){
        printf("Dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }
    
    maior = idades[0];
    posicao_maior = 0;

    for (int i = 1; i < N; i++){
        if (idades[i] > maior){
             maior = idades[i];
             posicao_maior = i;
        }
        
    }

    printf("PESSOA MAIS VELHA = %s\n", nomes[posicao_maior]);
    
    return 0;
}