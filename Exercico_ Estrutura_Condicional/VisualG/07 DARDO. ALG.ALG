Algoritmo "dardo"



// No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
// Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
// foi a maior.
Var
      distancia1, distancia2,distancia3, maior : real
Inicio
      escreval("Digite as tres distancias: ")
      leia(distancia1)
      leia(distancia2)
      leia(distancia3)
      
      se (distancia1 > distancia2) e (distancia1 > distancia3) entao
         maior <- distancia1
      senao
           se distancia2 > distancia3 entao
              maior <- distancia2
           senao
                maior <- distancia3
           fimse
      fimse
      escreval("MAIOR DISTANCIA = ", maior:2:2)
Fimalgoritmo