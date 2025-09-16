package matrizes;

import java.util.Locale;
import java.util.Scanner;

public class matriz_geral {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);


        int N, linhas, colunas;
        double soma;

        System.out.print("Qual a ordem da matriz? ");
        N = sc.nextInt();

        double[][] matriz = new double[N][N];

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                System.out.printf("Elemento [%d, %d]: ", i,j);
                matriz[i][j] = sc.nextDouble();
            }
        }

        soma = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (matriz[i][j] > 0){
                    soma = soma + matriz[i][j];
                }
            }
        }

        System.out.println();
        System.out.printf("SOMA DOS POSITIVOS: %.1f%n", soma);

        System.out.println();
        System.out.print("Escolha uma linha: ");
        linhas = sc.nextInt();

        System.out.print("LINHA ESCOLHIDA: ");
        for (int j = 0; j < N; j++){
            System.out.printf("%.1f ", matriz[linhas][j]);
        }

        System.out.println();
        System.out.println();
        System.out.print("Escolha uma coluna: ");
        colunas = sc.nextInt();

        System.out.print("COLUNA ESCOLHIDA: ");
        for (int i = 0; i < N; i++){
            System.out.printf("%.1f ", matriz[i][colunas]);
        }

        System.out.println();
        System.out.println();
        System.out.print("DIAGONAL PRINCIPAL: ");
        for (int i = 0; i < N; i++){
            System.out.printf("%.1f ", matriz[i][i]);
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (matriz[i][j] < 0){
                    matriz[i][j] = matriz[i][j] * matriz[i][j];
                }
            }
        }

        System.out.println();
        System.out.println();
        System.out.println("MATRIZ ALTERADA: ");
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                System.out.printf("%.1f ", matriz[i][j]);
            }
            System.out.println();
        }
        sc.close();
    }
}
