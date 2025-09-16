#include <stdio.h>

// Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
// quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento
// funcionario com uma mensagem explicativa.


int main () {

    char nome[50];
    double valorHora, pagamento;
    int horasTrabalhadas;

    printf("Nome: ");
    gets(nome);

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    fseek(stdin, 0, SEEK_END);

    pagamento = valorHora * horasTrabalhadas;

    printf("O pagamento para  %s  deve ser %.2lf\n", nome, pagamento);

    return 0;
}