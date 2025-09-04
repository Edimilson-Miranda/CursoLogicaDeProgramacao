Algoritmo "teste_vetor"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 22/08/2025
Var
   N, i : inteiro
   vet : vetor [0 .. 9] de real
Inicio
      escreva(" Quantos numerosvocevai digitar? ")
      leia(N)
      
      para i de 0 ate N-1 faca
           escreva(" Digite um numero: ")
           leia(vet[i])
      fimpara
      
      escreval
      escreval("NUMEROS DIGITADOS: ")
      
      para i de 0 ate N-1 faca
           escreval(vet[i])
      fimpara
Fimalgoritmo