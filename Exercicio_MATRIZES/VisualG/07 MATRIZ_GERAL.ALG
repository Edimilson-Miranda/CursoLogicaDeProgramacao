Algoritmo "matriz_geral"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/09/2025
Var
// Seção de Declarações das variáveis
    N, i, j, linhas, colunas : inteiro
    soma : real
    mat : vetor [0..9, 0..9] de real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
    escreva("Qual a ordem da matriz ? ")
    leia(N)

    para i de 0 ate N-1 faca
         para j de 0 ate N-1 faca
              escreva("Elemento [", i, ",", j, "]: ")
              leia(mat[i,j])
         fimpara
    fimpara

    soma <- 0
    para i de 0 ate N-1 faca
         para j de 0 ate N-1 faca
              se mat[i,j] > 0 entao
                 soma <- soma + mat[i,j]
              fimse
         fimpara
    fimpara
    escreval
    escreval("SOMA DOS POSITIVOS: ", soma:3:1)

    escreval
    escreva("Escolha uma linha: ")
    leia(linhas)
    escreva("LINHA ESCOLHIDA: ")
    para j de 0 ate N-1 faca
         escreva(mat[linhas, j]:3:1, " ")
    fimpara

    escreval
    escreval
    escreva("Escolha uma coluna: ")
    leia(colunas)
    escreva("COLUNA ESCOLHIDA: ")
    para i de 0 ate N-1 faca
           escreva(mat[i, colunas]:3:1, " ")
    fimpara

    escreval
    escreval
    escreva("DIAGONAL PRINCIPAL: ")
    para i de 0 ate N-1 faca
         escreva(mat[i,i]:3:1, " ")
    fimpara

    para i de 0 ate N-1 faca
         para j de 0 ate N-1 faca
              se mat[i,j] < 0 entao
                 mat[i,j] <- mat[i,j] * mat[i,j]
              fimse
         fimpara
    fimpara
    
    escreval
    escreval
    escreval("MATRIZ ALTERADA: ")
    para i de 0 ate N-1 faca
         para j de 0 ate N-1 faca
              escreva(mat[i,j]:3:1, " ")
         fimpara
         escreval
    fimpara

Fimalgoritmo