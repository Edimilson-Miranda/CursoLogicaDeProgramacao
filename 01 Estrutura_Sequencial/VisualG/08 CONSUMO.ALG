Algoritmo "consumo"

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