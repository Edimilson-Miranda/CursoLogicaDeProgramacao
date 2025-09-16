package vetores;

import java.util.Locale;
import java.util.Scanner;

public class maior_posicao {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, posicaoMaior;
        double maior;

        System.out.print("Quanto numeros voce vai digitar? ");
        N = sc.nextInt();

        double[] vetor = new double[N];

        for (int i = 0;i < N;i++){
            System.out.print("Digite um numero: ");
            vetor[i] = sc.nextDouble();
        }

        maior = vetor[0];
        posicaoMaior = 0;

        for (int i = 0;i < N;i++){
            if (vetor[i] > maior){
                maior = vetor[i];
                posicaoMaior = i;
            }
        }

        System.out.println();
        System.out.printf("MAIOR VALOR = %.1f%n", maior);
        System.out.println("POSICAO DO MAIOR VALOR = " + posicaoMaior);

        sc.close();
    }
}
