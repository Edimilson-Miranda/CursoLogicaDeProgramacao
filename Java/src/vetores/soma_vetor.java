package vetores;

import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;
        double soma, media;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();

        double[] vetor = new double[N];

        for (int i = 0;i < N;i++){
            System.out.print("Digite um numero: ");
            vetor[i] = sc.nextDouble();
        }

        soma = 0;
        for (int i = 0; i < N; i++){
            soma = soma + vetor[i];
        }

        media = soma / N;
        System.out.println();
        System.out.print("VALORES = ");
        for (int i = 0; i < N; i++){
            System.out.printf("%.1f ", vetor[i]);
        }

        System.out.printf("%nSOMA = %.2f%n", soma);
        System.out.printf("MEDIA = %.2f%n", media);

        sc.nextInt();
    }
}
