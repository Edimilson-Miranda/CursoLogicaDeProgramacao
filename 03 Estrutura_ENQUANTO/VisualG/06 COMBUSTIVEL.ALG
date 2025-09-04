Algoritmo "combustivel"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/08/2025
// Problema "combustivel" (adaptado de URI 1134)
// Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
// Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
// 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
// 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
// código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
// como as quantidades de cada combustível.
Var
   gasolina, alcool, diesel, codigo : inteiro
Inicio
      escreva("Informa um codigo (1, 2, 3) ou 4 para parar: ")
      leia(codigo)
      gasolina <- 0
      diesel <- 0
      alcool <- 0
     // enquanto codigo <> 4 faca
       //        se codigo = 1 entao
         //         alcool <- alcool + 1
           //    senao
             //       se codigo = 2 entao
               //        gasolina <- gasolina + 1
                 //   senao
                   //      se codigo = 3 entao
                     //       diesel <- diesel + 1
                    //fimse
               //fimse

      // escreva("Informa um codigo (1, 2, 3) ou 4 para parar: ")
      // leia(codigo)
     // fimenquanto
      // escreval("MUITO OBRIGADO")
      // escreval("Alcool: ",alcool)
      // escreval("Gasolina: ",gasolina)
      // escreval("Diesel: ",diesel)
      
      enquanto codigo <> 4 faca
               escolha codigo
               caso 1
                    alcool <- alcool + 1
               caso 2
                    gasolina <- gasolina + 1
               caso 3
                    diesel <- diesel + 1
               fimescolha
               
               escreva("Informa um codigo (1, 2, 3) ou 4 para parar: ")
               leia(codigo)
      fimenquanto
      escreval("MUITO OBRIGADO")
      escreval("Alcool: ",alcool)
      escreval("Gasolina: ",gasolina)
      escreval("Diesel: ",diesel)
Fimalgoritmo