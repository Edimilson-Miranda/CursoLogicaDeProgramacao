Algoritmo "soma_impares"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/08/2025

// Problema "soma_impares" (adaptado de URI 1071)
// Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
// impares entre eles.
Var
// Seção de Declarações das variáveis 
   x, y, troca , i, soma : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
    escreval("Digite dois numeros: ")
    leia(x)
    leia(y)
    
    se x > y entao
       troca <- x
       x <- y
       y <- troca
    fimse
    
    soma <- 0
    
    para i de x+1 ate y-1 faca
         se i % 2 <> 0 entao
            soma <- soma + i
         fimse
    fimpara
    escreval("SOMA = ", soma)

Fimalgoritmo