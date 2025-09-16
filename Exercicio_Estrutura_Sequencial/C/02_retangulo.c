#include <stdio.h>
#include <math.h>
 
// Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor 
// da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos. 

int main (){
    // iniciando as variaveis.
    double base, altura, area, perimetro, diagonal;

    // solicitando o usuario a digita os dados.
    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    // calculado as area, perimetro  e diagonal.
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);


    // Exibindo os resultado na tela.
    printf("Area = %.4lF\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diagonal = %.4lf\n", diagonal);


    return 0;
}