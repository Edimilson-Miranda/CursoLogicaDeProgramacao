package matrizes;

import java.util.Scanner;

public class diagonal_negativos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N, cont;

        System.out.print("Qual a ordem da matriz? ");
        N = sc.nextInt();

        int[][] mat = new int[N][N];

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                System.out.printf("Elemento [%d, %d]: ", i , j);
                mat[i][j] = sc.nextInt();
            }
        }

        System.out.println("DIAGONAL PRINCIPAL: ");
        for (int i = 0; i < N; i++){
            System.out.print(mat[i][i] + " ");
        }

        cont = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (mat[i][j] < 0){
                    cont ++;
                }
            }
        }

        System.out.println();
        System.out.println("QUANTIDADE DE NEGATIVOS = " + cont);
        sc.close();
    }
}
