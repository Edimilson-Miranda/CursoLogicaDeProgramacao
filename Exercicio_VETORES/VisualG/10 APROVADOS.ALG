Algoritmo "aprovados"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2025
Var
// Seção de Declarações das variáveis 
   N, i : inteiro
   notas1 : vetor [0..90] de real
   notas2 : vetor [0..99] de real
   nomes : vetor [0..99] de caractere
   media : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Quantos alunos serao digitando ? ")
   leia(N)
   
   para i de 0 ate N-1 faca
        escreval("Digite nome, primeira e suganda nota do", i+1, "o aluno:")
        leia(nomes[i])
        leia(notas1[i])
        leia(notas2[i])
   fimpara
   
   escreval("Alunos aprovados")
   para i de 0 ate N-1 faca
        media <- (notas1[i] + notas2[i]) / 2
        se media >= 6 entao
           escreval(nomes[i])
        fimse
   fimpara
Fimalgoritmo