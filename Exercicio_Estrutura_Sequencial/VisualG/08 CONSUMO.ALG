Algoritmo "consumo"


// Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
// combustível gasto por este carro ao percorrer tal distância. Seu programação
// deve mostrar o consumo médio do carro, com três casa decimais.
Var
          distanciaPercorrida : inteiro
          combustivelGastos, consumo : real
   
Inicio
          escreva("Distancia percorrida: ")
          leia(distanciaPercorrida)
          escreva("Combustível gasto: ")
          leia(combustivelGastos)
          
          consumo <- distanciaPercorrida /  combustivelGastos
          
          escreval("Consumo medio = ", consumo:4:3)

      
Fimalgoritmo