Algoritmo "troco_verificado"



// Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
// O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
// e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
// ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
// valor restante conforme exemplo.
Var
     preco, dinheiroRecebido, troco, resto : real
     qtdComprada : inteiro
Inicio
      escreva("Preço unitário do produto: ")
      leia(preco)
      escreva("Quantidade comprada: ")
      leia(qtdComprada)
      escreva("Dinheiro recebido: ")
      leia(dinheiroRecebido)
      se dinheiroRecebido >=  (preco * qtdComprada) entao
            troco <- dinheiroRecebido - preco * qtdComprada
            escreval("TROCO = ", troco:2:2)
      senao
           resto <- preco * qtdComprada - dinheiroRecebido
           escreval("DINHEIRO INSUFICIENTE. FALTAM ", resto:2:2, " REAIS" )
      fimse
fimalgoritmo