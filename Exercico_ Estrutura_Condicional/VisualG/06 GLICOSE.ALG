Algoritmo "glicose"


// Fazer um programa para ler a quantidade de glicose
// no sangue de uma pessoa e depois mostrar na tela a
// classificação desta glicose de acordo com a tabela de
// referência ao lado.
Var
   glicose : real
Inicio
      escreva("Digite a medida da glicose: ")
      leia(glicose)
      se glicose <= 100.0 entao
         escreval("Classificação: normal ")
      senao
           se glicose <= 140.0 entao
              escreval("Classificação: elevado ")
           senao
                escreval("Classificação: diabetes ")
           fimse
      fimse
Fimalgoritmo