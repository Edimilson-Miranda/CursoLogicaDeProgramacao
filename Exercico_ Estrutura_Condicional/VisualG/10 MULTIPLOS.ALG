Algoritmo "multiplos"


// (adaptado de URI 1044)
// Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
// números podem ser digitados em qualquer ordem.
Var
       x, y : inteiro
Inicio
       escreval("Digite dois numeros inteiros: ")
       leia(x)
       leia(y)
       
       se (x % y = 0) ou (y % x = 0) entao
          escreval("São multiplos")
       senao
            escreval("Não são multiplos")
       fimse
Fimalgoritmo
