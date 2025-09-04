Algoritmo "tabuada"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/08/2025

// Problema "tabuada"
// Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
Var
// Seção de Declarações das variáveis 
   N, i, produto : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Deseja a tabuada para qual valor? ")
   leia(N)
   
   para i de 1 ate 10 faca
        produto <- N * i
        escreval(N, " X ", i, " = ", produto)
   fimpara

Fimalgoritmo