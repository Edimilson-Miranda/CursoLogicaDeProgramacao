package matrizes;

import java.util.Locale;
import java.util.Scanner;

public class soma_linhas {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);


        int M, N;
        double somaLinha ;

        System.out.print("Qual a quantidade de linhas da matriz? ");
        M = sc.nextInt();
        System.out.print("Qual a quantidade de colunas da matriz? ");
        N = sc.nextInt();

        double[][] matriz = new double[M][N];
        double[] vetor = new double[M];

        for (int i = 0; i < M; i++){
            System.out.printf("Digite os elementos da %da. linhas: %n", i + 1);
            for (int j = 0; j < N; j++){
                matriz[i][j] = sc.nextDouble();
            }
        }
        for (int i = 0; i < M; i++){
            somaLinha = 0;
            for (int j = 0; j < N; j++){
                somaLinha = somaLinha + matriz[i][j];
            }
            vetor[i] = somaLinha;
        }
        System.out.println("VETOR GERADO:");
        for (int i = 0; i < M; i++){
            System.out.printf("%.1f%n",vetor[i]);
        }
        sc.close();
    }
}
