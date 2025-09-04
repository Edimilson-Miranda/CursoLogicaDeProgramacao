Algoritmo "baskara"

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