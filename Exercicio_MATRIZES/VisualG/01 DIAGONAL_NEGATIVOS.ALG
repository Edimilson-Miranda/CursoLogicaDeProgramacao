Algoritmo "diagonal_negativos"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/09/2025
Var

   N, cont, i, j : inteiro
   mat : vetor [0..9,0..9] de inteiro

Inicio

   escreva("Qual a ordem da matriz? ")
   leia(N)
   para i de 0 ate N-1 faca
        para j de 0 ate N-1 faca
             escreva("Elemento [", i, ",", j, " ]: ")
             leia(mat[i,j])
        fimpara
   fimpara
   
   escreval("DIAGONAL PRINCIPAL:")
   para i de 0 ate N-1 faca
       escreva(mat[i,i], " ")
   fimpara
   
   escreval
   
   cont <- 0
   para i de 0 ate N-1 faca
        para j de 0 ate N-1 faca
            se mat[i,j] < 0 entao
               cont <- cont + 1
            fimse
        fimpara
   fimpara
   escreval("QUANTIDADE DE NEGATIVOS = ", cont)
Fimalgoritmo