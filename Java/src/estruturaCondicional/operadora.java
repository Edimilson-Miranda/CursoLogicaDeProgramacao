package estruturaCondicional;

import java.util.Locale;
import java.util.Scanner;

public class operadora {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int minutos;
        double valorPago;

        System.out.print("Digite a quantidade de minutos: ");
        minutos = sc.nextInt();

        valorPago = 50.0;

        if (minutos > 100.0){
            valorPago = valorPago + 2 * (minutos - 100);
        }

        System.out.printf("Valor a pagar: %.2f%n", valorPago);

        sc.close();
    }
}
