package vetores;

import java.util.Scanner;

public class mais_velho {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N, maior, posicao_maior;

        System.out.print("Quantas pessoas voce vai digitar? ");
        N = sc.nextInt();

        String[] nomes = new String[N];
        int[] idades = new int[N];

        for (int i = 0;i < N;i++){
            System.out.printf("Dados da %da pessoa: %n", i + 1);
            System.out.print("Nome: ");
            nomes[i] = sc.next();
            System.out.print("Idade: ");
            idades[i] = sc.nextInt();
        }

        maior = idades[0];
        posicao_maior = 0;
        for (int i = 0;i < N;i++){
            if (idades[i] > maior){
                maior = idades[i];
                posicao_maior = i;
            }
        }

        System.out.println("PESSOA MAIS VELHA: " + nomes[posicao_maior]);
        sc.close();
    }
}
