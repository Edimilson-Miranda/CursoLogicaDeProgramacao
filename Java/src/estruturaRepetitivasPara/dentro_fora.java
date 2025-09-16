package estruturaRepetitivasPara;

import java.util.Scanner;

public class dentro_fora {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x, dentro, fora, N;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();

        dentro = 0;
        fora = 0;
        for (int i = 0;i < N;i++){
            System.out.print("Digite um numero: ");
            x = sc.nextInt();

            if (x >= 10 && x <= 20){
                dentro ++;
            }
            else {
                fora ++;
            }
        }

        System.out.println("DENTRO " + dentro);
        System.out.println("FORA " + fora);

        sc.close();
    }
}
