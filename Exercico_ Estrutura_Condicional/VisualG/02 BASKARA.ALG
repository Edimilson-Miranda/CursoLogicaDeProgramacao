Algoritmo "baskara"


// Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
// de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
// conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
Var
     a, b, c, delta, x1, x2 : real
Inicio
      escreva("Digite o valor do coeficiente A: ")
      leia(a)
      escreva("Digite o valor do coeficiente B: ")
      leia(b)
      escreva("Digite o valor do coeficiente C: ")
      leia(c)
      delta <- Exp(b,2) - 4 * a * C

       se (a = 0) ou (delta < 0) entao
          escreval("Esta equação não possui raízes reais")
       senao
            x1 <- (-b + RaizQ(delta)) / (2 * a)
            x2 <- (-b - RaizQ(delta)) / (2 * a)
            escreval("X1 = ", x1:4:4)
            escreval("X2 = ", x2:4:4)
       fimse

      
Fimalgoritmo