Algoritmo "experiencias"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/08/2025
Var
// Seção de Declarações das variáveis 
    N, i, qtd, totalCoelhos, totalRatos, totalSapos, totalCobaias : inteiro
    tipoCobaia : caractere
    pratos, psapos, pcoelhos : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
     totalRatos <- 0
     totalCoelhos <- 0
     totalSapos <- 0
     
     escreval("Quantos casos de teste serao digitados? ")
     leia(N)
     
     para i de 1 ate N faca
         escreva("Quantidade de cobaias: ")
         leia(qtd)
         escreva("Tipo de cobaia: ")
         leia(tipoCobaia)
         
         se tipoCobaia = "r" entao
            totalRatos <- totalRatos + qtd
         senao
              se tipoCobaia = "c" entao
                 totalCoelhos <- totalCoelhos + qtd
              senao
                   totalSapos <- totalSapos + qtd
              fimse
         fimse
     fimpara
     totalCobaias <- totalSapos + totalCoelhos + totalRatos
     
     pcoelhos <- totalCoelhos / totalCobaias * 100
     pratos <- totalRatos / totalCobaias * 100
     psapos <- totalSapos / totalCobaias * 100
     
     escreval
     escreval("RELATORIO FINAL:  ")
     escreval("Total: ", totalCobaias, " cobaias " )
     escreval("Total de coelhos: ", totalCoelhos)
     escreval("Total de ratos: ", totalRatos)
     escreval("Total de sapos: ", totalSapos)
     escreval("Percentual de coelhos: ", pcoelhos:4:2)
     escreval("Percentual de ratos: ", pratos:4:2)
     escreval("Percentual de sapos: ", psapos:4:2)
     

Fimalgoritmo