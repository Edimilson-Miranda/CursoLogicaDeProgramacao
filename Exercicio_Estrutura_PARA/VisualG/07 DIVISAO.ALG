Algoritmo "divisao"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2025

// Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
// segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
Var
// Seção de Declarações das variáveis 
   N, i : inteiro
   x, y, divisao : real

Inicio
      escreva("Quantos casos voce vai digitar? ")
      leia(N)
      para i de 1 ate N faca
           escreva("Entre com o numerador: ")
           leia(x)
           escreva("Entre com o denominador: ")
           leia(y)
           
           se y = 0 entao
              escreval("DIVISAO IMPOSSIVEL ")
           senao
                divisao <- x / y
                escreval("DIVISAO = ", divisao:2:2)
           fimse
      fimpara

Fimalgoritmo