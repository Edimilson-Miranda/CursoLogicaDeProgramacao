#include <stdio.h>

// (adaptado de URI 1048)
// Uma empresa vai conceder um aumento percentual de
// salário aos seus funcionários dependendo de quanto
// cada pessoa ganha, conforme tabela ao lado. Fazer um
// programa para ler o salário de uma pessoa, daí mostrar
// qual o novo salário desta pessoa depois do aumento,
// quanto foi o aumento e qual foi a porcentagem de
// aumento.


int main (){

    double salario, aumento, novoSalario;
    int porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000.0){
        porcentagem = 20;
    }
    else if(salario <= 3000.0){
        porcentagem = 15;
    }
    else if(salario <= 8000.0){
        porcentagem = 10;
    }
    else if(salario > 8000.0 ){
        porcentagem = 5;
    }

    aumento = salario * porcentagem / 100;
    novoSalario = salario + aumento;

    printf("Novo salario = R$ %.2lf\n", novoSalario);
    printf("Aumento = R$ %.2lf\n", aumento);
    printf("Porcentagem = %d %%\n", porcentagem);

    return 0;
}