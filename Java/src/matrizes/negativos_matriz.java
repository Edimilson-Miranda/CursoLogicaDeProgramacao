package matrizes;

import java.util.Scanner;

public class negativos_matriz {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int M, N;

        System.out.print("Qual a quantidade de linhas da matriz? ");
        M = sc.nextInt();
        System.out.print("Qual a quantidade de colunas da matriz? ");
        N = sc.nextInt();

        int[][] matriz = new int[M][N];
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                System.out.printf("Elemento [%d, %d]: ", i, j);
                matriz[i][j] = sc.nextInt();
            }
        }

        System.out.println("VALORES NEGATIVOS: ");
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                if (matriz[i][j] < 0){
                    System.out.println(matriz[i][j]);
                }
            }
        }
        sc.close();
    }
}
