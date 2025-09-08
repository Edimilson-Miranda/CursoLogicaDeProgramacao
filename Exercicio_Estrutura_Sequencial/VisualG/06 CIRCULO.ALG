Algoritmo "circulo"


// Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
// círculo com três casas decimais. A fórmula da área do círculo é a seguinte: ???????? = ??.?? . Você pode
// usar o valor de ?? fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
// diretamente o valor 3.14159
Var
          r, area : real
   
Inicio
         escreva("Digite o valor do raio do circulo: ")
         leia(r)
                                             //3.14159 valor do pi
         area <- Pi * r * r
         
         escreval("AREA = ", area:6:3)
      
Fimalgoritmo