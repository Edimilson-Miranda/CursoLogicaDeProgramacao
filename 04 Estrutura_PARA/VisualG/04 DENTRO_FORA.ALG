Algoritmo "dentro_fora"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2025

// Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
// Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
// conforme exemplo
Var

   N, x, i, dentro, fora : inteiro

Inicio

    escreva("Quantos numeros voce vai digitar? ")
    leia(N)
    
    dentro <- 0
    fora <- 0
    
    para i de 1 ate N faca
         escreva("Digite um numero: ")
         leia(x)
         
         se (x >= 10) e (x <= 20) entao
            dentro <- dentro + 1
         senao
              fora <- fora + 1
         fimse
    fimpara
    escreval("DENTRO ", dentro)
    escreval("FORA ", fora)
Fimalgoritmo