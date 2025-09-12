Algoritmo "maior_posicao"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/08/2025
Var
   N, i, posicaoMaior : inteiro
   maior : real
   vet : vetor [0..99] de real

Inicio

   escreva("Quantos numeros voce vai digitar ?")
   leia(N)
   
   para i de 0 ate N-1 faca
      escreva("Digite um numero: ")
      leia(vet[i])
   fimpara
   
   maior <- vet[0]
   posicaoMaior <- 0
   
   para i de 1 ate N-1 faca
        se vet[i] > maior entao
           maior <- vet[i]
           posicaoMaior <- i
        fimse
   fimpara
   
   escreval
   escreval("MAIOR VALOR = ", maior:3:2)
   escreval("POSICAO DO MAIOR VALOR = ", posicaoMaior)
Fimalgoritmo