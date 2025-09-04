Algoritmo "quadrante"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/08/2025
// Problema "quadrante" (adaptado de URI 1115)
// Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
// sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
// algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
// escrever mensagem alguma).
Var
// Seção de Declarações das variáveis 
   x, y : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Digite os valores das coordenadas X e Y: ")
   leia(x)
   leia(y)
   
   enquanto (x <> 0) e (y <> 0) faca
            se (x > 0) e (y > 0) entao
               escreval("QUADRANTE Q1")
            senao
                 se (x < 0) e (y > 0) entao
                    escreval("QUADRANTE Q2 ")
                 senao
                      se (x < 0) e (y < 0) entao
                         escreval("QUADRANTE Q3")
                      senao
                            escreval("QUADRANTE Q4")
                      fimse
                 fimse
            fimse
            
            escreval("Digite os valores das coordenadas X e Y: ")
            leia(x)
            leia(y)
   fimenquanto
Fimalgoritmo
