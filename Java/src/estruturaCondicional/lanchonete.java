package estruturaCondicional;

import java.util.Locale;
import java.util.Scanner;

public class lanchonete {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        // declarando as variaveis que serão usadas.
        double valorPago;
        int codigo, quantidade;

        //solicitando que usuario ensira os dados do programa.
        System.out.print("Codigo do produto comprado: ");
        codigo = sc.nextInt();
        System.out.print("Quantidade comprada: ");
        quantidade = sc.nextInt();

        //Condicional do dados que forão inseridos.
        switch (codigo){
            case 1:{
                valorPago = 5.0 * quantidade;
                break;
            }
            case 2:{
                valorPago =  3.50 * quantidade;
                break;
            }
            case 3:{
                valorPago = 4.80 * quantidade;
                break;
            }
            case 4:{
                valorPago = 8.90 * quantidade;
                break;
            }
            case 5:{
                valorPago = 7.32 * quantidade;
                break;
            }

            default:
                throw new IllegalStateException("Valor impossivel de calcular: " + codigo);
        }

        // exibido os resultado na tela por usuario.
        System.out.printf("Valor a pagar: %.2f%n",valorPago);
        
        sc.close();

    }
}
