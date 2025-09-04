Algoritmo "troco_verificado"

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