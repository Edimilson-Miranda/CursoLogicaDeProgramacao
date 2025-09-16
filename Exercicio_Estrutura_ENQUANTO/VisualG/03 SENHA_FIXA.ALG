Algoritmo "senha_fixa"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Nelio Alves
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/08/2025
//  Problema "senha_fixa" (adaptado de URI 1114)
//  Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
//  senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
//  for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
//  encerrado. Considere que a senha correta é o valor 2002.
Var

   senha : inteiro

Inicio

    escreval("Digite a senha: ")
    leia(senha)
    
    enquanto senha <> 2002 faca
        escreva("Senha Invalida! Tente novamente: ")
        leia(senha)
    fimenquanto
    escreval("Acesso permitido!")
Fimalgoritmo