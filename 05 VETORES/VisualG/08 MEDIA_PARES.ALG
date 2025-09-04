Algoritmo "media_pares"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2025
Var
// Seção de Declarações das variáveis 
   N, i, soma, contPares : inteiro
   media : real
   vet :  vetor [0..99] de inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Quantos elementos vai ter o vetor ? ")
   leia(N)
   
   para i de 0 ate N-1 faca
       escreva("Digite um numero: ")
       leia(vet[i])
   fimpara
   
   soma <- 0
   contPares <- 0
   
   para i de 0 ate N-1 faca
       se vet[i] % 2 = 0 entao
          soma <- soma + vet[i]
          contPares <- contPares + 1
       fimse
   fimpara
   
   se contPares = 0 entao
      escreval("NENHUM NUMERO PAR ")
   senao
        media <- soma / contPares
        escreval("MEDIA DOS PARES = ", media:3:1)
   fimse

Fimalgoritmo