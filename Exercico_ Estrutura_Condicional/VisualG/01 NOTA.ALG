Algoritmo "nota"

Var
   nota1, nota2, finalNota : real


Inicio
      escreva("Digite a primeira nota: ")
      leia(nota1)
      
      escreva("Digite a segunda nota: ")
      leia(nota2)
      
      finalNota <- nota1 + nota2
      
      escreval("NOTA FINAL = ", finalNota:5:1)
      
      se finalNota < 60 entao
         escreval("REPROVADO")
      fimse
      


Fimalgoritmo