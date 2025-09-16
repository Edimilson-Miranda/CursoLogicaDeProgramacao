package vetores;

import java.util.Locale;
import java.util.Scanner;

public class media_pares {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, soma, contPares;
        double media;

        System.out.print("Quantos elementos vai ter o vetor? ");
        N = sc.nextInt();

        int[] vetor = new int[N];

        for (int i = 0;i < N;i++){
            System.out.print("Digite um numero: ");
            vetor[i] = sc.nextInt();
        }

        soma = 0;
        contPares = 0;
        for (int i = 0;i < N;i++){
            if (vetor[i] % 2 == 0){
                soma = soma + vetor[i];
                contPares ++;
            }
        }

        if (contPares == 0){
            System.out.println("NENHUM NUMERO PAR ");
        }
        else  {
            media = (double) soma / contPares;
            System.out.printf("MEDIA DOS PARES = %.1f%n", media);
        }
        sc.close();
    }
}
