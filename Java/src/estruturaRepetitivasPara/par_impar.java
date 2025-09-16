package estruturaRepetitivasPara;

import java.util.Scanner;

public class par_impar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int N, x;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();

        for (int i = 1;i <= N;i++){
            System.out.print("Digite um numero: ");
            x = sc.nextInt();

            if (x == 0){
                System.out.println("NULO ");
            }
            else if (x % 2 == 0){
                if (x < 0){
                    System.out.println("PAR NEGATIVO");
                }
                else {
                    System.out.println("PAR POSITIVO");
                }
            }
            else if (x < 0){
                System.out.println("IMPAR NEGATIVO");
            }
            else {
                System.out.println("IMPAR POSITIVO ");
            }
        }

        sc.close();
    }
}
