package vetores;

import java.util.Scanner;

public class numeros_pares {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N, qtePares;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();

        int[] vetor = new int[N];

        for (int i = 0;i < N;i++){
            System.out.print("Digite um numero: ");
            vetor[i] = sc.nextInt();
        }

        qtePares = 0;
        System.out.println();
        System.out.println("NUMEROS PARES:");
        for (int i = 0;i < N;i++){
            if (vetor[i] % 2 == 0){
                System.out.print(vetor[i] + " ");
                qtePares ++;
            }
        }


        System.out.printf("%n%nQUANTIDADE DE PARES = " + qtePares);

        sc.close();
    }
}
