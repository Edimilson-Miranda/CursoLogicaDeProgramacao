#include <stdio.h>

// Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
// círculo com três casas decimais. A fórmula da área do círculo é a seguinte: ???????? = ??.?? . Você pode
// usar o valor de ?? fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
// diretamente o valor 3.14159

int main () {

    double r, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    area = 3.14159 * r * r;

    printf("AREA = %.3lf\n", area);

    return 0;
}