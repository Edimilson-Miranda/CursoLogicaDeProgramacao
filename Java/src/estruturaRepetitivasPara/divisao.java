package estruturaRepetitivasPara;

import java.util.Locale;
import java.util.Scanner;

public class divisao {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;
        double x, y, divisao;

        System.out.print("Quantos casos voce vai digitar? ");
        N = sc.nextInt();

        for (int i = 1;i <= N;i++){
            System.out.print("Entre com o numerador: ");
            x = sc.nextDouble();
            System.out.print("Entre com o denominador: ");
            y = sc.nextDouble();

            if (y == 0){
                System.out.println("DIVISAO IMPOSSIVEL");
            }
            else {
                divisao = x / y;

                System.out.printf("DIVISAO = %.2f%n",divisao);
            }
        }

        sc.close();

    }
}
