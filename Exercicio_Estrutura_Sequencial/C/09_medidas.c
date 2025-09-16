#include <stdio.h>


// Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
// com quatro casas decimais):
// a) a área do quadrado que tem lado A
// b) a área do triângulo retângulo que base A e altura B
// c) a área do trapézio que tem bases A e B, e altura C

int main (){

    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio ;


    printf("Digite a medida A: ");
    scanf("%lf", &a);

    printf("Digite a medida B: ");
    scanf("%lf", &b);

    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQuadrado = a * a;
    areaTriangulo = a * b / 2;
    areaTrapezio = (a + b) * c / 2;

    printf("Area do QUADRADO = %.4lf\n", areaQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezio);

    return 0;
}