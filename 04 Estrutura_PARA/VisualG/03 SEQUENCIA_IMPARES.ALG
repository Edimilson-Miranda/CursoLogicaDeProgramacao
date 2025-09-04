Algoritmo "sequencia_impares"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2025

// Problema "sequencia_impares" (adaptado de URI 1067)
// Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
// se for o caso.
Var
     x, i : inteiro

Inicio
     escreva("Digite o valor de X: ")
     leia(x)
     
     para i de 1 ate x faca
          se i % 2 <> 0 entao
             escreval(i)
          fimse
     fimpara


Fimalgoritmo