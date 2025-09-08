#include <stdio.h>


  
// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma 
// casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, 
// o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com 
// duas casas decimais, conforme exemplo. 


int main (){

    double largura, comprimento, metroQuadrado, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metroQuadrado);


    area = largura * comprimento;
    preco = area * metroQuadrado;


    printf("Area do terreno = %.2lf\n", area);
    printf("Preço do terrenno = %.2lf\n", preco);


    return 0;
}