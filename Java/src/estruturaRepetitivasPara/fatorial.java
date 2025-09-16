package estruturaRepetitivasPara;

import java.util.Scanner;

public class fatorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N, fat;

        System.out.print("Digite o valor de N: ");
        N = sc.nextInt();

        fat = 1;

        for (int i = 1;i <= N;i++){
            fat = fat * i;
        }

        System.out.println("FATORIAL = " + fat);

        sc.close();
    }
}
