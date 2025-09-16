package matrizes;

import java.util.Scanner;

public class acima_diagonal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int N, soma;

        System.out.print("Qual a ordem da matriz? ");
        N = sc.nextInt();

        int[][] matriz = new int[N][N];

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j ++){
                System.out.printf("Elemento [%d, %d]: ", i, j);
                matriz[i][j] = sc.nextInt();
            }
        }

        soma = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j ++){
                if (i < j){
                    soma = soma + matriz[i][j];
                }
            }
        }

        System.out.println("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + soma);
        sc.close();
    }
}
