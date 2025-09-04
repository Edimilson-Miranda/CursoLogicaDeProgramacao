Algoritmo "menor_de_tres"

Var
   num1, num2, num3, menor : inteiro
Inicio
      escreva("Digite o primeiro valor: ")
      leia (num1)
      escreva("Digite o segundo valor: ")
      leia (num2)
      escreva("Digite o terceiro valor: ")
      leia (num3)
      
      se (num1 < num2) e (num1 < num3) entao
         menor <- num1
      senao
           se num2 < num3 entao
              menor <- num2
           senao
                menor <- num3
           fimse
      fimse
      escreval("Menor = ", menor)

      
Fimalgoritmo