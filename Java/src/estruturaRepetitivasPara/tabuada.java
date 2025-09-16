package estruturaRepetitivasPara;

import java.util.Scanner;

public class tabuada {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N, produto;

        System.out.print("Deseja a tabuada para qual valor? ");
        N = sc.nextInt();

        for (int i = 1; i <= 10; i++){
            produto = N * i;
            System.out.println(N + " X " + i + " = " + produto);
        }

        sc.close();
    }
}
