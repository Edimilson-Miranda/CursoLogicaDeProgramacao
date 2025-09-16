package vetores;

import java.util.Locale;
import java.util.Scanner;

public class dados_pessoas {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, qtdHomens, qtdMulheres;
        double menorAltura, maiorAltura, alturaFemMedia, alturaFemtotal;

        System.out.print("Quantas pessoas serao digitadas? ");
        N = sc.nextInt();

        double[] alturas = new double[N];
        char[] genero = new char[N];

        for (int i = 0;i < N;i++){
            System.out.printf("Altura da %da pessoa: ", i + 1);
            alturas[i] = sc.nextDouble();
            System.out.printf("Genero da %da pessoa: ", i + 1);
            genero[i] = sc.next().charAt(0);
        }

        menorAltura = alturas[0];
        maiorAltura = alturas[0];

        for (int i = 0;i < N;i++){
            if(alturas[i] > maiorAltura){
                maiorAltura = alturas[i];
            }
            if (alturas[i] < menorAltura){
                menorAltura = alturas[i];
            }
        }

        qtdHomens = 0;
        qtdMulheres = 0;
        alturaFemtotal = 0;
        for (int i = 0;i < N;i++){
            if (genero[i] == 'M'){
                qtdHomens ++;
            }
            else {
                qtdMulheres ++;
                alturaFemtotal = alturaFemtotal + alturas[i];
            }
        }

        alturaFemMedia = alturaFemtotal / qtdMulheres;

        System.out.printf("Menor altura = %.2f%n",menorAltura);
        System.out.printf("Maior altura = %.2f%n", maiorAltura);
        System.out.printf("Media das alturas das mulheres = %.2f%n",alturaFemMedia);
        System.out.println("Numero de homens = " + qtdHomens);

        sc.close();
    }
}
