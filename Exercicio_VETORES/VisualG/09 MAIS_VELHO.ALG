Algoritmo "mais_velho"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2025
Var
// Seção de Declarações das variáveis 
   N, i, maior, posicao_maior : inteiro
   idades : vetor [0..99] de inteiro
   nomes : vetor [0..99] de caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Quantas pessoas voce vai digitar ? ")
   leia(N)
   

   para i de 0 ate N-1 faca
         escreval("Dados da", i+1, "a pessoa: ")
         escreva("Nome: ")
         leia(nomes[i])
         escreva("Idade: ")
         leia(idades[i])
   fimpara
   
   maior <- idades[0]
   posicao_maior <- 0
   
   para i de 1 ate N-1 faca
        se idades[i] > maior entao
           maior <- idades[i]
           posicao_maior <- i
        fimse
   fimpara
   
   escreval("PESSOA MAIS VELHA = ", nomes[posicao_maior])

Fimalgoritmo