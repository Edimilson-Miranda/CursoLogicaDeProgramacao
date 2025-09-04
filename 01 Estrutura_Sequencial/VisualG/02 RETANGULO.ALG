Algoritmo "retangulo"


Var

       base, altura, area : real
       perimetro, diagonal : real
Inicio


      escreva("Base do retangulo: ")
      leia (base)
      escreva("Altura do retangulo: ")
      leia(altura)
      area <- base * altura
      perimetro <- 2 * (base + altura)
      diagonal <- RaizQ(base * base + altura * altura)
      
      escreval("Area = ", area:8:4)
      escreval("Perimetro = ", perimetro:8:4)
      escreval("Diagonal = ", diagonal:8:4)
      
        

Fimalgoritmo