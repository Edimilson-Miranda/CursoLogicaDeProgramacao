Algoritmo "abaixo_da_media"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/08/2025
Var
// Seção de Declarações das variáveis 
   N, i : inteiro
   media, soma : real
   vet : vetor [0..99] de real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
     escreva("Quantos elementos vai ter o vetor ? ")
     leia(N)
     
     para i de 0 ate N-1 faca
          escreva("Digite um numero: ")
          leia(vet[i])
     fimpara
     
     soma <- 0
     para i de 0 ate N-1 faca
          soma <- soma + ve[i]
     fimpara
     
     media <- soma / N
     
     escreval
     escreval("MEDIA DO VETOR = ", media:4:3)

     escreval("ELEMENTOS ABAIXO DA MEDIA: ")
     para i de 0 ate N-1 faca
            se vet[i] < media entao
               escreval(vet[i]:3:1)
            fimse
     fimpara
Fimalgoritmo